using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowObject : MonoBehaviour
{
	[Tooltip("The object that this one should follow")]
	public GameObject objectToFollow;
	
	[Tooltip("This object's offset from the followed one.")]
	public Vector3 offset;
	
	[Tooltip("How long it should take for this object's position to match the tracked one's.")]
	public float trackingDelay;
	
	[Tooltip("Whether this object should always face the tracked one.")]
	public bool shouldFaceTrackedObject;
	
	[SerializeField] private bool ignoreY;
	
	// Current velocity
	private Vector3 velocity;
	
	
    // Start is called before the first frame update
    void Start()
    {
		Vector3 targetPosition = objectToFollow.transform.position 
			+ offset.x * objectToFollow.transform.right
			+ offset.y * objectToFollow.transform.up
			+ offset.z * objectToFollow.transform.forward;
		//if (ignoreY) targetPosition.y = 0;
        Vector3 finalPosition = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, trackingDelay);
		if (ignoreY) finalPosition.y = transform.position.y;
		transform.position = finalPosition;
		transform.rotation = Quaternion.Euler(Vector3.SmoothDamp(transform.rotation.eulerAngles,
			objectToFollow.transform.rotation.eulerAngles, ref velocity, trackingDelay));
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 targetPosition = objectToFollow.transform.position 
			+ offset.x * objectToFollow.transform.right
			+ offset.y * objectToFollow.transform.up
			+ offset.z * objectToFollow.transform.forward;
		//if (ignoreY) targetPosition.y = 0;
		Vector3 finalPosition = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, trackingDelay);
		if (ignoreY) finalPosition.y = transform.position.y;
		transform.position = finalPosition;
		if (shouldFaceTrackedObject)
		{
			transform.LookAt(objectToFollow.transform, Vector3.up);
			transform.Rotate(0f, 180f, 0f);
		}
		else
		{
			transform.rotation = Quaternion.Euler(Vector3.SmoothDamp(transform.rotation.eulerAngles, 
				objectToFollow.transform.rotation.eulerAngles, ref velocity, trackingDelay));
		}
    }
}
