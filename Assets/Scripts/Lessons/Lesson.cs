using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.UI;
using UnityEngine.Events;
using System.IO;
using System.Text;

public class Lesson : MonoBehaviour
{
    private Material defaultSkybox; // What the skybox was before a video was played

    private float fadeSpeed = 5.0f;
    private List<Renderer> transitionScreens; // List of all transition screens in the scene

    [Tooltip("The time taken for the transition between tutorial steps")]
    public float transitionTime;

    [Tooltip("The transform objects should be spawned relative to")]
    public Transform objectParentTransform;

    [Tooltip("Whether the lesson should be started automatically or wait to be started manually")]
    public bool playOnAwake;

    // UI SETTINGS
    [HideInInspector]
    public bool uiSettingsFoldout = false;

    [Tooltip("Where tutorial messages will be displayed")]
    public TextMeshProUGUI lessonText;

    [Tooltip("Where subtitles will be displayed")]
    public SubtitlesManager subtitleManager;

    [Tooltip("The icon to display when the user succeeds at an activity")]
    public Image correctIcon;


    // VIDEO SETTINGS
    [HideInInspector]
    public bool videoSettingsFoldout = false;

    [Tooltip("The videoplayer that should be used for video lessons")]
    public VideoPlayer defaultVideoPlayer;

    [Tooltip("The material to render videos to")]
    public Renderer defaultOutputMesh;
    //public Material videoMaterial;

    [Tooltip("The default video background (keeps default skybox if null)")]
    public VideoClip defaultVideo;

    // LOG SETTINGS
    [HideInInspector]
    public bool logSettingsFoldout = false;

    [Tooltip("Whether to log lesson information to disk")]
    public bool logToDisk = false;
    private bool isLogging { get { return logToDisk && !Application.isEditor; } }

    [Tooltip("The folder to store log files in")]
    public string logDirectory;

    [Tooltip("What to call the log file (defaults to current timestamp)")]
    public string logFilename;

    [Tooltip("Whether to include the current timestamp in the filename")]
    public bool includeTimestampInFilename;

    // Streamwrite for writing log messages
    private StreamWriter lessonLog;

    // The answers submitted during this step
    private List<string> submittedAnswers;


    // EVENTS
    [HideInInspector]
    public bool eventFoldout = false;
    public UnityEvent beforeLessonStart;
    public UnityEvent onLessonStart;
    public UnityEvent onLessonEnd;
    public UnityEvent onLessonPause;
    public UnityEvent onLessonResume;
    public UnityEvent onStepChanged;

    // LESSON STEPS
    [SerializeField, HideInInspector]
    [Tooltip("A list of all the steps in this lesson")]
    public List<LessonStep> lessonSteps = new List<LessonStep>();
    private int currentLessonStep;

    [SerializeField, HideInInspector]
    private List<GameObject> activeObjects = new List<GameObject>();

    public bool active { get; private set; } = false;

    private float lessonTime;

    private bool fadeLock = false;

    private bool firstLessonStep;

    private float timeInCurrentStep = 0f;
    private float videoRewindThreshold = 1f;

    public bool isPausable { 
        get 
        {
            return currentLessonStep >= 0 && currentLessonStep < lessonSteps.Count
                ? lessonSteps[currentLessonStep].isPausable
                : false;
        }
    }

    public bool isCurrentStepSkippable
    {
        get
        {
            return currentLessonStep >= 0 && currentLessonStep < lessonSteps.Count
                ? lessonSteps[currentLessonStep].isSkippable
                : false;
        }
    }

    public bool isCurrentStepRewindable { get { return currentLessonStep > 0; } }

    public Lesson()
    {
        lessonSteps = new List<LessonStep>();
        activeObjects = new List<GameObject>();
    }

    // Start is called before the first frame update
    void Start()
    {
        if (beforeLessonStart != null)
            beforeLessonStart.Invoke();

        // Attach to any playback menus in the scene
        //PlaybackMenuController[] playbackMenus = FindObjectsByType<PlaybackMenuController>(FindObjectsSortMode.None);
        //foreach(PlaybackMenuController menu in playbackMenus)
        //{
        //    menu.SetLesson(this);
        //}

        defaultSkybox = RenderSettings.skybox;
        lessonText.SetText("");
        // Despawn all current objects (if any)
        if (activeObjects != null)
        {
            foreach (GameObject activeObject in activeObjects)
                if (activeObject != null)
                    activeObject.SetActive(false);
            activeObjects.Clear();
        }

        foreach(LessonStep lessonStep in lessonSteps)
            foreach(GameObject lessonObject in lessonStep.lessonStepObjects)
                if (lessonObject != null)
                    lessonObject.SetActive(false);

        // Create a log file
        if (isLogging)
        {
            string filename =
                (logFilename == null || logFilename.Length == 0 || includeTimestampInFilename
                    ? $"{DateTime.Now.Year}-{DateTime.Now.Month}-{DateTime.Now.Day}-{DateTime.Now.TimeOfDay}--"
                    : "")
                + (logFilename != null && logFilename.Length > 0 ? logFilename : "")
                + ".txt";
            Directory.CreateDirectory($"/mnt/sdcard/{logDirectory}/{LogInfo.Instance.LogFolder}");
            lessonLog = new StreamWriter($"/mnt/sdcard/{logDirectory}/{LogInfo.Instance.LogFolder}/{filename}");
            submittedAnswers = new List<string>();
        }

        if (playOnAwake)
            StartCoroutine(WaitForLessonStart(2));
    }

    IEnumerator WaitForLessonStart(float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        StartLesson();
    }

    // Update is called once per frame
    void Update()
    {
        if (active && currentLessonStep >= 0)
        {
            lessonTime += Time.deltaTime;
            LessonStep currentStep = lessonSteps[currentLessonStep];
            if (currentStep.IsStepActive())
            {
                if (currentStep.IsStepComplete())
                    OnLessonStepComplete();
                else if (currentStep.IsStepConditionsSatisfied() && correctIcon != null)
                    correctIcon.enabled = true;
                else if (correctIcon != null)
                    correctIcon.enabled = false;
            }
        }
        timeInCurrentStep += Time.deltaTime;

        // timer
        float satisfactionTime = lessonSteps[currentLessonStep].activities[0].satisfactionTime;
        if (satisfactionTime != 0)
        { 
            string timeColor = timeInCurrentStep > satisfactionTime - 10f ? "#FF0000" : "#FFFFFF";
            string timeText = $"{timeInCurrentStep:F0} seconds";
            
            lessonText.SetText($"{lessonSteps[currentLessonStep].instructions}\n<color={timeColor}>{timeText}</color>");
        }

    }

    public void StartLesson()
    {
        // Find all transition screens in the scene
        transitionScreens = new List<Renderer>();
        var screenObjects = GameObject.FindGameObjectsWithTag("TransitionScreen");
        foreach (GameObject screenObject in screenObjects)
        {
            Renderer screenRenderer = screenObject.GetComponent<Renderer>();
            //screenRenderer.enabled = true;
            transitionScreens.Add(screenRenderer);
        }

        // Despawn all current objects (if any)
        foreach (GameObject activeObject in activeObjects)
            activeObject.SetActive(false);
        activeObjects.Clear();

        // If there's a default video start playing it
        /*if (videoPlayer != null && defaultVideo != null)
        {
            videoPlayer.clip = defaultVideo;
            videoPlayer.Play();
        }*/

        // Initialise any video activities
        //for (int i = 0; i < lessonSteps.Count; i++)
            

        // Start the first enabled step
        firstLessonStep = true;
        currentLessonStep = 0;
        while (!lessonSteps[currentLessonStep].enabled)
            currentLessonStep++;
        lessonText.gameObject.SetActive(true);
        lessonText.SetText("");
        active = true;
        StartLessonStep(currentLessonStep);
        lessonTime = 0f;

        // Let any listeners know
        if (onLessonStart != null)
            onLessonStart.Invoke();
    }

    public void StopLesson()
    {
        // Wipe whatever message is currently being displayed
        //lessonText.text = Environment.NewLine + $"Time taken: {lessonTime} seconds";
        active = false;
        lessonText.text = "";

        // Set the skybox back to default
        RenderSettings.skybox = defaultSkybox;

        // Let any listeners know
        if (onLessonEnd != null)
            onLessonEnd.Invoke();

        Debug.Log($"The lesson took {lessonTime} seconds to complete");
        if (isLogging)
        {
            LogLessonStats();
            lessonLog.Flush();
            lessonLog.Close();
        }
    }

    public void PauseLesson()
    {
        lessonSteps[currentLessonStep].PauseStep();
        active = false;

        // Let any listeners know
        if (onLessonPause != null)
            onLessonPause.Invoke();
    }

    public void ResumeLesson()
    {
        lessonSteps[currentLessonStep].ResumeStep();
        active = true;

        // Let any listeners know
        if (onLessonResume != null)
            onLessonResume.Invoke();
    }

    private void StartLessonStep(int index)
    {
        Debug.Log("Starting step " + index);
        // Fade out all transition screens
        //foreach (Renderer screenRenderer in transitionScreens)
        //    StartCoroutine(FadeObjectOut(screenRenderer));

        SetupLessonStep(index);
        lessonSteps[index].StartStep();
        firstLessonStep = false;

        // Let any listeners know
        if (onStepChanged != null)
            onStepChanged.Invoke();

        timeInCurrentStep = 0f;
    }

    private void StopLessonStep(int index)
    {
        // Fade in all transition screens
        //foreach (Renderer screenRenderer in transitionScreens)
        //    StartCoroutine(FadeObjectIn(screenRenderer));

        lessonSteps[currentLessonStep].StopStep();

        if (isLogging)
        {
            LogLessonStepStats();
            submittedAnswers.Clear();
        }
    }

    private void RestartLessonStep(int index)
    {
        StopLessonStep(index);
        StartLessonStep(index);
    }

    public void NextLessonStep()
    {
        StopLessonStep(currentLessonStep);

        int skipAmount = 1;
        while (currentLessonStep + skipAmount < lessonSteps.Count
            && !lessonSteps[currentLessonStep + skipAmount].enabled)
        {
            skipAmount++;
        }

        currentLessonStep += skipAmount;
        if (currentLessonStep < lessonSteps.Count)
            StartLessonStep(currentLessonStep);
        else
            StopLesson();
    }

    public void PrevLessonStep()
    {
        StopLessonStep(currentLessonStep);

        int skipAmount = 1;
        while (currentLessonStep >= 0
            && !lessonSteps[currentLessonStep - skipAmount].enabled)
        {
            skipAmount++;
        }
        currentLessonStep -= skipAmount;

        StartLessonStep(currentLessonStep);
    }

    public void Rewind()
    {
        if (!isCurrentStepRewindable)
            return;

        // If a video is playing, put it back to the start, otherwise go 
        // back to the previous step
        if (lessonSteps[currentLessonStep].hasVideos && timeInCurrentStep > videoRewindThreshold)
            RestartLessonStep(currentLessonStep);
        else
            PrevLessonStep();
    }

    /// <summary>
    /// Should be called whenever an answer is submitted during the lesson
    /// </summary>
    public void OnAnswerSubmitted(string answer)
    {
        if (isLogging)
            submittedAnswers.Add(answer);
    }

    /// <summary>
    /// Should be called whenever a lesson step has completed
    /// </summary>
    public void OnLessonStepComplete()
    {
        NextLessonStep();
    }

    /// <summary>
    /// Logs information about the current lesson to disk
    /// </summary>
    private void LogLessonStats()
    {
        lessonLog.WriteLine($"Lesson took {lessonTime}s to complete.");
    }

    /// <summary>
    /// Logs information about the current step to disk
    /// </summary>
    private void LogLessonStepStats()
    {
        lessonLog.WriteLine($"/// Step {currentLessonStep}: {lessonSteps[currentLessonStep].stepName} ///");
        lessonLog.WriteLine($"Time taken: {timeInCurrentStep}s");
        lessonLog.WriteLine($"Answers submitted: {String.Join(", ", submittedAnswers)}");
        lessonLog.WriteLine("");
    }


    /// <summary>
    /// Sets up the environment for the given lesson step, including setting the instruction text and
    /// spawning necessary objects (and despawning any we don't need), but doesn't actually start the
    /// lesson. This can be used to either set up the lesson in anticipation of starting or to
    /// preview the lesson step's layout in the editor.
    /// </summary>
    /// <param name="index">The step's index in the lessonSteps list</param>
    public void SetupLessonStep(int index)
    {
        // TODO: This is super unoptimised
        // Set the instruction text
        lessonText.SetText(lessonSteps[index].instructions);

        // Copy the active object list to avoid race condition errors
        List<GameObject> activeObjList = new List<GameObject>();
        activeObjList.AddRange(activeObjects);

        // Remove any objects we don't need anymore
        if (activeObjects != null)
        {
            foreach (GameObject activeObject in activeObjects)
                if (activeObject != null && !lessonSteps[index].lessonStepObjects.Contains(activeObject))
                {
                    activeObject.SetActive(false);
                    activeObjList.Remove(activeObject);
                    //if (Application.isPlaying)
                    //Destroy(activeObject);
                }

            // Add any new objects
            foreach (GameObject stepObject in lessonSteps[index].lessonStepObjects)
                if (stepObject != null && !activeObjList.Contains(stepObject))
                {
                    /*if (Application.isPlaying)
                    {
                        stepObject.SetActive(true);
                        GameObject instance = Realtime.Instantiate(stepObject);
                        instance.transform.position = stepObject.transform.position + objectParentTransform.position;
                        instance.transform.rotation = stepObject.transform.rotation. + objectParentTransform.rotation;

                        activeObjList.Add(instance);
                        //instance.SetActive(true);
                        stepObject.SetActive(false);
                        Debug.Log("Instance made real");
                    }
                    else
                    {*/
                    activeObjList.Add(stepObject);
                    stepObject.SetActive(true);
                    //}
                }
            activeObjects.Clear();
            activeObjects.AddRange(activeObjList);
        }

        InitializeVideoActivities(index);

        if (Application.isPlaying)
        {
            // Set up the skybox //TODO: Fix messy branches
            if (lessonSteps[index].usesDefaultVideoMesh)
            {   
                // If we found a video, pause the default one
                Debug.Log("Lesson has a video");
                //if (defaultVideo != null)
                //    videoPlayer.Stop();
                if (defaultOutputMesh)
                    StartCoroutine(FadeObjectIn(defaultOutputMesh));
            }
            /*else if (defaultVideo != null)
            {
                // A default video was chosen so play it
                Debug.Log("Playing the default video");
                videoPlayer.Stop();
                videoPlayer.clip = defaultVideo;
                videoPlayer.Play();
            }*/
            else
            {
                // Go back to the original skybox
                Debug.Log("No video, no default video. Changing back to default.");
                StartCoroutine(FadeObjectOut(defaultOutputMesh));
            }
        }
    }

    IEnumerator FadeObjectOut(Renderer fadingObject)
    {
        while (fadeLock)
            yield return null;

        fadeLock = true;

        Color objectColor = fadingObject.material.color;

        while (objectColor.a > 0.0f)
        {
            objectColor = fadingObject.material.color;
            float fadeAmount = objectColor.a - (fadeSpeed * Time.deltaTime);

            objectColor = new Color(objectColor.r, objectColor.g, objectColor.b, fadeAmount);
            fadingObject.material.color = objectColor;

            yield return null;
        }

        fadingObject.enabled = false;
        fadeLock = false;
    }

    IEnumerator FadeObjectIn(Renderer fadingObject)
    {
        while (fadeLock)
            yield return null;

        fadeLock = true;

        fadingObject.enabled = true;

        Color objectColor = fadingObject.material.color;

        while (objectColor.a < 1.0f)
        {
            objectColor = fadingObject.material.color;
            float fadeAmount = objectColor.a + (fadeSpeed * Time.deltaTime);

            objectColor = new Color(objectColor.r, objectColor.g, objectColor.b, fadeAmount);
            fadingObject.material.color = objectColor;

            yield return null;
        }

        fadeLock = false;
    }

    private void InitializeVideoActivities(int index)
    {
        foreach (LessonStepActivity activity in lessonSteps[index].activities)
            if (activity.activityType == LessonStepActivity.ActivityType.VideoActivity)
            {
                lessonSteps[index].hasVideos = true;
                if (((VideoActivity)activity).useDefaultOutputMesh)
                    lessonSteps[index].usesDefaultVideoMesh = true;

                // Make sure the video isn't rendering by default
                //videoPlayerCopy.GetComponent<Renderer>().enabled = false;

                // Pass a reference to the videoplayer to the activity
                if (((VideoActivity)activity).videoPlayer == null)
                    ((VideoActivity)activity).videoPlayer = defaultVideoPlayer;
                ((VideoActivity)activity).subtitleManager = subtitleManager;

                // Add it to the list of active objects for the relevant lesson step
                //((VideoActivity)activity).InitializeVideoPlayer();
            }
    }


    /// <summary>
    /// Adds an object to all lesson steps after the given stepIndex.
    /// This makes object persistence between steps easy.
    /// </summary>
    /// <param name="objectToAdd">The object to add</param>
    /// <param name="stepIndex">The index of the lesson step from which this object should be added</param>
    public void AddObjectToSubsequentSteps(object objectToAdd, int stepIndex)
    {
        GameObject addedObject = objectToAdd as GameObject;
        for (int i = stepIndex + 1; i < lessonSteps.Count; i++)
            if (!lessonSteps[i].lessonStepObjects.Contains(addedObject))
                lessonSteps[i].lessonStepObjects.Add((GameObject)objectToAdd);
    }


    /// <summary>
    /// Removes an object from all steps after the given stepIndex.
    /// </summary>
    /// <param name="objectToRemove">The object to remove</param>
    /// <param name="stepIndex">The index of the lesson step from which this object should be removed</param>
    public void RemoveObjectFromSubsequentSteps(object objectToRemove, int stepIndex)
    {
        GameObject removedObject = objectToRemove as GameObject;
        for (int i = stepIndex + 1; i < lessonSteps.Count; i++)
            if (lessonSteps[i].lessonStepObjects.Contains(removedObject))
                lessonSteps[i].lessonStepObjects.Remove(removedObject);
    }


    /// <summary>
    /// Adds a new step to this lesson at the given index. The new step will automatically
    /// inherit all objects from the step before it.
    /// </summary>
    /// <param name="index"></param>
    public void AddNewStep(int index)
    {
        LessonStep newStep = new LessonStep();

        // Copy all of the lesson objects from the previous step
        if (lessonSteps.Count > 0)
            foreach (GameObject lessonObject in lessonSteps[index-1].lessonStepObjects)
                newStep.lessonStepObjects.Add(lessonObject);

        // Add it to the list
        if (index < lessonSteps.Count)
            lessonSteps.Insert(index, newStep);
        else
            lessonSteps.Add(newStep);
    }
}