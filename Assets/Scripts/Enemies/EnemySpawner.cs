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
		Instantiate (bomb, transform.position, Quaternion.identity);
	}
		
}
