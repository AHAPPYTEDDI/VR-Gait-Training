using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementActivity : LessonStepActivity
{
    [Tooltip("The object whose movement should be tracked")]
    public Transform objectToMove;

    [Tooltip("Whether translational movement should be tested")]
    public bool testTranslation;

    [Tooltip("How far the object needs to be translated (in metres) for this activity to be satisfied")]
    public float translationThreshold;

    [Tooltip("Whether rotational movement should be tested")]
    public bool testRotation;

    [Tooltip("How far the object should be rotated (in degrees) for this activity to be satisfied")]
    public float rotationThreshold;

    private Vector3 positionLastFrame;
    private float totalTranslation = 0f;

    private Quaternion rotationLastFrame;
    private float totalRotation = 0f;

    private KalmanFilterFloat translationFilter;
    private KalmanFilterFloat rotationFilter;

    private bool firstFrame;

    public MovementActivity()
    {
        activityType = ActivityType.MovementActivity;
    }

    public override void StartActivity() {
        translationFilter = new KalmanFilterFloat();
        rotationFilter = new KalmanFilterFloat();
        totalTranslation = 0f;
        totalRotation = 0f;
        firstFrame = true;
    }

    public override bool IsConditionSatisfied()
    {
        bool conditionFailed = false;
        if (testTranslation)
        {
            if (!firstFrame)
                totalTranslation += translationFilter.Update(Vector3.Distance(positionLastFrame, objectToMove.localPosition));

            conditionFailed |= totalTranslation < translationThreshold;
            positionLastFrame = objectToMove.localPosition;
        }

        if (testRotation)
        {
            if (!firstFrame)
                totalRotation += rotationFilter.Update(Quaternion.Angle(rotationLastFrame, objectToMove.localRotation));

            conditionFailed |= totalRotation < rotationThreshold;
            rotationLastFrame = objectToMove.localRotation;
        }

        firstFrame = false;
        return !conditionFailed;
    }
}
