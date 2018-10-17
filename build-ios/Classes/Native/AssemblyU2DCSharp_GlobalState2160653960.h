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

// GlobalState
struct  GlobalState_t2160653960  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GlobalState::score
	float ___score_2;
	// System.Boolean GlobalState::gameOver
	bool ___gameOver_3;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(GlobalState_t2160653960, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_gameOver_3() { return static_cast<int32_t>(offsetof(GlobalState_t2160653960, ___gameOver_3)); }
	inline bool get_gameOver_3() const { return ___gameOver_3; }
	inline bool* get_address_of_gameOver_3() { return &___gameOver_3; }
	inline void set_gameOver_3(bool value)
	{
		___gameOver_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
