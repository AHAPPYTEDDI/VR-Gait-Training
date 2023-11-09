using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LockPositionToTransform : MonoBehaviour
{
	[SerializeField]
	private Transform targetTransform;
	
	[SerializeField]
	private Vector3 positionOffset;
	
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 targetPosition = targetTransform.position + positionOffset;
		targetPosition.y = positionOffset.y;
		this.transform.position = targetPosition;
    }
}
