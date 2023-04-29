using UnityEngine;
using ArduinoBluetoothAPI;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;

public class Scanner : MonoBehaviour
{
	BluetoothHelper bluetoothHelper;
	[SerializeField] Transform debugMessageContent;
	[SerializeField] GameObject debugMessagePrefab;
	[SerializeField] Text debugLeft;
	[SerializeField] Text debugRight;
	[SerializeField] Text debugLeftGrid;
	[SerializeField] Text debugRightGrid;

	string spinaDeviceNameRight = "SPINA PediSol 250R_40_58F";
	string spinaDeviceNameLeft = "SPINA PediSol 250L_40_58E";

	BluetoothDevice leftDevice = null;
	BluetoothDevice rightDevice = null;

	private bool _scanning = false;

	byte[] leftData = new byte[0];
	byte[] rightData = new byte[0];

	void Start()
	{
		try
		{
			BluetoothHelper.BLE = false;
			bluetoothHelper = BluetoothHelper.GetInstance();

			//bluetoothHelper.OnConnected += OnConnected;
			//bluetoothHelper.OnConnectionFailed += OnConnectionFailed;
			//bluetoothHelper.OnDataReceived += OnDataRecieved;
			//bluetoothHelper.OnScanEnded += OnScanEnded;

			// bluetoothHelper.setTerminatorBasedStream("\n");

		}
		catch (BluetoothHelper.BlueToothNotEnabledException ex)
		{
            // Debug.Log(ex.ToString());
            Debug(ex.Message);
        }
	}

	void Update()
	{
		// if (leftDevice != null || rightDevice != null) return;
		if (bluetoothHelper.IsBluetoothEnabled())
		{
			ScanIfMissingDevices();
		}
		else
		{
			bluetoothHelper.EnableBluetooth(true);
		}

		UpdateConnectionUI();
		UpdateSensorGridUI();
	}

	void OnConnected(BluetoothHelper helper)
	{
		Debug("Connected to " + helper.getDeviceName());
	}

	void OnConnectionFailed(BluetoothHelper helper)
	{
		Debug("Connection failed: " + helper.getBluetoothDevice().DeviceName);

		if (helper.getBluetoothDevice().DeviceName == spinaDeviceNameLeft)
		{
			leftDevice = null;
		}
		else if (helper.getBluetoothDevice().DeviceName == spinaDeviceNameRight)
		{
			rightDevice = null;
		}
	}


	void OnDataRecieved(BluetoothHelper helper)
	{
		if (helper.getBluetoothDevice() == leftDevice)
		{
			leftData = helper.ReadBytes();
		}
		else if (helper.getBluetoothDevice() == rightDevice)
		{
			rightData = helper.ReadBytes();
		}
		// byte[] readBytes = helper.ReadBytes();
		Debug("Data recieved: ");
	}

	void OnScanEnded(BluetoothHelper helper, LinkedList<BluetoothDevice> nearbyDevices)
	{

		List<BluetoothDevice> devices = GetUniqueDevices(nearbyDevices);
		Debug("Scan finished, found " + devices.Count + " devices");
		foreach (BluetoothDevice b in devices)
		{
			if (b.DeviceName == spinaDeviceNameLeft || b.DeviceName == spinaDeviceNameRight)
				Debug(b.DeviceName + " " + b.DeviceAddress);

			if (leftDevice == null && b.DeviceName == spinaDeviceNameLeft)
			{
				Debug("Found left device");
				leftDevice = b;
				bluetoothHelper.setDeviceName(spinaDeviceNameLeft);
				bluetoothHelper.Connect();
				// break;
			}
			else if (rightDevice == null && b.DeviceName == spinaDeviceNameRight)
			{
				Debug("Found right device");
				rightDevice = b;
				bluetoothHelper.setDeviceName(spinaDeviceNameRight);
				bluetoothHelper.Connect();
				// break;
			}
		};

		Debug("------------------");
		_scanning = false;
	}

	List<BluetoothDevice> GetUniqueDevices(LinkedList<BluetoothDevice> devices)
	{
		List<BluetoothDevice> uniqueDevices = new List<BluetoothDevice>();
		foreach (BluetoothDevice bluetoothDevice in devices)
		{
			if (!uniqueDevices.Any(d => d.DeviceName == bluetoothDevice.DeviceName && d.DeviceAddress == bluetoothDevice.DeviceAddress))
			{
				uniqueDevices.Add(bluetoothDevice);
			}
		}
		return uniqueDevices;
	}

	void Debug(string text)
	{
		GameObject newMessage = Instantiate(debugMessagePrefab, debugMessageContent, false);
		newMessage.GetComponent<Text>().text = text;
	}

	void ScanIfMissingDevices()
	{
		if (!_scanning && (leftDevice == null || rightDevice == null))
		{
			Scan();
		}
	}

	void Scan()
	{
		Debug("Scanning...");
		_scanning = true;
		bluetoothHelper.ScanNearbyDevices();
	}

	void UpdateSensorGridUI()
	{
		debugLeftGrid.text = "";
		debugRightGrid.text = "";
		for (int i = 0; i < leftData.Length; i++)
		{
			debugLeftGrid.text += leftData[i] + " ";
		}
		for (int i = 0; i < rightData.Length; i++)
		{
			debugRightGrid.text += rightData[i] + " ";
		}
	}

	void UpdateConnectionUI()
	{
		if (leftDevice == null)
		{
			debugLeft.text = "Left: Disconnected";
		}
		else
		{
			debugLeft.text = "Left: Connected";
		}
		if (rightDevice == null)
		{
			debugRight.text = "Right: Disconnected";
		}
		else
		{
			debugRight.text = "Right: Connected";
		}
	}

	public void ClearDebug()
	{
		print(debugMessageContent.transform.childCount);
		for (int i = 0; i < debugMessageContent.transform.childCount; i++)
		{
			GameObject.Destroy(debugMessageContent.transform.GetChild(i).gameObject);
		}
	}
}
