#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndCurrentScoreDisplay
struct  EndCurrentScoreDisplay_t4067850222  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text EndCurrentScoreDisplay::currentScore
	Text_t356221433 * ___currentScore_2;

public:
	inline static int32_t get_offset_of_currentScore_2() { return static_cast<int32_t>(offsetof(EndCurrentScoreDisplay_t4067850222, ___currentScore_2)); }
	inline Text_t356221433 * get_currentScore_2() const { return ___currentScore_2; }
	inline Text_t356221433 ** get_address_of_currentScore_2() { return &___currentScore_2; }
	inline void set_currentScore_2(Text_t356221433 * value)
	{
		___currentScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentScore_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
