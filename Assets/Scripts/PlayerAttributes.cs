using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAttributes : MonoBehaviour {

	public int health = 3; 
	public bool isDead = false;


	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		if(isDead) {
			// end the game
		}	
	}

	void OnTriggerEnter2D  (Collider2D coll) {
		Debug.Log ("test");
		this.health--;
		if (this.health == 0) {
			//TODO play animation
			SceneManager.LoadScene("end");
		}
	}

	private void handleCollision () {
		// Handle the collision here
		// 1. set isDead to True

	}
}
