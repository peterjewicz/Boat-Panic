using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombCollision : MonoBehaviour {
	private Animator anim;
	public AudioClip explosion;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator>();
	}

	void OnTriggerEnter2D(Collider2D other) {
		anim.Play("Bomb_Explodeanim");
		AudioSource.PlayClipAtPoint(explosion, transform.position);
	}

	public void destroyObject() {
		Destroy(gameObject);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
