﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerAttributes : MonoBehaviour {

	public int health = 3; 
	public PlayerRotation Player;
	public Text currentHealth;

	void Start () {
		currentHealth.text = "Health: " + this.health;
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnTriggerEnter2D  (Collider2D coll) {
		this.health--;
		currentHealth.text = "Health: " + this.health;
		if (this.health == 0) {
			// Trigger player death
			Player = GameObject.Find("Player").GetComponent<PlayerRotation>();
			Player.handleExplosion ();
		}
	}
		
}
