using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateAnimation : MonoBehaviour
{
    public float rotationSpeed = 30f;

    private Quaternion initRotation;
    
    void Start()
    {
        initRotation = transform.rotation;
    }

    void Update()
    {
        float angle = Mathf.PingPong(Time.time * rotationSpeed, 360) - 270f;
        transform.rotation = initRotation * Quaternion.Euler(0, angle, 0);
    }
}
