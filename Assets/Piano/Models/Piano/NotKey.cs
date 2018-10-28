using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotKey : MonoBehaviour {
    public GameObject MusicalSymbol;
    Animator animator;
    AudioSource audio;
    int collidedObjects = 0;
    bool endOfReleasing = false;

	// Use this for initialization
	void Start () {
        animator = GetComponent<Animator>();
        animator.SetBool("IsPressed", false);

        audio = GetComponent<AudioSource>();

        collidedObjects = 0;
        endOfReleasing = true;
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnTriggerEnter(Collider other)
    {
        if ("Particle" == other.gameObject.tag){
            if (collidedObjects <= 0){
                if (true == endOfReleasing){
                    audio.Play();
                    endOfReleasing = false;

                    if (null != MusicalSymbol){
                        GameObject musicalParticle = Instantiate(MusicalSymbol, new Vector3(transform.position.x, 1.7f, -6), Quaternion.Euler(75, 0, 0));
                        Destroy(musicalParticle, 1.4f);
                    }
                }
                animator.SetBool("IsPressed", true);
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

    public void EndOfReleasing(){
        endOfReleasing = true;
    }

}
