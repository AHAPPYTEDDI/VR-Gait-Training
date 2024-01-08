using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnSystem : MonoBehaviour
{
    public Transform spawnPoint;
    //private bool spawning = false;

    private void Start()
    {
        transform.position = spawnPoint.position;
    }
    void Update()
    {
        
    }
}
