# Spina_GaitTraining
 
The following describes the SPINA/SFTI Gait Training Application and it's components.

## System Overview

The system exists in three parts:
* An adroid application, to be deployed on a phone or tablet device, used to receive data from the digital insoles and send to other parts of the system.
* An augmented reality (AR) application, developed in Unity, to be deployed on a phone or tablet device, which receives information from the android application, and uses the incoming data to display visualizations to the user.
* A virtual reality (VR) application, developed in Unity, to be deployed to a head mounted display with bluetooth capability (currently using the Meta Quest 2). Receives data from the android application, which is then used to display visualizations to the user, and also records the data to a .csv file, stored on the headset.

## Setup and Use

**Android app:**

TODO: Fill in details about android app setup and use @Lukas

_Note:_ If you change the device you are deploying to you MUST specify this in the Scanner_BLE script associated with the Unity Projects. 

**AR app:**

Using the application:
* Open the application on the mobile device.
* The initial screen will be a "loading screen" which will wait for the insoles to pair. Once a conneciton is found the display will update with values from the insole being displayed on the screen. 
* Select the "Continue to AR Visualization" button.
* Follow the instructions on screen to setup your working environment.
* To switch between the sensor and heatmap visualization, select the "Switch Visualization" button.
* When walking around the space, the "on-ground" foot display should automatically update so that it stays in front of you.
* For the sensor visualization, an "attached to screen" display should also display.

_Note_ The AR app does not currently have recording functionality. It should be possible to take the general functionality from the VR script, however there will be some basic edits needed. 

Unity Project:
For editing the project, the bulk functionality is in the "ChangeViz", "InstructionsController", and "ShowARFoot" scripts. Begin with examining the objects in the Hierachy. 

**VR app:**

Setup For New Computer:

Currently the devices require a specific JDK (1.8.0) to run correctly. To specify the new JDK, open the unity project, and go to Edit->Preferences->External Tools. Untick the "JDK installed with Unity" box, amd select the filepath where the JDK version is located. 

_Note:_ In some cases it may be best to manually specify the SDK and NDK as well. The easiest way to do this is select the "Copy Path" button next to each field, untick the relevant "installed with unity" checkbox, and paste the filepath back into the field.

User Testing:

* To setup the application for user testing, open the unity application and go to the scenes folder and double click ActiveWalk_Scene.
* To select the type of foot you want to display, go to the Hierachy window and select the dropdown arrow next to XR Rig. You should see a variety of child objects, some of which are the visualizations (Marked with Viz). There are currently Sensor_Vis (The basic sensor visualization) and HM_Vis (The heatmap visualization).
* To change the visualization that will be used in the test, select the left and right for the visualization and in the details window, make sure they are enabled (The checkbox at the top of the details window). Make sure no other visualizations are enabled at the same time.
* Select the XR Rig in the Hierachy Window.
* In the inspector window find the "HUD Placement Script" component.
* Click and Drag the desired visualizations from the Hierachy window to the Inspector window, and drop them into the left foot and right foot fields of the "HUD Placement Script" component respectively.

Deploying to HMD:

* Connect your HMD to the PC via USB-3.
* Put on the HMD, and select "Allow Access"
* Take off the headset and open the Unity project. 
* Go to File->Build Settings.
* Select Android and Switch platform.
* Your HMD should appear in the "Run Device" field. 
* If it's your first time building the project to the headset, select build and run, otherwise select patch and run.

Recorded Data:

The recorded data is stored at "This PC\Quest 2\Internal shared storage\Android\data\com.CMIC.GTXR_VR\files\Data". If you are having trouble finding the exported files, make sure there is a "Data" folder in the directory. If not, make one and try again. You can change the name of the files by opening the Unity project, selecting XR Rig in the Heirachy window, finding the "Data Exporter" component and changing the value of the "File Name" field. You don't need to change the name every time, as it will generate extensions to the filepath, should you record more than one file with the same name.
