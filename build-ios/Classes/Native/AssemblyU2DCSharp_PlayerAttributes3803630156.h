#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerRotation
struct PlayerRotation_t2118416557;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerAttributes
struct  PlayerAttributes_t3803630156  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerAttributes::health
	int32_t ___health_2;
	// PlayerRotation PlayerAttributes::Player
	PlayerRotation_t2118416557 * ___Player_3;
	// UnityEngine.UI.Text PlayerAttributes::currentHealth
	Text_t356221433 * ___currentHealth_4;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(PlayerAttributes_t3803630156, ___health_2)); }
	inline int32_t get_health_2() const { return ___health_2; }
	inline int32_t* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(int32_t value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_Player_3() { return static_cast<int32_t>(offsetof(PlayerAttributes_t3803630156, ___Player_3)); }
	inline PlayerRotation_t2118416557 * get_Player_3() const { return ___Player_3; }
	inline PlayerRotation_t2118416557 ** get_address_of_Player_3() { return &___Player_3; }
	inline void set_Player_3(PlayerRotation_t2118416557 * value)
	{
		___Player_3 = value;
		Il2CppCodeGenWriteBarrier(&___Player_3, value);
	}

	inline static int32_t get_offset_of_currentHealth_4() { return static_cast<int32_t>(offsetof(PlayerAttributes_t3803630156, ___currentHealth_4)); }
	inline Text_t356221433 * get_currentHealth_4() const { return ___currentHealth_4; }
	inline Text_t356221433 ** get_address_of_currentHealth_4() { return &___currentHealth_4; }
	inline void set_currentHealth_4(Text_t356221433 * value)
	{
		___currentHealth_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentHealth_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
