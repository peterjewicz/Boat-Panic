using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerAttributes : MonoBehaviour {

	public int health = 3; 
	public PlayerRotation Player;

	void Start () {
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnTriggerEnter2D  (Collider2D coll) {
		this.health--;
		if (this.health == 0) {
			// Trigger player death
			Player = GameObject.Find("Player").GetComponent<PlayerRotation>();
			Player.handleExplosion ();
		}
	}
		
}
