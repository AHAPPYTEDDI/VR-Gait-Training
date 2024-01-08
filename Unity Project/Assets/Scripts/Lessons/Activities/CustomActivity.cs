using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class CustomActivity : LessonStepActivity
{
    [Tooltip("A script defining the custom activity's behaviour.")]
    public LessonStepActivity activityInstance;

    public CustomActivity()
    {
        //activityType = ActivityType.CustomActivity;
    }

    public override bool IsConditionSatisfied()
    {
        return activityInstance == null || activityInstance.IsConditionSatisfied();
    }
}
