using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAttributes : MonoBehaviour {

	public int health = 3; 

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnTriggerEnter2D  (Collider2D coll) {
		this.health--;
		if (this.health == 0) {
			//TODO play animation ad trigger end scence after completion
			SceneManager.LoadScene("end");
		}
	}

	private void handleCollision () {
		// Handle the collision here
		// 1. set isDead to True

	}
}
