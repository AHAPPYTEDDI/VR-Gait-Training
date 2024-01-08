using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TriggerMenu : MonoBehaviour
{
    public Text MenuText;
    public GameObject TargetGraphic;
    public GameObject DebugLevel;
    public GameObject ActiveWalkLevel;

    //Show Level selection options
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player")) {
            MenuText.GetComponent<Text>().text = "Choose Level:";
            Debug.Log("On");

            TargetGraphic.SetActive(false);

            DebugLevel.SetActive(true);
            ActiveWalkLevel.SetActive(true);

        }
    }

    //Hide Level Selection options and display message
    void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player")) {
            MenuText.GetComponent<Text>().text = "Stand in Center";
            Debug.Log("Off");

            TargetGraphic.SetActive(true);

            DebugLevel.SetActive(false);
            ActiveWalkLevel.SetActive(false);
        }
    }
}
