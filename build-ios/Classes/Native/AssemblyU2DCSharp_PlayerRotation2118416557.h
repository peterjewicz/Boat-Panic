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

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerRotation
struct  PlayerRotation_t2118416557  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 PlayerRotation::target
	Vector3_t2243707580  ___target_2;
	// UnityEngine.Animator PlayerRotation::anim
	Animator_t69676727 * ___anim_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(PlayerRotation_t2118416557, ___target_2)); }
	inline Vector3_t2243707580  get_target_2() const { return ___target_2; }
	inline Vector3_t2243707580 * get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Vector3_t2243707580  value)
	{
		___target_2 = value;
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(PlayerRotation_t2118416557, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
