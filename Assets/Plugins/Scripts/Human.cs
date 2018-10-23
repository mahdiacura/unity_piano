using UnityEngine;
using System.Collections;

public class Human : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

        //transform.GetChild(0).GetComponent<Sound>().resumeTime = transform.GetChild(0).GetComponents<AudioSource>()[1].time;
    }

    void OnDestroy()
    {

        //transform.GetChild(0).GetComponent<Sound>().parentDestroyed = true;
        //transform.GetChild(0).SetParent(null);
    }
}
