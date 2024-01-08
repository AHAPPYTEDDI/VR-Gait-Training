using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class DataExporter : MonoBehaviour
{
    private string filePath = "";
    private static string extensionPattern = "_{0}";

    public string fileName;
    public ScannerBLE scanner;
    private int frameCounter; //Level Dependant Frame Counter

    private void Awake()
    {
        frameCounter = 0;
    }

    private List<string> CSVList = new List<string>();
    // Start is called before the first frame update
    void Start()
    {
        
        filePath = nextAvailableFilename(Application.persistentDataPath + "/Data/" + fileName + ".csv");
        CSVList.Add("Frame,Index,Left,Right");

    }

    // Update is called once per frame
    void Update()
    {
        int index = 0;
        frameCounter++;
        for (int i = 0; i < scanner.SensorDataLeft.Length; i++) {
            string frameString = frameCounter + ","
                        + index + ","
                        + scanner.SensorDataLeft[index] + ","
                        + scanner.SensorDataRight[index];
            CSVList.Add(frameString);
            index++;
        }
    }

    void OnApplicationPause() {
        Debug.Log("attempting write");
        if (CSVList.Count > 0) {
            TextWriter tw = new StreamWriter(filePath, false);

            foreach (string s in CSVList) {
                tw.WriteLine(s);
            }

            tw.Close();
            
        }   
    }

    public static string nextAvailableFilename(string path) {
        Debug.Log("Case 1");
        //If path doesnt exist
        if (!File.Exists(path)) return path;
        Debug.Log("Case 2");
        //if path has extension then get the next one
        if (Path.HasExtension(path)) return GetNextFilename(path.Insert(path.LastIndexOf(Path.GetExtension(path)), extensionPattern));
        Debug.Log("Case 3");
        //if path exists but no extension
        return GetNextFilename(path + extensionPattern);
    }

    private static string GetNextFilename(string pattern) {
        string tmp = string.Format(pattern, 1);
        if (tmp == pattern) throw new System.ArgumentException("The pattern must include an index place-holder", "pattern");

        if (!File.Exists(tmp)) return tmp;

        int min = 1, max =  2;

        while (File.Exists(string.Format(pattern, max))) {
            min = max;
            max *= 2;
        }

        while (max != min + 1) {
            int pivot = (max + min) / 2;
            if (File.Exists(string.Format(pattern, pivot))) min = pivot;
            else max = pivot;
        }

        return string.Format(pattern, max);
    }
}
