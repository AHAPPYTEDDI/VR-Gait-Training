using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class HeatMap_Vis : MonoBehaviour
{
    public bool leftDevice;
    public ScannerBLE scanner;
    public MeshFilter footMesh;
    Vector3[] vertices;
    Color32[] _colors;

    // Start is called before the first frame update
    void Start()
    {
        footMesh.mesh.vertices = vertices;
        _colors = footMesh.mesh.colors32;
        
    }

    // Update is called once per frame
    void Update()
    {
        if (leftDevice)
        {
            for (int i = 0; i < scanner.SensorDataLeft.Length; i++)
            {

            }
        }
    }
}
