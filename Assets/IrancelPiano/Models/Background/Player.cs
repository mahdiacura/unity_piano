using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {
    public Transform player;
    float startTime = 0;

	// Use this for initialization
	void Start () {
        startTime = Time.time;

    }
	
	// Update is called once per frame
	void Update () {
	    if (Application.platform == RuntimePlatform.WindowsEditor){
            player.position = new Vector3((Input.mousePosition.x /(float) Screen.width) * 16 - 8, 0, (Input.mousePosition.y /(float) Screen.height) * 12 - 6);
        }

        if (Time.time - startTime >= 30 + 10){   //End of scene
            UnityEngine.SceneManagement.SceneManager.LoadScene("Irancel_Piano");
            //Debug.LogError("End of scene");
        }

	}

}
