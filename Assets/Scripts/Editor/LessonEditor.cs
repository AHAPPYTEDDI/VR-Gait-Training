using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditorInternal;

[CustomEditor(typeof(Lesson))]
public class LessonEditor : Editor
{
    private Lesson lesson;
    private SerializedProperty lessonSteps;

    [SerializeField]
    private ReorderableList lessonStepList;

    private int currentlySelectedStep = -1;
    private int currentlySelectedActivity = -1;
    private int currentlySelectedObject = -1;

    private readonly Dictionary<string, ReorderableList> activityListDict = new Dictionary<string, ReorderableList>();
    private readonly Dictionary<string, ReorderableList> objectListDict = new Dictionary<string, ReorderableList>();

    private readonly Dictionary<string, float> elementHeightDict = new Dictionary<string, float>();

    // A dictionary of tooltips for the various activity types
    private readonly Dictionary<string, string> activityTypeTooltips = new Dictionary<string, string>()
    {
        { LessonStepActivity.ActivityType.SimpleActivity.ToString(),
            "An activity with no requirements. Use this with Satisfaction Time if you need the user to wait for a specified amount of time" },
        { LessonStepActivity.ActivityType.ButtonPressActivity.ToString(),
            "The user must press the specified button to continue" },
        { LessonStepActivity.ActivityType.VideoActivity.ToString(),
            "Play a video" },
        { LessonStepActivity.ActivityType.MovementActivity.ToString(),
            "The user has to move and/or rotate the specified object by the specified amount. This could also be the player camera" },
        { LessonStepActivity.ActivityType.PositionMatchActivity.ToString(),
            "The specified object has to be placed in the same position and/or orientation as the target object. Use a small threshold " +
            "value to account for small errors, and use an impossibly large threshold to ignore specific axes" },
        { LessonStepActivity.ActivityType.SelectionActivity.ToString(),
            "The specified XRGrabInteractable has to be either picked up or released"},
        { LessonStepActivity.ActivityType.NumberInputActivity.ToString(),
            "The user has to input the specified number to move on"},
        { LessonStepActivity.ActivityType.PerpetualActivity.ToString(),
            "An activity that can't be completed. Useful for free play."}
    };

    private void OnEnable()
    {
        lesson = (Lesson)target;
        lessonSteps = serializedObject.FindProperty("lessonSteps");
        var activeObjects = serializedObject.FindProperty("activeObjects");

        lessonStepList = new ReorderableList(serializedObject, lessonSteps)
        {
            displayAdd = true,
            displayRemove = true,
            draggable = true,

            drawHeaderCallback = DrawLessonStepsHeader,

            drawElementCallback = DrawLessonStepElement,

            onAddCallback = (list) =>
            {

                int index = currentlySelectedStep >= 0
                    ? currentlySelectedStep + 1
                    : list.serializedProperty.arraySize;

                lesson.AddNewStep(index);
                EditorUtility.SetDirty(lesson);
            },

            onRemoveCallback = (list) =>
            {
                SerializedProperty removedElement;

                if (currentlySelectedStep >= 0)
                {
                    removedElement = list.serializedProperty.GetArrayElementAtIndex(currentlySelectedStep);
                    elementHeightDict.Remove(removedElement.propertyPath);
                    activityListDict.Remove(removedElement.propertyPath);
                    list.serializedProperty.DeleteArrayElementAtIndex(currentlySelectedStep);
                }
                else
                {
                    removedElement = list.serializedProperty.GetArrayElementAtIndex(list.serializedProperty.arraySize - 1);
                    elementHeightDict.Remove(removedElement.propertyPath);
                    activityListDict.Remove(removedElement.propertyPath);
                    list.serializedProperty.arraySize--;
                }

            },

            elementHeightCallback = (index) =>
            {
                if (index < 0) return 0;
                return GetLessonStepHeight(lessonSteps.GetArrayElementAtIndex(index));
            },

            onSelectCallback = (list) =>
            {
                currentlySelectedStep = list.index;
                lesson.SetupLessonStep(currentlySelectedStep);
                EditorUtility.SetDirty(lesson);
            }
        };
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        //base.OnInspectorGUI();
        // Get a reference to foldout values
        var uiSettingsFoldout = serializedObject.FindProperty("uiSettingsFoldout");
        var videoSettingsFoldout = serializedObject.FindProperty("videoSettingsFoldout");
        var logSettingsFoldout = serializedObject.FindProperty("logSettingsFoldout");
        var eventFoldout = serializedObject.FindProperty("eventFoldout");

        // Generic Settings
        EditorGUILayout.PropertyField(serializedObject.FindProperty("visType"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("mvnPuppetPrefab"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("mvnPuppetAvatar"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("transitionTime"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("objectParentTransform"));
        EditorGUILayout.PropertyField(serializedObject.FindProperty("playOnAwake"));

        // UI Settings
        uiSettingsFoldout.boolValue = EditorGUILayout.Foldout(uiSettingsFoldout.boolValue, "UI Settings");
        if (uiSettingsFoldout.boolValue)
        {
            EditorGUILayout.PropertyField(serializedObject.FindProperty("lessonText"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("subtitleManager"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("correctIcon"));
        }

        // Video Settings
        videoSettingsFoldout.boolValue = EditorGUILayout.Foldout(videoSettingsFoldout.boolValue, "Video Settings");
        if (videoSettingsFoldout.boolValue)
        {
            EditorGUILayout.PropertyField(serializedObject.FindProperty("defaultVideoPlayer"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("defaultOutputMesh"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("defaultVideo"));
        }

        // Log Settings
        logSettingsFoldout.boolValue = EditorGUILayout.Foldout(logSettingsFoldout.boolValue, "Log Settings");
        if (logSettingsFoldout.boolValue)
        {
            EditorGUILayout.PropertyField(serializedObject.FindProperty("logToDisk"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("logDirectory"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("logFilename"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("includeTimestampInFilename"));
        }

        // Events
        eventFoldout.boolValue = EditorGUILayout.Foldout(eventFoldout.boolValue, "Events");
        if (eventFoldout.boolValue)
        {
            EditorGUILayout.PropertyField(serializedObject.FindProperty("beforeLessonStart"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("onLessonStart"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("onLessonEnd"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("onLessonPause"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("onLessonResume"));
            EditorGUILayout.PropertyField(serializedObject.FindProperty("onStepChanged"));
        }


        EditorGUILayout.Space(EditorGUIUtility.singleLineHeight);

        if (lessonStepList.serializedProperty.arraySize - 1 < currentlySelectedStep) currentlySelectedStep = -1;

        lessonStepList.DoLayoutList();

        serializedObject.ApplyModifiedProperties();
    }

    #region Drawers

    #region List Headers

    private void DrawLessonStepsHeader(Rect rect)
    {
        EditorGUI.LabelField(rect, new GUIContent("Lesson Steps", "All of the steps in this lesson. These will happen in order."));
    }

    private void DrawActivitiesHeader(Rect rect)
    {
        EditorGUI.LabelField(rect, new GUIContent("Activities", "All activities that must be completed before this step " +
            "is considered complete. The order of these doesn't matter."));
    }

    private void DrawObjectsHeader(Rect rect)
    {
        EditorGUI.LabelField(rect, new GUIContent("Lesson Step Objects", "All objects that should be present for this step of the lesson"));
    }

    #endregion List Headers

    #region Elements

    private void DrawLessonStepElement(Rect rect, int index, bool isActive, bool isFocused)
    {
        if (isActive)
            currentlySelectedStep = index;
        var lessonStep = lessonSteps.GetArrayElementAtIndex(index);
        var position = new Rect(rect);

        var stepName = lessonStep.FindPropertyRelative("stepName");
        var stepInstructions = lessonStep.FindPropertyRelative("instructions");
        var onStepStarted = lessonStep.FindPropertyRelative("OnStepStarted");
        var onStepStopped = lessonStep.FindPropertyRelative("OnStepStopped");
        var onStepPaused = lessonStep.FindPropertyRelative("OnStepPaused");
        var onStepResumed = lessonStep.FindPropertyRelative("OnStepResumed");
        var lessonStepObjects = lessonStep.FindPropertyRelative("lessonStepObjects");
        //var objectsToDespawn = lessonStep.FindPropertyRelative("objectsToDespawn");
        var stepActivities = lessonStep.FindPropertyRelative("activities");
        var enabled = lessonStep.FindPropertyRelative("enabled");
        var foldout = lessonStep.FindPropertyRelative("foldout");
        var eventsFoldout = lessonStep.FindPropertyRelative("eventsFoldout");
        var objectsFoldout = lessonStep.FindPropertyRelative("objectsFoldout");
        var activitiesFoldout = lessonStep.FindPropertyRelative("activitiesFoldout");

        string stepListKey = lessonStep.propertyPath;

        EditorGUI.indentLevel++;
        {
            string lessonName = $"Step {index + 1}: {stepName.stringValue}";

            // Have a checkbox for enabling/disabling the lesson
            EditorGUI.indentLevel--;
            float checkboxWidth = 15f;
            enabled.boolValue = EditorGUI.Toggle(new Rect(position.x, position.y, checkboxWidth, EditorGUIUtility.singleLineHeight), enabled.boolValue);
            EditorGUI.indentLevel++;

            // Keep an indented rect around for correct positioning of elements
            Rect indentedRect = EditorGUI.IndentedRect(position);

            // Make the label be a foldout
            EditorGUI.indentLevel++;
            foldout.boolValue = EditorGUI.Foldout(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                foldout.boolValue, foldout.boolValue ? "" : lessonName);
            EditorGUI.indentLevel--;

            if (foldout.boolValue)
            {
                // Draw the lesson step's name
                Rect nameRect = EditorGUI.PrefixLabel(new Rect(position.x + checkboxWidth, position.y, position.width, EditorGUIUtility.singleLineHeight),
                    new GUIContent($"Step {index + 1}:"));
                nameRect.x -= EditorGUIUtility.labelWidth * 0.8f;
                nameRect.width = position.width - EditorGUIUtility.labelWidth * 0.28f;
                EditorGUI.PropertyField(nameRect, stepName, GUIContent.none);
                position.y += EditorGUIUtility.singleLineHeight * 1.5f;

                EditorGUI.indentLevel++;
                indentedRect = EditorGUI.IndentedRect(position);

                // Draw a field for entering the instruction text
                float textFieldHeight = EditorGUIUtility.singleLineHeight * 6.0f;
                EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, textFieldHeight), stepInstructions);
                position.y += textFieldHeight;

                // Another wee space
                position.y += 0.5f * EditorGUIUtility.singleLineHeight;

                // Draw a foldout for UnityEvents
                eventsFoldout.boolValue = EditorGUI.Foldout(
                    new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                    eventsFoldout.boolValue, "Events");
                position.y += EditorGUIUtility.singleLineHeight;

                // Draw events if needed
                if (eventsFoldout.boolValue)
                {
                    indentedRect = EditorGUI.IndentedRect(position);

                    float propertyHeight = EditorGUI.GetPropertyHeight(onStepStarted);
                    EditorGUI.PropertyField(new Rect(indentedRect.x, position.y, indentedRect.width, propertyHeight),
                        onStepStarted);
                    position.y += propertyHeight;

                    propertyHeight = EditorGUI.GetPropertyHeight(onStepStopped);
                    EditorGUI.PropertyField(new Rect(indentedRect.x, position.y, indentedRect.width, propertyHeight),
                        onStepStopped);
                    position.y += propertyHeight;

                    propertyHeight = EditorGUI.GetPropertyHeight(onStepPaused);
                    EditorGUI.PropertyField(new Rect(indentedRect.x, position.y, indentedRect.width, propertyHeight),
                        onStepPaused);
                    position.y += propertyHeight;

                    propertyHeight = EditorGUI.GetPropertyHeight(onStepResumed);
                    EditorGUI.PropertyField(new Rect(indentedRect.x, position.y, indentedRect.width, propertyHeight),
                        onStepResumed);
                    position.y += propertyHeight;
                }

                // Draw a foldout for objects
                objectsFoldout.boolValue = EditorGUI.Foldout(
                    new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                    objectsFoldout.boolValue, "Lesson Step Objects");
                position.y += EditorGUIUtility.singleLineHeight;

                // Create the objects list
                if (!objectListDict.ContainsKey(stepListKey))
                {
                    // Draw a ReorderableList for the step's objects
                    ReorderableList objectList = new ReorderableList(lessonStep.serializedObject, lessonStepObjects)
                    {
                        displayAdd = true,
                        displayRemove = true,
                        draggable = true,

                        drawHeaderCallback = DrawObjectsHeader,
                        drawElementCallback = (objRect, objIndex, objActive, objFocused) =>
                        {
                            DrawLessonStepObjectElement(objectListDict[stepListKey], objRect, objIndex, objActive, objFocused);
                        },

                        onAddCallback = (list) =>
                        {
                            list.serializedProperty.arraySize++;
                            var addedElement = list.serializedProperty.GetArrayElementAtIndex(list.serializedProperty.arraySize - 1);

                            addedElement.objectReferenceValue = null;
                        },

                        onRemoveCallback = (list) =>
                        {
                            int index = currentlySelectedObject >= 0
                                ? list.index
                                : list.serializedProperty.arraySize - 1;
                            SerializedProperty removedElement = list.serializedProperty.GetArrayElementAtIndex(index);

                            // Remove this object from all future steps
                            if (removedElement.objectReferenceValue != null)
                            {
                                for (int i = currentlySelectedStep + 1; i < lessonStepList.serializedProperty.arraySize; i++)
                                {
                                    var step = lessonStepList.serializedProperty.GetArrayElementAtIndex(i);
                                    var stepObjects = step.FindPropertyRelative("lessonStepObjects");
                                    for (int j = 0; j < stepObjects.arraySize; j++)
                                    {
                                        var stepObject = stepObjects.GetArrayElementAtIndex(j);
                                        if (removedElement.objectReferenceValue.Equals(stepObject.objectReferenceValue))
                                        {
                                            stepObjects.DeleteArrayElementAtIndex(j);
                                            break;
                                        }
                                    }
                                }
                            }
                            list.serializedProperty.DeleteArrayElementAtIndex(index);
                        },

                        elementHeightCallback = (index) =>
                        {
                            if (index < 0) return 0;
                            return EditorGUIUtility.singleLineHeight;
                        },

                        onSelectCallback = (list) =>
                        {
                            currentlySelectedObject = list.index;
                        }
                    };
                    objectListDict[stepListKey] = objectList;
                }
                indentedRect = EditorGUI.IndentedRect(position);

                // Draw the list if needed
                if (objectsFoldout.boolValue)
                {
                    EditorGUI.indentLevel--;
                    objectListDict[stepListKey].DoList(new Rect(indentedRect.x, position.y,
                        indentedRect.width, position.height - EditorGUIUtility.singleLineHeight));
                    position.y += objectListDict[stepListKey].GetHeight();
                    EditorGUI.indentLevel++;
                }

                // Draw a foldout for activities
                activitiesFoldout.boolValue = EditorGUI.Foldout(
                    new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                    activitiesFoldout.boolValue, "Activities");
                position.y += EditorGUIUtility.singleLineHeight;

                // Create a list for the activities in this step
                if (!activityListDict.ContainsKey(stepListKey))
                {
                    // Draw a ReorderableList for the step's activities
                    ReorderableList activityList = new ReorderableList(lessonStep.serializedObject, stepActivities)
                    {
                        displayAdd = true,
                        displayRemove = true,
                        draggable = false,

                        drawHeaderCallback = DrawActivitiesHeader,
                        drawElementCallback = (actRect, actIndex, actActive, actFocused) =>
                        {
                            DrawLessonStepActivityElement(activityListDict[stepListKey], actRect, actIndex, actActive, actFocused);
                        },

                        onAddCallback = (list) =>
                        {
                            //SerializedProperty addedElement;

                            list.serializedProperty.arraySize++;
                            var addedElement = list.serializedProperty.GetArrayElementAtIndex(list.serializedProperty.arraySize - 1);

                            // Initialise the thing
                            addedElement.managedReferenceValue = new SimpleActivity();

                            // Set default values
                            var activityType = addedElement.FindPropertyRelative("activityType");
                            var foldout = addedElement.FindPropertyRelative("foldout");
                            var satisfactionTime = addedElement.FindPropertyRelative("satisfactionTime");

                            foldout.boolValue = true;
                            activityType.enumValueIndex = 0;
                            satisfactionTime.floatValue = 0f;

                            elementHeightDict[addedElement.propertyPath] = EditorGUIUtility.singleLineHeight;
                        },

                        onRemoveCallback = (list) =>
                        {
                            SerializedProperty removedElement;

                            if (currentlySelectedActivity >= 0)
                            {
                                removedElement = list.serializedProperty.GetArrayElementAtIndex(currentlySelectedActivity);
                                elementHeightDict.Remove(removedElement.propertyPath);
                                list.serializedProperty.DeleteArrayElementAtIndex(currentlySelectedActivity);
                            }
                            else
                            {
                                removedElement = list.serializedProperty.GetArrayElementAtIndex(list.serializedProperty.arraySize - 1);
                                elementHeightDict.Remove(removedElement.propertyPath);
                                list.serializedProperty.arraySize--;
                            }
                        },

                        elementHeightCallback = (index) =>
                        {
                            if (!activitiesFoldout.boolValue || index < 0) return 0;
                            return GetActivityHeight(stepActivities.GetArrayElementAtIndex(index));
                        },

                        onSelectCallback = (list) =>
                        {
                            currentlySelectedActivity = list.index;
                        }
                    };
                    activityListDict[stepListKey] = activityList;
                }

                // Draw the list if needed
                if (activitiesFoldout.boolValue)
                {
                    indentedRect = EditorGUI.IndentedRect(position);
                    EditorGUI.indentLevel--;
                    activityListDict[stepListKey].DoList(new Rect(indentedRect.x, position.y,
                        indentedRect.width, position.height - EditorGUIUtility.singleLineHeight));
                    //position.y += activityListDict[stepListKey].GetHeight();
                    //EditorGUI.indentLevel++;
                }
            }
        }
        EditorGUI.indentLevel--;

        // Save the height of this step for rendering later
        //Debug.Log($"Step {currentlySelectedStep} position.y {position.y} rect.y {rect.y}");
        elementHeightDict[lessonStep.propertyPath] = position.y - rect.y;
        lessonStep.serializedObject.ApplyModifiedProperties();
    }

    private void DrawLessonStepActivityElement(ReorderableList list, Rect rect, int index, bool isActive, bool isFocused)
    {
        if (list == null) return;

        var activity = list.serializedProperty.GetArrayElementAtIndex(index);

        var position = new Rect(rect);

        var activityType = activity.FindPropertyRelative("activityType");
        var foldout = activity.FindPropertyRelative("foldout");

        EditorGUI.indentLevel++;
        // Make the label be a foldout
        string activityName = activityType.enumDisplayNames[activityType.enumValueIndex];
        bool foldoutValue = EditorGUI.Foldout(new Rect(position.x, position.y, 10, EditorGUIUtility.singleLineHeight),
            foldout.boolValue, activityName);
        foldout.boolValue = foldoutValue;

        if (foldoutValue)
        {
            // Draw a label for this activity
            EditorGUI.LabelField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), activityName);
            position.y += EditorGUIUtility.singleLineHeight;

            EditorGUI.indentLevel++;

            // Draw a dropdown list for choosing what type of activity this is
            GUIContent[] activityTypeLabels = new GUIContent[activityType.enumDisplayNames.Length];
            for (int i = 0; i < activityType.enumDisplayNames.Length; i++)
                activityTypeLabels[i] = new GUIContent(activityType.enumDisplayNames[i], activityTypeTooltips[activityType.enumNames[i]]);
            int enumValue = EditorGUI.Popup(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                new GUIContent("Activity Type", "Which type of activity this is"), activityType.enumValueIndex, activityTypeLabels);
            position.y += EditorGUIUtility.singleLineHeight;

            // Little space
            position.y += EditorGUIUtility.singleLineHeight / 4f;

            // Draw a field for satisfaction time
            var satisfactionTime = activity.FindPropertyRelative("satisfactionTime");
            float satisfactionTimeValue = EditorGUI.FloatField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                new GUIContent("Satisfaction Time"), satisfactionTime.floatValue);
            position.y += EditorGUIUtility.singleLineHeight;

            // Check what the Activity Type popup says to figure out what type of activity to draw here
            position.y += EditorGUIUtility.singleLineHeight / 4f;
            bool instantiateNew = enumValue != activityType.enumValueIndex;
            {
                // If the type changes, spawn a new object
                switch ((LessonStepActivity.ActivityType)enumValue)
                {
                    case LessonStepActivity.ActivityType.ButtonPressActivity:
                        if (instantiateNew) activity.managedReferenceValue = new ButtonPressActivity();
                        DrawButtonPressActivityElement(ref position, activity);
                        break;
                    case LessonStepActivity.ActivityType.MovementActivity:
                        if (instantiateNew) activity.managedReferenceValue = new MovementActivity();
                        DrawMovementActivityElement(ref position, activity);
                        break;
                    case LessonStepActivity.ActivityType.PositionMatchActivity:
                        if (instantiateNew) activity.managedReferenceValue = new PositionMatchActivity();
                        DrawPositionMatchActivityElement(ref position, activity);
                        break;
                    case LessonStepActivity.ActivityType.SelectionActivity:
                        if (instantiateNew) activity.managedReferenceValue = new SelectionActivity();
                        DrawSelectionActivityElement(ref position, activity);
                        break;
                    case LessonStepActivity.ActivityType.VideoActivity:
                        if (instantiateNew) activity.managedReferenceValue = new VideoActivity();
                        DrawVideoActivityElement(ref position, activity);
                        break;
                    case LessonStepActivity.ActivityType.NumberInputActivity:
                        if (instantiateNew) activity.managedReferenceValue = new NumberInputActivity();
                        DrawNumberInputActivity(ref position, activity);
                        break;
                    case LessonStepActivity.ActivityType.PerpetualActivity:
                        if (instantiateNew) activity.managedReferenceValue = new PerpetualActivity();
                        break;
                    default:
                        if (instantiateNew) activity.managedReferenceValue = new SimpleActivity();
                        break;
                }
            }

            // Apply the new values from before now. This means that if a new instance is created the old values will persist.
            satisfactionTime = activity.FindPropertyRelative("satisfactionTime");
            foldout = activity.FindPropertyRelative("foldout");
            foldout.boolValue = foldoutValue;
            satisfactionTime.floatValue = satisfactionTimeValue;

            EditorGUI.indentLevel--;
        }
        EditorGUI.indentLevel--;

        // Save the height of this element for later
        elementHeightDict[activity.propertyPath] = position.y - rect.y;
    }

    private void DrawLessonStepObjectElement(ReorderableList list, Rect rect, int index, bool isActive, bool isFocused)
    {
        if (list == null) return;

        var stepObject = list.serializedProperty.GetArrayElementAtIndex(index);
        var position = new Rect(rect);

        Object selectedObject = EditorGUI.ObjectField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
             stepObject.objectReferenceValue, typeof(GameObject), true);
        position.y += EditorGUIUtility.singleLineHeight;

        // If this object is new, add it to all subsequent steps too
        if (stepObject.objectReferenceValue != null && !selectedObject.Equals(stepObject.objectReferenceValue)
            || stepObject.objectReferenceValue == null && selectedObject != null)
        {
            for (int i = currentlySelectedStep + 1; i < lessonStepList.serializedProperty.arraySize; i++)
            {
                var step = lessonStepList.serializedProperty.GetArrayElementAtIndex(i);
                var stepObjects = step.FindPropertyRelative("lessonStepObjects");
                // Make sure the object isn't already present in that step. Also remove the old object while we're at it
                bool objectAlreadyAdded = false;
                int oldObjectIndex = -1;
                for (int j = 0; j < stepObjects.arraySize; j++)
                {
                    // Check if the new object exists
                    var jObject = stepObjects.GetArrayElementAtIndex(j);
                    objectAlreadyAdded = jObject.objectReferenceValue != null && jObject.objectReferenceValue.Equals(selectedObject);

                    // Remove the old object
                    if (stepObject.objectReferenceValue != null && stepObject.objectReferenceValue.Equals(jObject.objectReferenceValue))
                        oldObjectIndex = j;
                }
                // Remove the old object
                if (oldObjectIndex >= 0)
                {
                    stepObjects.DeleteArrayElementAtIndex(oldObjectIndex);
                }
                // Add the new object
                if (!objectAlreadyAdded)
                {
                    stepObjects.arraySize++;
                    var newObject = stepObjects.GetArrayElementAtIndex(stepObjects.arraySize - 1);
                    newObject.objectReferenceValue = selectedObject;
                }
            }
        }
        stepObject.objectReferenceValue = selectedObject;
    }

    private void DrawButtonPressActivityElement(ref Rect position, SerializedProperty activity)
    {
        // Find properties
        var buttonToPress = activity.FindPropertyRelative("buttonToPress");

        // Draw a field for the button object
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), buttonToPress);
        position.y += EditorGUIUtility.singleLineHeight;
    }

    private void DrawMovementActivityElement(ref Rect position, SerializedProperty activity)
    {
        // Find properties
        var objectToMove = activity.FindPropertyRelative("objectToMove");
        var testTranslation = activity.FindPropertyRelative("testTranslation");
        var translationThreshold = activity.FindPropertyRelative("translationThreshold");
        var testRotation = activity.FindPropertyRelative("testRotation");
        var rotationThreshold = activity.FindPropertyRelative("rotationThreshold");

        // Draw a field for the moving object
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), objectToMove);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a checkbox for whether translation should be checked
        position.y += EditorGUIUtility.singleLineHeight / 4f;
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), testTranslation);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the translation threshold only if it's being checked
        if (testTranslation.boolValue)
        {
            EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), translationThreshold);
            position.y += EditorGUIUtility.singleLineHeight;
            position.y += EditorGUIUtility.singleLineHeight / 4f;
        }

        // Draw a checkbox for whether rotation should be checked
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), testRotation);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the rotation threshold
        if (testRotation.boolValue)
        {
            EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), rotationThreshold);
            position.y += EditorGUIUtility.singleLineHeight;
        }
    }

    private void DrawPositionMatchActivityElement(ref Rect position, SerializedProperty activity)
    {
        // Find properties
        var objectToMove = activity.FindPropertyRelative("objectToMove");
        var targetPosition = activity.FindPropertyRelative("targetPosition");
        var matchPosition = activity.FindPropertyRelative("matchPosition");
        var positionThreshold = activity.FindPropertyRelative("positionThreshold");
        var matchRotation = activity.FindPropertyRelative("matchRotation");
        var rotationThreshold = activity.FindPropertyRelative("rotationThreshold");

        // Draw a field for the object being moved
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), objectToMove);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the position to match
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), targetPosition);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a checkbox for whether translation should be checked
        position.y += EditorGUIUtility.singleLineHeight / 4f;
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), matchPosition);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the translation threshold only if it's being checked
        if (matchPosition.boolValue)
        {
            EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), positionThreshold);
            position.y += EditorGUIUtility.singleLineHeight;
            position.y += EditorGUIUtility.singleLineHeight / 4f;
        }

        // Draw a checkbox for whether rotation should be checked
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), matchRotation);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the rotation threshold
        if (matchRotation.boolValue)
        {
            EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), rotationThreshold);
            position.y += EditorGUIUtility.singleLineHeight;
        }
    }

    private void DrawSelectionActivityElement(ref Rect position, SerializedProperty activity)
    {
        // Find properties
        var objectToSelect = activity.FindPropertyRelative("objectToSelect");
        var shouldBeSelected = activity.FindPropertyRelative("shouldBeSelected");
        var shouldHoldSelect = activity.FindPropertyRelative("shouldHoldSelect");

        // Draw a field for the object to be selected
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), objectToSelect);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the selection checkbox
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), shouldBeSelected);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the continuous selection checkbox
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), shouldHoldSelect);
        position.y += EditorGUIUtility.singleLineHeight;
    }

    private void DrawVideoActivityElement(ref Rect position, SerializedProperty activity)
    {
        // Find properties
        var videoPlayer = activity.FindPropertyRelative("videoPlayer");
        var useDefaultOutputMesh = activity.FindPropertyRelative("useDefaultOutputMesh");
        var videoClip = activity.FindPropertyRelative("videoClip");
        var subtitles = activity.FindPropertyRelative("subtitles");

        //videoPlayer.objectReferenceValue = lesson.videoPlayer;

        // Draw a field for the video clip
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), videoClip);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the video player
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), videoPlayer);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the subtitle file
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), subtitles);
        position.y += EditorGUIUtility.singleLineHeight;

        // Draw a field for the default output checkbox
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), useDefaultOutputMesh);
        position.y += EditorGUIUtility.singleLineHeight;
    }

    private void DrawNumberInputActivity(ref Rect position, SerializedProperty activity)
    {
        // Find properties
        var correctAnswer = activity.FindPropertyRelative("correctAnswer");
        var numpad = activity.FindPropertyRelative("numpad");
        var inputValidator = activity.FindPropertyRelative("inputValidator");
        var errorMessageField = activity.FindPropertyRelative("errorMessageField");

        // Correct answer
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), correctAnswer);
        position.y += EditorGUIUtility.singleLineHeight;

        position.y += 0.5f * EditorGUIUtility.singleLineHeight;

        // Numpad
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), numpad);
        position.y += EditorGUIUtility.singleLineHeight;

        // Input validator
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), inputValidator);
        position.y += EditorGUIUtility.singleLineHeight;

        // Error message field
        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), errorMessageField);
        position.y += EditorGUIUtility.singleLineHeight;
    }

    #endregion Elements

    #endregion Drawers

    #region Helpers

    #region Height Getters

    private float GetLessonStepHeight(SerializedProperty lessonStep)
    {
        var foldout = lessonStep.FindPropertyRelative("foldout");

        // If not folded out the height is only one line
        var height = EditorGUIUtility.singleLineHeight;

        // Otherwise sum up everything in there
        if (foldout.boolValue)
        {
            // Height from the step's attributes
            if (elementHeightDict.ContainsKey(lessonStep.propertyPath))
                height += elementHeightDict[lessonStep.propertyPath];

            // The height from the activity list
            var activities = lessonStep.FindPropertyRelative("activities");
            var activitiesFoldout = lessonStep.FindPropertyRelative("activitiesFoldout");
            if (activitiesFoldout.boolValue)
            {
                for (int i = 0; i < activities.arraySize; i++)
                    height += GetActivityHeight(activities.GetArrayElementAtIndex(i));
                if (activities.arraySize == 0) height += EditorGUIUtility.singleLineHeight;
            }

            // A bit of extra space to account for headers
            height += EditorGUIUtility.singleLineHeight * 2f;
        }

        return height;
    }

    private float GetActivityHeight(SerializedProperty activity)
    {
        var foldout = activity.FindPropertyRelative("foldout");

        // If not folded out the height is only one line
        var height = EditorGUIUtility.singleLineHeight;

        if (foldout.boolValue && elementHeightDict.ContainsKey(activity.propertyPath))
            height += elementHeightDict[activity.propertyPath];

        return height;
    }

    #endregion Height Getters

    #endregion Helpers
}