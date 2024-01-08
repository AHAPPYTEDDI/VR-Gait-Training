using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeasureDistance : MonoBehaviour
{

    public float distanceTravelled = 0.0f;
    public float GetDistancedTravelled() { return distanceTravelled; }

    private Transform currentPos;
    private Vector3 prevPos;

    void Start()
    {
        currentPos = transform;
        prevPos = currentPos.position;
    }

    // Update is called once per frame
    void Update()
    {
        distanceTravelled += (prevPos - currentPos.position).magnitude;
        prevPos = currentPos.position;

        GetComponent<TextMesh>().text = "Distanced Walked: " + distanceTravelled.ToString();
    }
}
