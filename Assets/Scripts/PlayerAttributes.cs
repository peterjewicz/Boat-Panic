using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttributes : MonoBehaviour {

	public int health = 1; 
	public bool isDead = false;


	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		if(isDead) {
			// end the game
		}	
	}

	private void handleCollision () {
		// Handle the collision here
		// 1. set isDead to True
	}
}
