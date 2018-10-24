#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BombCollision
struct  BombCollision_t4025668808  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator BombCollision::anim
	Animator_t69676727 * ___anim_2;
	// UnityEngine.AudioClip BombCollision::explosion
	AudioClip_t1932558630 * ___explosion_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(BombCollision_t4025668808, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_explosion_3() { return static_cast<int32_t>(offsetof(BombCollision_t4025668808, ___explosion_3)); }
	inline AudioClip_t1932558630 * get_explosion_3() const { return ___explosion_3; }
	inline AudioClip_t1932558630 ** get_address_of_explosion_3() { return &___explosion_3; }
	inline void set_explosion_3(AudioClip_t1932558630 * value)
	{
		___explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
