using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

[System.Serializable]
public abstract class LessonStepActivity
{
    [SerializeField]
    public ActivityType activityType;// { get; protected set; }

    public enum ActivityType
    {
        SimpleActivity,
        VideoActivity,
        MovementActivity,
        SelectionActivity,
        ButtonPressActivity,
        PositionMatchActivity,
        NumberInputActivity,
        PerpetualActivity
    };

    [SerializeField]
    public bool foldout = false;

    [SerializeField]
    [Tooltip("How long the condition must be satisfied for in order for it to count")]
    public float satisfactionTime;

    protected float timeConditionSatisfied = 0f;

    public virtual void StartActivity() { ResumeActivity(); }

    public virtual void StopActivity() { PauseActivity(); }

    public virtual void PauseActivity() { }

    public virtual void ResumeActivity() { }

    public bool IsActivityComplete()
    {
        if (IsConditionSatisfied())
            timeConditionSatisfied += Time.deltaTime;
        else
            timeConditionSatisfied = 0f;

        return timeConditionSatisfied > satisfactionTime;
    }

    public abstract bool IsConditionSatisfied();
}