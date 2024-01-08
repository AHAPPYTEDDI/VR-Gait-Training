using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.XR.Interaction.Toolkit;

[System.Serializable]
public class SelectionActivity : LessonStepActivity
{
    [Tooltip("The XR Interactable that should be selected")]
    public XRBaseInteractable objectToSelect;

    [Tooltip("Whether the object should be selected (true) or deselected (false)")]
    public bool shouldBeSelected = true;

    [Tooltip("Whether the object needs to be selected continually (true) or just once (false)")]
    public bool shouldHoldSelect = false;

    private bool hasBeenSelected = false;

    public SelectionActivity()
    {
        activityType = ActivityType.SelectionActivity;
    }

    public override bool IsConditionSatisfied()
    {
        hasBeenSelected |= objectToSelect.isSelected == shouldBeSelected;
        return shouldHoldSelect
            ? objectToSelect.isSelected == shouldBeSelected
            : hasBeenSelected;
    }
}
