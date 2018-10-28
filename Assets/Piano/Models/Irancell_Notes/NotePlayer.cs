using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotePlayer : MonoBehaviour {
    const int audiosCount = 11;
    public AudioSource[] audios = new AudioSource[audiosCount];
    int noteIndex = 0;

    public void OnPressKey(){
        if (noteIndex < audiosCount - 1){    //Play the current note
            audios[noteIndex++].Play();
        }else{                          //End of cycle
            noteIndex = 0;

        }

    }

	// Use this for initialization
	void Start () {
        noteIndex = 0;

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
