using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {
    public Transform player;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	    if (Application.platform == RuntimePlatform.WindowsEditor){
            player.position = new Vector3((Input.mousePosition.x /(float) Screen.width) * 16 - 8, 0, (Input.mousePosition.y /(float) Screen.height) * 12 - 6);
        }

	}

}
