using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonPressActivity : LessonStepActivity
{
    [SerializeField]
    [Tooltip("The button that needs to be pressed for this activity to be considered complete")]
    public Button buttonToPress;

    // Whether the button has been clicked
    private bool buttonClicked;

    private Color originalOnPressedColor;

    public ButtonPressActivity()
    {
        activityType = ActivityType.ButtonPressActivity;
    }

    public override void StartActivity()
    {
        base.StartActivity();

        buttonClicked = false;
        buttonToPress.onClick.AddListener(OnButtonClicked);

        ColorBlock colorBlock = buttonToPress.colors;
        originalOnPressedColor = colorBlock.pressedColor;
        colorBlock.pressedColor = Color.green;
        buttonToPress.colors = colorBlock;
    }

    public override void StopActivity()
    {
        base.StopActivity();

        buttonToPress.onClick.RemoveListener(OnButtonClicked);

        ColorBlock colorBlock = buttonToPress.colors;
        colorBlock.pressedColor = originalOnPressedColor;
        buttonToPress.colors = colorBlock;
    }

    public override bool IsConditionSatisfied()
    {
        return buttonClicked || Input.GetKeyDown(KeyCode.N);;
    }

    private void OnButtonClicked()
    {
        buttonClicked = true;
    }
}
