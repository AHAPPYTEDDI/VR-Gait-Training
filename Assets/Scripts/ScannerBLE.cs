using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ArduinoBluetoothAPI;
using System;
using UnityEngine.UI;
using System.Timers;

public class ScannerBLE : MonoBehaviour
{
	public int[] SensorDataLeft = new int[40];
	public int[] SensorDataRight = new int[40];

	const string tabletName = "CMIC's Galaxy Tab S6";
	const string spinaServiceUUID = "84f33a30-30d6-4b31-ac89-9555b39beb13";
	const string spinaLeftUUID = "9ede68ba-bc6a-417e-b7f3-e5c591a9748e";
	const string spinaRightUUID = "6262946c-da31-44f2-a1b5-51ce4f96b499";

	[SerializeField] Transform debugMessageContent;
	[SerializeField] GameObject debugMessagePrefab;
	BluetoothHelper bluetoothHelper;

	// Timer _timer;
	// const int timeoutSeconds = 10000;
	bool _scanning = false;

	public bool isConnected;

	void Start()
	{
		// _timer = new Timer(timeoutSeconds);
		// _timer.Elapsed += (sender, e) =>
		// {
		// 	Debug("No connection for " + timeoutSeconds / 1000f + " seconds, restarting");
		// 	// bluetoothHelper.Disconnect();
		// 	// bluetoothHelper = null;
		// 	// bluetoothHelper.;
		// 	_scanning = false;
		// 	InitializeBLE();
		// };
		InitializeBLE();
	}

	void InitializeBLE()
	{
		try
		{
			Debug("Starting");
			BluetoothHelper.BLE = true;
			bluetoothHelper = BluetoothHelper.GetInstance();
			bluetoothHelper.OnConnected += OnConnected;
			bluetoothHelper.OnConnectionFailed += (helper) =>
			{
				Debug("connection failed");
			};
			bluetoothHelper.OnScanEnded += OnScanEnded;
			bluetoothHelper.OnServiceNotFound += (helper, serviceName) =>
			{
				Debug(serviceName);
			};
			bluetoothHelper.OnCharacteristicNotFound += (helper, serviceName, characteristicName) =>
			{
				Debug("Characteristic not found " + characteristicName);
			};
			bluetoothHelper.OnCharacteristicChanged += (helper, bytes, characteristic) =>
			{
				// _timer.Stop();
				// _timer.Start();
				//Debug(characteristic.getName());
				UpdateSensorData(characteristic.getName(), bytes);
			};
		}
		catch (Exception ex)
		{
			Debug(ex.StackTrace);
		}

	}

	void UpdateSensorData(string charactersticName, byte[] bytes)
	{
		int[] dec = BytesToDec(bytes);
		string dataString = "";
		if (charactersticName.Equals(spinaLeftUUID))
		{
			// Debug("updating left values");
			for (int i = 0; i < 40; i++)
			{
				// SensorDataLeft[i] = dec[i + 5] + dec[i + 5] / 5;
				SensorDataLeft[i] = dec[i];
				dataString += SensorDataLeft[i];
			}
			//Debug(dataString);
		}
		else if (charactersticName.Equals(spinaRightUUID))
		{
			// Debug("updating right values");
			for (int i = 0; i < 40; i++)
			{
				// SensorDataRight[i] = dec[i + 5] + dec[i + 5] / 5;
				SensorDataRight[i] = dec[i];
				dataString += SensorDataRight[i];
			}
			//Debug(dataString);
		}
	}

	void Update()
	{
		if (bluetoothHelper.IsBluetoothEnabled())
		{
			if (!bluetoothHelper.isConnected())
			{
				if (!_scanning)
				{
					Debug("Scanning");
					bluetoothHelper.ScanNearbyDevices();
					_scanning = true;
				}
			}
		}
		else
		{
			bluetoothHelper.EnableBluetooth(true);
		}

	}

	void OnConnected(BluetoothHelper helper)
	{
		Debug("This is connnected");
		isConnected = true;

		Debug("Connected to " + helper.getBluetoothDevice().DeviceName);
		List<BluetoothHelperService> services = helper.getGattServices();
		// Debug("found  " + services.Count + " services");
		foreach (BluetoothHelperService s in services)
		{
			// Debug("service: " + s.getName());
			if (s.getName().ToLower().Equals(spinaServiceUUID))
			{
				//Debug("Subscribing to " + s.getName() + " on " + helper.getBluetoothDevice().DeviceName);
				bluetoothHelper.Subscribe(s);
			}
		}
		// _timer.Stop();
		// _timer.Start();
	}

	void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> devices)
	{
		if (bluetoothHelper.isConnected())
		{
			Debug("Finished scan but already connected, returning");
			return;
		}
		Debug("Found " + devices.Count + " devices");

		foreach (var d in devices)
		{
			//Debug("Found device: " + d.DeviceName);
			if (d.DeviceName == tabletName)
			{
				bluetoothHelper.setDeviceName(d.DeviceName);
				bluetoothHelper.Connect();
			}
		}

		_scanning = false;
	}

	void OnDestroy()
	{
		if (bluetoothHelper != null)
			bluetoothHelper.Disconnect();
	}

	// void UpdateSensorGridUI()
	// {
	// 	debugLeftGrid.text = "";
	// 	debugRightGrid.text = "";
	// 	for (int i = 0; i < leftData.Length; i++)
	// 	{
	// 		debugLeftGrid.text += leftData[i] + " ";
	// 	}
	// 	for (int i = 0; i < rightData.Length; i++)
	// 	{
	// 		debugRightGrid.text += rightData[i] + " ";
	// 	}
	// }

	// void UpdateConnectionUI()
	// {
	// 	if (leftDevice == null)
	// 	{
	// 		debugLeft.text = "Left: Disconnected";
	// 	}
	// 	else
	// 	{
	// 		debugLeft.text = "Left: Connected";
	// 	}
	// 	if (rightDevice == null)
	// 	{
	// 		debugRight.text = "Right: Disconnected";
	// 	}
	// 	else
	// 	{
	// 		debugRight.text = "Right: Connected";
	// 	}
	// }

	public void Debug(string text)
	{
		if (debugMessagePrefab == null || debugMessageContent == null) return;
		GameObject newMessage = Instantiate(debugMessagePrefab, debugMessageContent, false);
		newMessage.GetComponent<Text>().text = text;
	}

	public void ClearDebug()
	{
		print(debugMessageContent.transform.childCount);
		for (int i = 0; i < debugMessageContent.transform.childCount; i++)
		{
			GameObject.Destroy(debugMessageContent.transform.GetChild(i).gameObject);
		}
	}

	int[] BytesToDec(byte[] bytes)
	{
		int[] decData = new int[bytes.Length];
		int i = 0;
		foreach (byte b in bytes)
		{
			decData[i++] = b & 0xff;
		}
		return decData;
	}
}
