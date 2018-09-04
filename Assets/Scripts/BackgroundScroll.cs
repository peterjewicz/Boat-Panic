using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroll : MonoBehaviour {

	public Renderer currentRend;
	public Vector2 speed;

	private GameObject PlayerReference;
	private Vector3 target;


	// Use this for initialization
	void Start () {
		currentRend = GetComponent<Renderer> ();
	}
		
	void Update () {
		if (Input.GetMouseButton (0)) {
			target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			speed.Set(target.x, target.y);

			// set the max values for the speed so it doesn't scroll too fast
			if (speed.x > 1) { speed.x = 1; }
			if (speed.x < -1) { speed.x = -1; }

			if (speed.y > 1) { speed.y = 1; }
			if (speed.y < -1) { speed.y = -1; }

			Vector2 currentPosition = currentRend.material.mainTextureOffset;
			Debug.Log (currentPosition);
			currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		}
	}

}
