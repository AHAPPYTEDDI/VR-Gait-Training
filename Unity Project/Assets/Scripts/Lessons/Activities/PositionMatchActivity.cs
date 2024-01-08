using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositionMatchActivity : LessonStepActivity
{
    [Tooltip("The object that is being moved")]
    public Transform objectToMove;

    [Tooltip("The target transform")]
    public Transform targetPosition;

    [Tooltip("Whether the moved object should match the target position")]
    public bool matchPosition;

    [Tooltip("How close the object must be to the target position in each axis (in metres)")]
    public Vector3 positionThreshold;

    [Tooltip("Whether the moved object should match the target rotation")]
    public bool matchRotation;

    [Tooltip("How close the object must be to the target rotation around each axis (in degrees)")]
    public Vector3 rotationThreshold;

    public PositionMatchActivity()
    {
        activityType = ActivityType.PositionMatchActivity;
    }

    public override bool IsConditionSatisfied()
    {
        bool conditionFailed = false;
        // If we're matching the target position, check each axis
        if (matchPosition)
        {
            conditionFailed |= Mathf.Abs(objectToMove.position.x - targetPosition.position.x) > positionThreshold.x;
            conditionFailed |= Mathf.Abs(objectToMove.position.y - targetPosition.position.y) > positionThreshold.y;
            conditionFailed |= Mathf.Abs(objectToMove.position.z - targetPosition.position.z) > positionThreshold.z;
        }

        // If we're matching the target rotation, check each axis
        if (matchRotation)
        {
            Quaternion angle = objectToMove.rotation * Quaternion.Inverse(targetPosition.rotation);

            conditionFailed |= angle.eulerAngles.x > rotationThreshold.x && Mathf.Abs(360f - angle.eulerAngles.x) > rotationThreshold.x;
            conditionFailed |= angle.eulerAngles.y > rotationThreshold.y && Mathf.Abs(360f - angle.eulerAngles.y) > rotationThreshold.y;
            conditionFailed |= angle.eulerAngles.z > rotationThreshold.z && Mathf.Abs(360f - angle.eulerAngles.z) > rotationThreshold.z;
        }

        return !conditionFailed;
    }
}
