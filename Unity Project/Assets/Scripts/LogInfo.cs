using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LogInfo : MonoBehaviour
{
    public static LogInfo Instance;

    public string LogFolder;

    // Start is called before the first frame update
    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        if (LogInfo.Instance != null)
            LogInfo.Instance.LogFolder = System.DateTime.Now.ToString().Replace("/", "-").Replace("\\", "-");
    }
}
