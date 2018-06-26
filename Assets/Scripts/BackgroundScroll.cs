using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroll : MonoBehaviour {


	private GameObject PlayerReference;
	public Vector2 speed;
	private Vector3 target;


	// Use this for initialization
	void Start () {
		
	}
		
	void Update () {
		if (Input.GetMouseButton (0)) {
			target = Camera.main.ScreenToWorldPoint (Input.mousePosition);

			//TODO set max && min value for x and y
			speed.Set(target.x / 100, target.y / 100);
			GetComponent<Renderer> ().material.mainTextureOffset = speed * Time.time;
		}
	}

}
