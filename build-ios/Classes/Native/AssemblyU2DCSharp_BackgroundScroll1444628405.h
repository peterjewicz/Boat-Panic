#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundScroll
struct  BackgroundScroll_t1444628405  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer BackgroundScroll::currentRend
	Renderer_t257310565 * ___currentRend_2;
	// UnityEngine.Vector2 BackgroundScroll::speed
	Vector2_t2243707579  ___speed_3;
	// UnityEngine.GameObject BackgroundScroll::PlayerReference
	GameObject_t1756533147 * ___PlayerReference_4;
	// UnityEngine.Vector3 BackgroundScroll::target
	Vector3_t2243707580  ___target_5;
	// UnityEngine.Vector3 BackgroundScroll::lastTarget
	Vector3_t2243707580  ___lastTarget_6;

public:
	inline static int32_t get_offset_of_currentRend_2() { return static_cast<int32_t>(offsetof(BackgroundScroll_t1444628405, ___currentRend_2)); }
	inline Renderer_t257310565 * get_currentRend_2() const { return ___currentRend_2; }
	inline Renderer_t257310565 ** get_address_of_currentRend_2() { return &___currentRend_2; }
	inline void set_currentRend_2(Renderer_t257310565 * value)
	{
		___currentRend_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentRend_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BackgroundScroll_t1444628405, ___speed_3)); }
	inline Vector2_t2243707579  get_speed_3() const { return ___speed_3; }
	inline Vector2_t2243707579 * get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(Vector2_t2243707579  value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_PlayerReference_4() { return static_cast<int32_t>(offsetof(BackgroundScroll_t1444628405, ___PlayerReference_4)); }
	inline GameObject_t1756533147 * get_PlayerReference_4() const { return ___PlayerReference_4; }
	inline GameObject_t1756533147 ** get_address_of_PlayerReference_4() { return &___PlayerReference_4; }
	inline void set_PlayerReference_4(GameObject_t1756533147 * value)
	{
		___PlayerReference_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerReference_4, value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(BackgroundScroll_t1444628405, ___target_5)); }
	inline Vector3_t2243707580  get_target_5() const { return ___target_5; }
	inline Vector3_t2243707580 * get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Vector3_t2243707580  value)
	{
		___target_5 = value;
	}

	inline static int32_t get_offset_of_lastTarget_6() { return static_cast<int32_t>(offsetof(BackgroundScroll_t1444628405, ___lastTarget_6)); }
	inline Vector3_t2243707580  get_lastTarget_6() const { return ___lastTarget_6; }
	inline Vector3_t2243707580 * get_address_of_lastTarget_6() { return &___lastTarget_6; }
	inline void set_lastTarget_6(Vector3_t2243707580  value)
	{
		___lastTarget_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
