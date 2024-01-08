using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NumberValidator : MonoBehaviour
{
    [SerializeField, HideInInspector]
    [Tooltip("A list of rules the validated number should follow. These are evaluated from top-to-bottom; only the first error will be reported.")]
    public List<ValidationRule> validationRules = new List<ValidationRule>();

    [Tooltip("Where to display potential error messages")]
    public TMPro.TextMeshProUGUI errorMessageField;

    [HideInInspector]
    public bool validationRulesFoldout = false;

    public NumberValidator()
    {
        validationRules = new List<ValidationRule>();
        ValidationRule sampleRule = new ValidationRule();
        sampleRule.errorMessage = "Sample error message";
        sampleRule.comparison = ValidationRule.Comparison.EqualTo;
        sampleRule.marginOfError = 0;
        sampleRule.attributeToValidate = ValidationRule.ValidatedAttribute.Value;
    }
    
    public bool ValidateNumber(string value, string compareTo)
    {
        foreach (ValidationRule rule in validationRules)
        {
            if (!rule.validateNumber(value, compareTo))
            {
                errorMessageField.SetText(rule.errorMessage);
                return false;
            }
        }

        return true;
    }

    public bool ValidateNumber(float value, float compareTo)
    {
        return ValidateNumber(value.ToString(), compareTo.ToString());
    }

    public void AddNewRule(int index)
    {
        ValidationRule rule = new ValidationRule();
        rule.attributeToValidate = ValidationRule.ValidatedAttribute.Value;
        rule.comparison = ValidationRule.Comparison.EqualTo;

        if (index < validationRules.Count)
            validationRules.Insert(index, rule);
        else
            validationRules.Add(rule);
    }
}
