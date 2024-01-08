using System;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class NumpadController : MonoBehaviour
{
    [Tooltip("The text object to use for displaying output")]
    public TextMeshProUGUI valueLabel;

    // The current input value
    private StringBuilder value;
    private const string DEFAULT_VALUE = "-";

    // Other classes can listen for when a value is submitted
    public UnityEvent<string> OnValueSubmitted;

    // Whether the input value is currently in its default state
    private bool isDefault;

    // The timestamp of the last number input
    private float timeSinceLastInput = 0f;

    // The minimum allowable time between inputs to prevent accidental double clicks
    private const float minTimeBetweenInputs = 0.05f;

    public Lesson lesson;

    // Start is called before the first frame update
    void Start()
    {
        value = new StringBuilder(DEFAULT_VALUE);
        valueLabel.SetText(value);
        isDefault = true;
    }

    private void Update()
    {
        timeSinceLastInput += Time.deltaTime;
    }

    /// <summary>
    /// Appends the given digit to the current input value.
    /// </summary>
    /// <param name="digit">The digit to append to the current input value</param>
    public void EnterDigit(int digit)
    {
        // Check for accidental double inputs
        if (IsDoubleInput())
            return;

        // If we're currently showing the default value, remove it first
        if (isDefault)
            value.Clear();

        // Append the new digit to the current value
        value.Append(digit);
        valueLabel.SetText(value);
        isDefault = false;
        timeSinceLastInput = 0f;
    }

    /// <summary>
    /// Used to submit the entered value. All registered listeners will be notified of the entered value.
    /// </summary>
    public void SubmitValue()
    {
        if (IsDoubleInput())
            return;

        // Notify any listeners of the value
        if (OnValueSubmitted != null)
            OnValueSubmitted.Invoke(value.ToString());

        if (lesson != null)
            lesson.OnAnswerSubmitted(value.ToString());

        // Clear the text field
        value.Clear().Append(DEFAULT_VALUE);
        valueLabel.SetText(value);
        isDefault = true;
        timeSinceLastInput = 0f;
    }

    /// <summary>
    /// Implements the usual "backspace" functionality. The last digit entered is removed.
    /// If this results in the input value becoming empty it will revert to the default value.
    /// </summary>
    public void Backspace()
    {
        // Check for accidental double inputs
        if (IsDoubleInput())
            return;

        if (--value.Length <= 0)
        {
            value.Clear();
            value.Append(DEFAULT_VALUE);
            isDefault = true;
        }
        valueLabel.SetText(value);

        timeSinceLastInput = 0f;
    }

    private bool IsDoubleInput()
    {
        return timeSinceLastInput < minTimeBetweenInputs;
    }
}
