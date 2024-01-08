using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SimpleActivity : LessonStepActivity
{
    public SimpleActivity()
    {
        activityType = ActivityType.SimpleActivity;
    }

    public override bool IsConditionSatisfied()
    {
        return true;
    }
}
