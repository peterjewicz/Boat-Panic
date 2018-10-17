#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.Vector3 PlayerMovement::target
	Vector3_t2243707580  ___target_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___target_3)); }
	inline Vector3_t2243707580  get_target_3() const { return ___target_3; }
	inline Vector3_t2243707580 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t2243707580  value)
	{
		___target_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
