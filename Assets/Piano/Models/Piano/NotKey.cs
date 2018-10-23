using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotKey : MonoBehaviour {
    Animator animator;
    AudioSource audio;

	// Use this for initialization
	void Start () {
        animator = GetComponent<Animator>();
        animator.SetBool("IsPressed", false);

        audio = GetComponent<AudioSource>();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter(Collider other)
    {
        if ("Particle" == other.gameObject.tag){
            animator.SetBool("IsPressed", true);
            audio.Play();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if ("Particle" == other.gameObject.tag)
            animator.SetBool("IsPressed", false);
    }

    public void CheckToExit(){
        Debug.LogError("CheckToExit");
    }

}
