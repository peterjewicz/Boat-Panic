using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

public class loadInterstitial : MonoBehaviour {

	// Use this for initialization
	void Start () {
		#if UNITY_ANDROID
		string adUnitId = "ca-app-pub-3940256099942544/1033173712";
		#elif UNITY_IPHONE
		string adUnitId = "ca-app-pub-3940256099942544/4411468910";
		#else
		string adUnitId = "unexpected_platform";
		#endif

		// Initialize an InterstitialAd.
		InterstitialAd interstitial = new InterstitialAd(adUnitId);
		// Create an empty ad request.
		AdRequest request = new AdRequest.Builder().Build();
		// Load the interstitial with the request.
		interstitial.LoadAd(request);

		Debug.Log ("test");
		if (interstitial.IsLoaded()) {
			Debug.Log ("test2");
			interstitial.Show();
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
