using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class NumberInputActivity : LessonStepActivity
{
    [Tooltip("The correct answer")]
    [SerializeField] private string correctAnswer;

    [Tooltip("The numpad the user will input numbers with")]
    [SerializeField] private NumpadController numpad;

    [Tooltip("For validating inputs (optional)")]
    [SerializeField] private NumberValidator inputValidator;

    [Tooltip("Where to display error messages (optional)")]
    [SerializeField] private TMPro.TextMeshProUGUI errorMessageField;

    // Whether the correct answer has been input
    private bool answerSubmitted = false;

    public NumberInputActivity()
    {
        activityType = ActivityType.NumberInputActivity;
    }

    public override void ResumeActivity()
    {
        base.ResumeActivity();
        Debug.Log("Resuming activity");
        if (numpad != null)
            numpad.OnValueSubmitted.AddListener(OnNumberEntered);
        if (inputValidator != null)
            inputValidator.errorMessageField = errorMessageField;
    }

    public override void PauseActivity()
    {
        base.PauseActivity();

        if (numpad != null)
            numpad.OnValueSubmitted.RemoveListener(OnNumberEntered);
        if (inputValidator != null)
            inputValidator.errorMessageField = null;
    }

    public override bool IsConditionSatisfied()
    {
        return answerSubmitted;
    }

    public void OnNumberEntered(string input)
    {
        Debug.Log($"Number submitted: {input}");
        bool inputValid = inputValidator != null
            ? inputValidator.ValidateNumber(input, correctAnswer)
            : float.Parse(input) == float.Parse(correctAnswer);

        answerSubmitted = inputValid;
    }
}
