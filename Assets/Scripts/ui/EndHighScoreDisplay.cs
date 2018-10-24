using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndHighScoreDisplay : MonoBehaviour {

	public Text highScore;

	// Use this for initialization
	void Start () {
		int currentScore = PlayerPrefs.GetInt("score", 0);
		highScore.text = "High Score: " + currentScore;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
