using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditorInternal;

[CustomEditor(typeof(NumberValidator))]
public class NumberValidatorEditor : Editor
{
    private NumberValidator numberValidator;
    private SerializedProperty validationRules;

    [SerializeField]
    private ReorderableList validationRuleList;

    private int currentlySelectedRule = -1;

    private int errorMessageFieldHeight = 3;

    private void OnEnable()
    {
        numberValidator = (NumberValidator)target;
        validationRules = serializedObject.FindProperty("validationRules");
        
        if (validationRules == null)
            validationRules.managedReferenceValue = new List<ValidationRule>();

        validationRuleList = new ReorderableList(serializedObject, validationRules)
        {
            displayAdd = true,
            displayRemove = true,
            draggable = true,

            drawHeaderCallback = DrawValidationRulesHeader,
            drawElementCallback = DrawValidationRuleElement,

            onAddCallback = (list) =>
            {
                int index = currentlySelectedRule >= 0
                    ? currentlySelectedRule + 1
                    : list.serializedProperty.arraySize;

                numberValidator.AddNewRule(index);
                EditorUtility.SetDirty(numberValidator);
            },

            onRemoveCallback = (list) =>
            {
                SerializedProperty removedElement;

                if (currentlySelectedRule >= 0)
                {
                    removedElement = list.serializedProperty.GetArrayElementAtIndex(currentlySelectedRule);
                    list.serializedProperty.DeleteArrayElementAtIndex(currentlySelectedRule);
                }
                else
                {
                    removedElement = list.serializedProperty.GetArrayElementAtIndex(list.serializedProperty.arraySize - 1);
                    list.serializedProperty.arraySize--;
                }
            },

            elementHeightCallback = (index) =>
            {
                if (index < 0) return 0;
                return GetValidationRuleHeight(index);
            },

            onSelectCallback = (list) =>
            {
                currentlySelectedRule = list.index;
            }
        };
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        // Get a reference to the rules foldout
       // var validationRulesFoldout = serializedObject.FindProperty("validationRulesFoldout");

        EditorGUILayout.PropertyField(serializedObject.FindProperty("errorMessageField"));

        EditorGUILayout.Space();

        if (validationRuleList != null)
            //Debug.LogError("Mate");
        //else
        {
            if (validationRuleList.serializedProperty.arraySize - 1 < currentlySelectedRule)
                currentlySelectedRule = -1;

            validationRuleList.DoLayoutList();
        }

        serializedObject.ApplyModifiedProperties();
        EditorUtility.SetDirty(target);
    }

    #region Drawers

    private void DrawValidationRulesHeader(Rect rect)
    {
        EditorGUI.LabelField(rect, new GUIContent("Validation Rules", "Rules submitted numbers must satisfy to be correct. These are evaluated from top to bottom."));
    }

    private void DrawValidationRuleElement(Rect rect, int index, bool isActive, bool isFocused)
    {
        if (isActive)
            currentlySelectedRule = index;

        var rule = validationRules.GetArrayElementAtIndex(index);
        var position = new Rect(rect);

        var foldout = rule.FindPropertyRelative("foldout");
        var validatedAttribute = rule.FindPropertyRelative("attributeToValidate");
        var isNot = rule.FindPropertyRelative("isNot");
        var comparison = rule.FindPropertyRelative("comparison");
        var compareRelativeToAnswer = rule.FindPropertyRelative("compareRelativeToAnswer");
        var compareTo = rule.FindPropertyRelative("compareTo");
        var marginOfError = rule.FindPropertyRelative("marginOfError");
        var errorMessage = rule.FindPropertyRelative("errorMessage");

        // Create a simple description of the rule to display
        string simpleRule = "Input "
            + validatedAttribute.enumDisplayNames[validatedAttribute.enumValueIndex]
            + " is " + (isNot.boolValue ? "Not " : "")
            + comparison.enumDisplayNames[comparison.enumValueIndex]
            + " " + (compareRelativeToAnswer.boolValue ? "Answer" : compareTo.floatValue.ToString())
            + (marginOfError.floatValue == 0f ? "" : " ± " + marginOfError.floatValue.ToString());

        // Make this label be a foldout
        EditorGUI.indentLevel++;
        {
            foldout.boolValue = EditorGUI.Foldout(new Rect(position.x, position.y, 10, EditorGUIUtility.singleLineHeight),
                foldout.boolValue, simpleRule);

            if (foldout.boolValue)
            {
                // Draw a label for the rule for convenience
                EditorGUI.LabelField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), simpleRule);
                position.y += EditorGUIUtility.singleLineHeight;

                EditorGUI.indentLevel++;
                {
                    // Draw a dropdown list for the possible attributes than can be validated
                    EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                        validatedAttribute);
                    position.y += EditorGUIUtility.singleLineHeight;

                    // Draw a checkbox for negating the results of the comparison
                    EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                        isNot);
                    position.y += EditorGUIUtility.singleLineHeight;

                    // Draw a dropdown list for choosing which comparison to make
                    EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                        comparison);
                    position.y += EditorGUIUtility.singleLineHeight;

                    // Draw a checkbox for whether to compare against the input
                    EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                        compareRelativeToAnswer);
                    position.y += EditorGUIUtility.singleLineHeight;

                    // Draw a field for entering the value to compare against
                    if (!compareRelativeToAnswer.boolValue)
                    {
                        EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                            compareTo);
                        position.y += EditorGUIUtility.singleLineHeight;
                    }

                    // Field for the margin of error
                    EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                        marginOfError);
                    position.y += EditorGUIUtility.singleLineHeight;

                    // Field for the error message
                    EditorGUI.PropertyField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight),
                        errorMessage);
                    position.y += EditorGUIUtility.singleLineHeight;
                }
                EditorGUI.indentLevel--;
            }
        }
        EditorGUI.indentLevel--;
        rect.y = position.y;
    }

    #endregion Drawers

    #region Helpers

    private float GetValidationRuleHeight(int index)
    {
        var rule = validationRules.GetArrayElementAtIndex(index);

        // If not folded out then height will be 1
        var foldout = rule.FindPropertyRelative("foldout");
        if (!foldout.boolValue)
            return EditorGUIUtility.singleLineHeight;

        float height = 7.0f;

        var compareRelativeToAnswer = rule.FindPropertyRelative("compareRelativeToAnswer");
        if (!compareRelativeToAnswer.boolValue)
            height += 1.0f;

        return height * EditorGUIUtility.singleLineHeight;
    }

    #endregion Helpers
}
