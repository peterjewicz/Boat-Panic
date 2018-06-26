using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroll : MonoBehaviour {


	public GameObject PlayerReference;
	public SpriteRenderer currentBackground;
	private float drawDistance = 1.0f;
	private int text = 0;

	// Use this for initialization
	void Start () {

		//get the player so we can see where on the map they're positioned
		PlayerReference = GameObject.Find ("Player");

		//get the background sprite instance
		currentBackground = gameObject.GetComponent<SpriteRenderer> ();
	}

	// Update is called once per frame
	void Update () {
		
		float playerPosX = PlayerReference.transform.position.x;
		float playerPosY = PlayerReference.transform.position.y;

		float xSize = currentBackground.bounds.size.x / 2;
		float ySize = currentBackground.bounds.size.y / 2;
		Vector3 centerPosition = currentBackground.bounds.center;
		Debug.Log (playerPosX);
		Debug.Log (centerPosition.x + xSize);
		if ( centerPosition.x + xSize - drawDistance   < playerPosX) {

//			if (text == 0) {
//				Instantiate(Resources.Load("Background"), new Vector3 (10, 0, 0), Quaternion.identity); 
//				text = 10;
//			}


			//spawn a new sprite at the center = x,y position and attache a backgroundscroll.cs to it
		}

		if (ySize / 2 - 5  < playerPosY) {
//			Debug.Log ("Outside the bounds Y Positive");
		}

//		Debug.Log (currenBackground.bounds.size.x); // Our x size
		//		Debug.Log (currenBackground.bounds.size.y); // our y size
		//		Debug.Log (currenBackground.bounds.center); //our center point 1/2 x to edge
    

		//TODO

		//1. create a tile of 9 images, one where the player spawns and 8 surrounding it. 
		//2. As the player moves in the x we check to see if completly out of the past image
		//3. if it is, then we grab the furthest away and move in ahead of the current one
		//4. we do the same in the reverse direction swapping its position as the player moves in and out
		//5. we then duplicate this for the Y and x-y diaganol direction
	

	}
}
