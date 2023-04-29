using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class GetSoleData : MonoBehaviour
{
    [SerializeField] bool leftDevice;
    [SerializeField] ScannerBLE scannerBLE;
   

    HeatmapVisualizer.Sensor[] sensorList;

    void Start()
    {
        sensorList = GetComponent<HeatmapVisualizer>().sensors;
    }

    void Update()
    {

        if (leftDevice)
        {

            for (int i = 0; i < scannerBLE.SensorDataLeft.Length && i < sensorList.Length; ++i)
            {
                sensorList[i].value = scannerBLE.SensorDataLeft[i] / 155f;
            }
        }

        else
        {
            for (int i = 0; i < scannerBLE.SensorDataRight.Length && i < sensorList.Length; ++i)
            {
                sensorList[i].value = scannerBLE.SensorDataRight[i] / 155f;
            }
        }

    }
}

