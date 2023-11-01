using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LockPositionToTransform : MonoBehaviour
{

    [SerializeField]
    [Tooltip("Which transform this object should snap to on spawn")]
    private Transform transformToMatch;

    [SerializeField]
    [Tooltip("Where this object should spawn relative to the transform")]
    private Vector3 offset;

    [SerializeField]
    [Tooltip("How long to wait after spawn before snapping to the target position")]
    private float delay = 0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //timeSinceStart += Time.deltaTime;
       //if (!hasSetTransform && timeSinceStart > delay)
        //{
            this.transform.position = transformToMatch.position + offset;
            this.transform.rotation = transform.rotation;
        //    hasSetTransform = true;
        //}
    }
}
