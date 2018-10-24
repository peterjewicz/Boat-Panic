using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndCurrentScoreDisplay : MonoBehaviour {

	public Text currentScore;

	// Use this for initialization
	void Start () {
		int previousScore = PlayerPrefs.GetInt("currentScore", 0);
		currentScore.text = "Current Score: " + previousScore;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
