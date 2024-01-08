using UnityEngine;

public class HUDPlacement : MonoBehaviour
{
    public GameObject leftFoot;
    public GameObject rightFoot;
    public float distanceFromPlayer;
    public Camera HMD;
    public Light FootLight;
    public bool onFloor;
    
    public GameObject Text;
    private Vector3 prevPos;
    private float distanceTravelled = .0f;


    private Transform cameraTransform;
    void Start()
    {
        cameraTransform = HMD.transform;

        prevPos = cameraTransform.position;
    }

    void Update()
    {
        //Left Foot Positions
        leftFoot.transform.position = (cameraTransform.position + (cameraTransform.forward * distanceFromPlayer));

        if (onFloor)
        {
            leftFoot.transform.position = new Vector3(leftFoot.transform.position.x, 0.0f, leftFoot.transform.position.z);
        }
        else
        {
            leftFoot.transform.position = new Vector3(leftFoot.transform.position.x, cameraTransform.position.y, leftFoot.transform.position.z);
        }

        leftFoot.transform.LookAt(cameraTransform);
        
        //Right Foot Positions
        rightFoot.transform.position = (cameraTransform.position + (cameraTransform.forward * distanceFromPlayer));

        if (onFloor)
        {
            rightFoot.transform.position = new Vector3(rightFoot.transform.position.x, .0f, rightFoot.transform.position.z);
        }
        else
        {
            rightFoot.transform.position = new Vector3(rightFoot.transform.position.x, cameraTransform.position.y, rightFoot.transform.position.z);
        }

        rightFoot.transform.LookAt(cameraTransform);

        //LightPosition
        FootLight.transform.position = (cameraTransform.position + (cameraTransform.forward * (distanceFromPlayer/2)));

        ////TextPosition and string
        //Text.transform.position = (cameraTransform.position + (cameraTransform.forward * distanceFromPlayer));
        //Text.transform.position = new Vector3(Text.transform.position.x, cameraTransform.position.y, Text.transform.position.z);
        //Text.transform.LookAt(cameraTransform);
        //distanceTravelled += (prevPos - cameraTransform.position).magnitude;
        //Text.GetComponentInChildren<TextMesh>().text = "Distance Travelled: " + distanceTravelled.ToString();

        prevPos = cameraTransform.position;

    }
}
