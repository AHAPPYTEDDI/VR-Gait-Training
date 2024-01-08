using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Visualizer : MonoBehaviour
{
	public bool leftDevice;
	public ScannerBLE scannerBLE;
	public GameObject[] lights = new GameObject[40];

	private bool leftDetected, rightDetected = false;

	void Update()
	{
		leftDetected = false;
		rightDetected = false;

		if (leftDevice)
		{
			for (int i = 0; i < scannerBLE.SensorDataLeft.Length; i++)
			{
				lights[i].GetComponent<Renderer>().material.color = new Color(scannerBLE.SensorDataLeft[i] / 0f, 255, 0);
				if (scannerBLE.SensorDataLeft[i] != 0) {
					leftDetected = true;
				}
				//Debug.Log("Light number" + lights[i] + " value: " + scannerBLE.SensorDataLeft[i]);
				//addFrontData(leftFront);
				//addBackData(leftBack);
			}

			
				//Debug.Log("#####################");
				//Debug.Log("Left Front Average: " + getFrontAverage(scannerBLE.SensorDataLeft));
				//Debug.Log("Left Back Average: " + getBackAverage(scannerBLE.SensorDataLeft));
			
		}
		else
		{
			for (int i = 0; i < scannerBLE.SensorDataRight.Length; i++)
			{
				lights[i].GetComponent<Renderer>().material.color = new Color(scannerBLE.SensorDataRight[i] / 0f, 255, 0);
				if (scannerBLE.SensorDataRight[i] != 0)
				{
					rightDetected = true;
				}

			}
				//Debug.Log("#####################");
				//Debug.Log("Right Front Average: " + getFrontAverage(scannerBLE.SensorDataRight));
				//Debug.Log("Right Back Average: " + getBackAverage(scannerBLE.SensorDataRight));
		}
	}

	public int getFrontAverage(int[] sensorData)
	{
		int average = 0;

		for (int i = 0; i < 22; i++)
		{
			average += sensorData[i];
		}

		average /= 23;

		return average;
	}

	public int getBackAverage(int[] sensorData)
	{
		int average = 0;

		for (int i = 32; i < 40; i++)
		{
			average += sensorData[i];
		}

		average /= 9;

		return average;
	}

	public bool isRightDetected()
    {
		return rightDetected;
    }

	public bool isLeftDetected()
    {
		return leftDetected;
    }
}
