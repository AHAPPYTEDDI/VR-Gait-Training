using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAnim : MonoBehaviour
{
    [SerializeField] private Animator myInstructions = null;
    [SerializeField] private string Start = "Start";

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player"))
        {
            myInstructions.Play(Start, 0,0.0f);
        }
    }
}
