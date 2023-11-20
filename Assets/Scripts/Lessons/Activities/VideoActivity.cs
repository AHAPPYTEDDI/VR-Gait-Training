using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

[System.Serializable]
public class VideoActivity : LessonStepActivity
{
    [Tooltip("Override the default video player used to play the clip")]
    public VideoPlayer videoPlayer;

    [Tooltip("Whether to use the default video output mesh")]
    public bool useDefaultOutputMesh = true;

    [Tooltip("Object that is handling subtitle playback")]
    public SubtitlesManager subtitleManager;

    [Tooltip("A path to the video clip that should play during this step")]
    public VideoClip videoClip;

    [Tooltip("An optional subtitle file")]
    public TextAsset subtitles;

    [HideInInspector]
    public bool hasSubtitles { get { 
            return subtitleManager != null && subtitles != null; }}

    private bool videoPlaying = false;
    private bool videoEnded = false;

    public VideoActivity()
    {
        activityType = ActivityType.VideoActivity;
    }

    public override void StartActivity()
    {
        base.StartActivity();

        // Make sure everything's been set up correctly
        if (videoPlayer == null)
        {
            Debug.LogError("Could not play video; VideoPlayer not set.");
            return;
        }
        if (videoClip == null)
        {
            Debug.LogError("Could not play video; VideoClip not set.");
            return;
        }

        // Start the video
        videoPlayer.Stop();
        videoPlayer.clip = videoClip;
        videoPlayer.frame = 0;
        videoPlayer.prepareCompleted += OnVideoInitialized;
        videoPlayer.loopPointReached += onVideoEnded;
        videoPlayer.Prepare();
    }

    public override void StopActivity()
    {
        base.StopActivity();

        videoPlayer.Stop();
        Debug.Log("End of video");

        // Stop subtitles
        if (hasSubtitles)
        {
            subtitleManager.Stop();
            Debug.Log("Subtitle playback ended");
        }
    }

    public override void PauseActivity()
    {
        base.PauseActivity();

        if (!videoPlaying)
            return;

        videoPlayer.Pause();
        if (hasSubtitles)
            subtitleManager.Pause();

        videoPlaying = false;
    }

    public override void ResumeActivity()
    {
        base.ResumeActivity();

        if (videoPlaying)
            return;

        videoPlayer.Play();
        if (hasSubtitles)
            subtitleManager.Resume();

        videoPlaying = true;
    }

    public override bool IsConditionSatisfied()
    {
        return videoEnded;
    }

    protected void OnVideoInitialized(VideoPlayer vp)
    {
        vp.Play();

        // Start subtitles
        if (subtitleManager != null && subtitles != null)
        {
            Debug.Log("Loading subtitles from " + subtitles.name);
            subtitleManager.captionFile = subtitles;
            subtitleManager.Play();
        }

        videoPlaying = true;
    }

    protected void onVideoEnded(VideoPlayer vp)
    {
        Debug.Log("Video " + videoClip.name + " ended.");

        // Rewind the video a little bit to prevent it going
        // black during the fadeout
        videoPlayer.frame -= 10;

        videoEnded = true;
        videoPlaying = false;
        //videoPlayer.loopPointReached -= onVideoEnded;
    }
}
