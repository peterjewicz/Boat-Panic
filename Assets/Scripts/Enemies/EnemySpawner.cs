using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public bool isSpawning;
	public int spawnTime = 2;
	public GameObject bomb;
	// TODO we might come back and make this more generic if we make more enemies
//	public ArrayList enemyTypes ['mine', 'bomb', 'otherBoat'];

	private float timeSinceLastEnemy;

	void Start () {
		InvokeRepeating("spawnEnemy", spawnTime, spawnTime);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void spawnEnemy() {

		// TODO we need to make sure that this will never spawn the bomb below the player. 
		// Probably best to get the disatance as a function of some sort of radius value and 
		// always spawn bombs on that given radius or tighten it as the game goes on
		Vector3 spawnLocation = transform.position;
		spawnLocation.x = Random.Range (0.0f, 1.0f) * 15;
		spawnLocation.y = Random.Range (0.0f, 1.0f) * 15;
		Instantiate (bomb, spawnLocation, Quaternion.identity);

		// We should also play an animation here
	}
		
}
