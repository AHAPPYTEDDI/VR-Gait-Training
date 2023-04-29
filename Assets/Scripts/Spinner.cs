using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spinner : MonoBehaviour
{
    public Vector3 rotation;
    public GameObject cube;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        cube.transform.Rotate(rotation.x, rotation.y, rotation.z, Space.World);
    }
}
