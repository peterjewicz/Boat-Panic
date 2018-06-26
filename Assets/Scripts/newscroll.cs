using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class newscroll : MonoBehaviour {

	public Vector2 speed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void LateUpdate() {
		GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
	}
}
