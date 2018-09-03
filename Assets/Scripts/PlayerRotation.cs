using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerRotation : MonoBehaviour {

	private Vector3 target;

	void Start () {
	}

	void Update () {

		if (Input.GetMouseButton(0)) {
			target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			target.z = transform.position.z;

			//rotation
			target.Normalize();
			float rot_z = Mathf.Atan2(target.y, target.x) * Mathf.Rad2Deg;
			transform.rotation = Quaternion.Euler(0f, 0f, rot_z - 90);
		}

	}
}
