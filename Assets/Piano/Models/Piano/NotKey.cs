using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotKey : MonoBehaviour {
    Animator animator;
    AudioSource audio;
    int collidedObjects = 0;

	// Use this for initialization
	void Start () {
        animator = GetComponent<Animator>();
        animator.SetBool("IsPressed", false);

        audio = GetComponent<AudioSource>();

        collidedObjects = 0;
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter(Collider other)
    {
        if ("Particle" == other.gameObject.tag){
            if (collidedObjects <= 0){
                animator.SetBool("IsPressed", true);
                audio.Play();
            }
            collidedObjects++;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if ("Particle" == other.gameObject.tag){
            collidedObjects--;
            if (collidedObjects <= 0){
                collidedObjects = 0;
                animator.SetBool("IsPressed", false);
            }
        }
    }


}
