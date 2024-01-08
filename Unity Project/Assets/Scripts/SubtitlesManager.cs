using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

/// <summary>
/// Manages subtitles displayed on a Canvas using TMP_Text.
/// </summary>
public class SubtitlesManager : MonoBehaviour
{
    [System.Serializable]
    public struct Subtitle
    {
        public string text;

        /// <summary>
        /// Time in seconds to start displaying text.
        /// </summary>
        [Tooltip("Time in seconds to start displaying text.")]
        public float startTime;

        /// <summary>
        /// Time in seconds to stop displaying text.
        /// </summary>
        [Tooltip("Time in seconds to stop displaying text.")]
        public float endTime;
    }

    /// <summary>
    /// An optional parameter for loading captions from a file.
    /// </summary>
    [Tooltip("An optional parameter for loading captions from a file.")]
    public TextAsset captionFile;

    /// <summary>
    /// An optional parameter for syncing the subtitles with a video.
    /// </summary>
    [Tooltip("An optional parameter for syncing the subtitles with a video.")]
    public VideoPlayer syncWithVideo;

    /// <summary>
    /// The length of time before starting playback of the subtitles. This will be overriden if syncWithVideo has been assigned.
    /// </summary>
    [Tooltip("The length of time before starting playback of the subtitles. This parameter will be overriden if syncWithVideo has been assigned. ")]
    public float playbackLength = 10;

    /// <summary>
    /// List of text and when to display that text.
    /// </summary>
    [Tooltip("List of text and when to display that text.")]
    public List<Subtitle> subtitles;

    /// <summary>
    /// The text objects used to display the subtitle text.
    /// </summary>
    [Tooltip("The text objects used to display the subtitle text.")]
    public TMPro.TMP_Text[] textDisplays;

    /// <summary>
    /// Private time tracker for when there is no video.
    /// </summary>
    private float m_time = 0;

    /// <summary>
    /// Whether subtitles should be rendered
    /// </summary>
    private bool m_isPlaying = false;

    private void Start()
    {
        m_isPlaying = syncWithVideo != null;

        //if (captionFile)
        //    ProcessCaptionFile();
    }

    private void ProcessCaptionFile()
    {
        // Get rid of any existing subtitles
        subtitles.Clear();

        // Remove delimiter characters
        var fileFormatTime = captionFile.text.Replace(" --> ", "\n");
        var fileLine = fileFormatTime.Split('\n');
        if (fileLine.Length == 0) return;
        string fileContents = "";
        foreach (string line in fileLine)
            fileContents += (line + "\n");

        // Read text
        int currentLine = 0;
        try
        {
            while (currentLine < fileLine.Length)
            {
                // throw away title index
                ReadNextLine(fileLine, ref currentLine);
                if (currentLine >= fileLine.Length) break;

                // Read and add subtitle to list.
                Subtitle subtitle;
                subtitle.startTime = ExtractTime(ReadNextLine(fileLine, ref currentLine));
                subtitle.endTime = ExtractTime(ReadNextLine(fileLine, ref currentLine));
                subtitle.text = ReadNextLine(fileLine, ref currentLine);
                subtitles.Add(subtitle);
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error reading subtitle file '{captionFile.name}' at line {currentLine}: {e.Message} \n {e.StackTrace}");
        }

        // Sort by start time
        subtitles.Sort((a, b) => { return a.startTime.CompareTo(b.startTime); });
    }

    /// <summary>
    /// Reads the next line, removing white or empty space if needed.
    /// </summary>
    /// <param name="fileLine">The array of strings.</param>
    /// <param name="currentLine">The current array item being read.</param>
    /// <returns>The next line as string.</returns>
    private string ReadNextLine(string[] fileLine, ref int currentLine)
    {
        while (currentLine < fileLine.Length && string.IsNullOrEmpty(fileLine[currentLine].Trim()))
            ++currentLine;
        return currentLine < fileLine.Length 
            ? fileLine[currentLine++].Trim() 
            : "";
    }

    /// <summary>
    /// Extracts time from a formated string of code hh:mm:ss,mmm
    /// </summary>
    /// <param name="v">Formated string of time</param>
    /// <returns>Time in seconds</returns>
    private float ExtractTime(string v)
    {
        var time = v.Split(':', ',');
        float hour = float.Parse(time[0]) * 360;
        float min = float.Parse(time[1]) * 60;
        float sec = float.Parse(time[2]);
        float mili = float.Parse(time[3]) / 1000f;
        return hour + min + sec + mili;
    }

    /// <summary>
    /// Start subtitle playback
    /// </summary>
    public void Play()
    {
        m_time = 0;
        ProcessCaptionFile();
        m_isPlaying = true;
    }

    public void Stop()
    {
        m_isPlaying = false;
        foreach (var textDisplay in textDisplays)
            textDisplay.text = "";
    }

    public void Pause()
    {
        m_isPlaying = false;
    }

    public void Resume()
    {
        m_isPlaying = true;
    }

    // Update is called once per frame
    private void Update()
    {
        if (!m_isPlaying)
            return;

        // Choose time based on whether syncWithVideo is assigned.
        var time = syncWithVideo ? syncWithVideo.time : m_time;
        if (!syncWithVideo)
            m_time += Time.deltaTime;
        //if (m_time >= playbackLength)
        //    m_time = 0;

        // Find and set subtitles based on current timer.
        var displayedText = "";
        foreach (var subtitle in subtitles)
        {
            if (m_time >= subtitle.startTime && m_time < subtitle.endTime)
            {
                if (displayedText.Length > 0)
                    displayedText += "\n";
                displayedText += subtitle.text;
            }
        }

        // Set text to subtitles found at this time.
        foreach (var item in textDisplays)
            if (item != null && !item.text.Equals(displayedText))
                item.text = displayedText;
    }
}