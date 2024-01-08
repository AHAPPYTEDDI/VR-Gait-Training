using UnityEngine;

[System.Serializable]
public class ValidationRule
{
    public enum ValidatedAttribute
    {
        Value,
        Length
    }
    public enum Comparison
    {
        LessThan,
        LessThanOrEqualTo,
        EqualTo,
        GreaterThan,
        GreaterThanOrEqualTo,
        AHalfTurnFrom,
        AQuarterTurnFrom
    }

    [Tooltip("Which attribute of the submitted value should be validated")]
    [SerializeField] public ValidatedAttribute attributeToValidate;

    [Tooltip("Whether to negate (reverse) the result of the comparison for 'Is Not' tests")]
    public bool isNot;

    [Tooltip("The comparison to make between the submitted value and the correct value")]
    [SerializeField] public Comparison comparison;

    [Tooltip("Whether to compare the input to a given correct answer (true) or a pre-determined constant (false)")]
    [SerializeField] public bool compareRelativeToAnswer = true;

    [Tooltip("The correct answer to validate against")]
    [SerializeField] public float compareTo;

    [Tooltip("The acceptable margin of error for the comparison")]
    [SerializeField] public float marginOfError;

    [Tooltip("The message to display if this rule is broken")]
    [SerializeField] public string errorMessage;

    // Used for the custom inspector
    [HideInInspector] public bool foldout;

    public bool validateNumber(string value, string compareTo)
    {
        float valueNum = attributeToValidate == ValidatedAttribute.Length
            ? value.Length
            : float.Parse(value);

        float comparator = compareRelativeToAnswer ? float.Parse(compareTo) : this.compareTo;
        float diff = valueNum - comparator;
        bool result;
        switch (comparison)
        {
            case Comparison.LessThan:
                result = diff < 0;
                break;
            case Comparison.LessThanOrEqualTo:
                result = diff <= 0f;
                break;
            case Comparison.EqualTo:
                Debug.Log($"Checking {valueNum}={compareTo}. {Mathf.Abs(diff)}<={marginOfError}");
                result = Mathf.Abs(diff) <= marginOfError;
                break;
            case Comparison.GreaterThanOrEqualTo:
                result = diff >= 0;
                break;
            case Comparison.GreaterThan:
                result = diff > 0;
                break;
            case Comparison.AHalfTurnFrom:
                if (diff < 0) diff = 360.0f - (-1f*diff);
                result = Mathf.Abs(diff - 180f) <= marginOfError;
                break;
            case Comparison.AQuarterTurnFrom:
                if (diff < 0) diff = 360.0f - (-1f * diff);
                result = Mathf.Abs(diff - 90f) <= marginOfError;
                break;
            default:
                return true;
        }

        return isNot ^ result;
    }

    public bool validateNumber(float value, float compareTo)
    {
        return validateNumber(value.ToString(), compareTo.ToString());
    }
}
