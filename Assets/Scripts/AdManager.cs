using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

public class AdManager : MonoBehaviour {

	// TODO We need to come back and add in android
	// Use this for initialization
	void Start () {
		#if UNITY_ANDROID
		string appId = "N/A";
		#elif UNITY_IPHONE
		string appId = "ca-app-pub-7918336603285970~3602952563";
		#else
		string appId = "unexpected_platform";
		#endif

		// Initialize the Google Mobile Ads SDK.
		MobileAds.Initialize(appId);


	}
	
	// Update is called once per frame
	void Update () {
	}
}
