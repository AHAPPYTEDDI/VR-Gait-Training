using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class PerpetualActivity : LessonStepActivity
{
    public PerpetualActivity()
    {
        activityType = ActivityType.PerpetualActivity;
    }

    public override bool IsConditionSatisfied()
    {
        return false;
    }
}
