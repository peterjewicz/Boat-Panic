using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroll : MonoBehaviour {

	public Renderer currentRend;
	public Vector2 speed;

	private GameObject PlayerReference;
	private Vector3 target;
	private Vector3 lastTarget;


	// Use this for initialization
	void Start () {
		currentRend = GetComponent<Renderer> ();
	}
		
	void Update () {
		if (Input.GetMouseButton (0)) {
			target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			lastTarget = target;
			speed.Set (target.x, target.y);

		} else {
			speed.Set (lastTarget.x, lastTarget.y);
		}


		// set the max values for the speed so it doesn't scroll too fast
		if (speed.x > 0.5F) {
			speed.x = 0.5F;
		}
		if (speed.x < -0.5F) {
			speed.x = -0.5F;
		}

		if (speed.y > 0.5F) {
			speed.y = 0.5F;
		}
		if (speed.y < -0.5F) {
			speed.y = -0.5F;
		}
		Vector2 currentPosition = currentRend.material.mainTextureOffset;
		currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
	}

}
