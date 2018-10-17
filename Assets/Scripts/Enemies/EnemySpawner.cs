using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public bool isSpawning;
	public float spawnTime = 0.5f;
	public int spawnRadius = 10;
	public int minSpawnDistance = 3;
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
		Vector3 spawnLocation = transform.position;

		// Get random point on unit circle and scale it to spawn radius
		Vector2 circlePoint = Random.insideUnitCircle;
		circlePoint.x = circlePoint.x * this.spawnRadius;
		circlePoint.y = circlePoint.y * this.spawnRadius;

		// we want there to be a minimium spawn distance to make the game fair
		// If we're less than that just bump it a bit
		if (circlePoint.x < this.minSpawnDistance) {
			circlePoint.x = circlePoint.x + 1;
		}

		if (circlePoint.y < this.minSpawnDistance) {
			circlePoint.y = circlePoint.y + 1;
		}

		//Add the offset value to the current location of the player
		spawnLocation.x = spawnLocation.x + circlePoint.x;
		spawnLocation.y = spawnLocation.y + circlePoint.y;

		Instantiate (bomb, spawnLocation, Quaternion.identity);

		// We should also play an animation here
	}
		
}
