#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t3805611425;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loadInterstitial
struct  loadInterstitial_t3047719154  : public MonoBehaviour_t1158329972
{
public:
	// GoogleMobileAds.Api.InterstitialAd loadInterstitial::interstitial
	InterstitialAd_t3805611425 * ___interstitial_2;
	// System.Boolean loadInterstitial::interstitialLoaded
	bool ___interstitialLoaded_3;

public:
	inline static int32_t get_offset_of_interstitial_2() { return static_cast<int32_t>(offsetof(loadInterstitial_t3047719154, ___interstitial_2)); }
	inline InterstitialAd_t3805611425 * get_interstitial_2() const { return ___interstitial_2; }
	inline InterstitialAd_t3805611425 ** get_address_of_interstitial_2() { return &___interstitial_2; }
	inline void set_interstitial_2(InterstitialAd_t3805611425 * value)
	{
		___interstitial_2 = value;
		Il2CppCodeGenWriteBarrier(&___interstitial_2, value);
	}

	inline static int32_t get_offset_of_interstitialLoaded_3() { return static_cast<int32_t>(offsetof(loadInterstitial_t3047719154, ___interstitialLoaded_3)); }
	inline bool get_interstitialLoaded_3() const { return ___interstitialLoaded_3; }
	inline bool* get_address_of_interstitialLoaded_3() { return &___interstitialLoaded_3; }
	inline void set_interstitialLoaded_3(bool value)
	{
		___interstitialLoaded_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
