using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreHandler : MonoBehaviour {

	public Text highScore;
	private int score = 0;

	// Use this for initialization
	void Start () {
		highScore.text = "Score: " + score;
	}
	
	// Update is called once per frame
	void Update () {
		score = score + 1;
		highScore.text = "Score: " + score;
	}
}
