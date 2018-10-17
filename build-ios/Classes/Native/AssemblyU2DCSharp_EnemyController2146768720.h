#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2146768720  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EnemyController::isDead
	bool ___isDead_2;
	// System.Single EnemyController::speed
	float ___speed_3;
	// System.Single EnemyController::specialSpeed
	float ___specialSpeed_4;

public:
	inline static int32_t get_offset_of_isDead_2() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___isDead_2)); }
	inline bool get_isDead_2() const { return ___isDead_2; }
	inline bool* get_address_of_isDead_2() { return &___isDead_2; }
	inline void set_isDead_2(bool value)
	{
		___isDead_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_specialSpeed_4() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___specialSpeed_4)); }
	inline float get_specialSpeed_4() const { return ___specialSpeed_4; }
	inline float* get_address_of_specialSpeed_4() { return &___specialSpeed_4; }
	inline void set_specialSpeed_4(float value)
	{
		___specialSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
