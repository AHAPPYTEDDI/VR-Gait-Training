using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Video;

[Serializable]
public class LessonStep
{
    [SerializeField]
    [Tooltip("The name of this step")]
    public string stepName;

    [TextArea]
    [SerializeField]
    [Tooltip("The instruction text shown during this step")]
    public string instructions;

    [SerializeField]
    public UnityEvent OnStepStarted;

    [SerializeField]
    public UnityEvent OnStepStopped;

    [SerializeField]
    public UnityEvent OnStepPaused;

    [SerializeField]
    private UnityEvent OnStepResumed;

    [SerializeReference]
    [Tooltip("Any objects that should be present for the lesson")]
    public List<GameObject> lessonStepObjects = new List<GameObject>();

    [SerializeReference]
    [Tooltip("All of the activities to complete in this step")]
    public List<LessonStepActivity> activities = new List<LessonStepActivity>();

    [SerializeReference]
    [Tooltip("Whether this step is enabled (will be skipped if not")]
    public bool enabled = true;

    [SerializeField] private bool foldout = false;
    [SerializeField] private bool eventsFoldout = false;
    [SerializeField] private bool objectsFoldout = true;
    [SerializeField] private bool activitiesFoldout = true;

    // Whether this step is currently active
    private bool stepActive = false;

    // Whether this step contains any videos
    public bool hasVideos = false;
    public bool usesDefaultVideoMesh = false;

    public int timesInStep = 0;

    public bool isPausable { get { return hasVideos; } }

    public bool isSkippable { get { return hasVideos && timesInStep > 1; } }

    public virtual void StartStep()
    {
        // Have each activity start monitoring for its completion condition
        foreach (LessonStepActivity activity in activities)
        {
            activity.StartActivity();
            if (activity.activityType == LessonStepActivity.ActivityType.VideoActivity)
            {
                hasVideos = true;
                if (((VideoActivity)activity).useDefaultOutputMesh)
                    usesDefaultVideoMesh = true;
            }
        }

        stepActive = true;
        ++timesInStep;

        if (OnStepStarted != null)
            OnStepStarted.Invoke();
    }

    public virtual void StopStep()
    {
        stepActive = false;

        // Tell each activity to stop monitoring its completion condition
        foreach (LessonStepActivity activity in activities)
            activity.StopActivity();

        if (OnStepStopped != null)
            OnStepStopped.Invoke();
    }

    public virtual void PauseStep()
    {
        foreach (LessonStepActivity activity in activities)
            activity.PauseActivity();

        if (OnStepPaused != null)
            OnStepPaused.Invoke();
    }

    public virtual void ResumeStep()
    {
        foreach (LessonStepActivity activity in activities)
            activity.ResumeActivity();

        if (OnStepResumed != null)
            OnStepResumed.Invoke();
    }

    public bool IsStepActive()
    {
        return stepActive;
    }

    public bool IsStepComplete()
    {
        if (!stepActive)
            return false;

        foreach (LessonStepActivity activity in activities)
            if (!activity.IsActivityComplete())
                return false;
        return true;
    }

    public bool IsStepConditionsSatisfied()
    {
        if (!stepActive) return false;

        foreach (LessonStepActivity activity in activities)
            if (!activity.IsConditionSatisfied())
                return false;
        return true;
    }
}
