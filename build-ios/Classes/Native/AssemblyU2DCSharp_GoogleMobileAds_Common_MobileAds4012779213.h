#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Boolean3825574718.h"

// GoogleMobileAds.Common.MobileAdsEventExecutor
struct MobileAdsEventExecutor_t4012779213;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Common.MobileAdsEventExecutor
struct  MobileAdsEventExecutor_t4012779213  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct MobileAdsEventExecutor_t4012779213_StaticFields
{
public:
	// GoogleMobileAds.Common.MobileAdsEventExecutor GoogleMobileAds.Common.MobileAdsEventExecutor::instance
	MobileAdsEventExecutor_t4012779213 * ___instance_2;
	// System.Collections.Generic.List`1<System.Action> GoogleMobileAds.Common.MobileAdsEventExecutor::adEventsQueue
	List_1_t2595592884 * ___adEventsQueue_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GoogleMobileAds.Common.MobileAdsEventExecutor::adEventsQueueEmpty
	bool ___adEventsQueueEmpty_4;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAdsEventExecutor_t4012779213_StaticFields, ___instance_2)); }
	inline MobileAdsEventExecutor_t4012779213 * get_instance_2() const { return ___instance_2; }
	inline MobileAdsEventExecutor_t4012779213 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAdsEventExecutor_t4012779213 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_adEventsQueue_3() { return static_cast<int32_t>(offsetof(MobileAdsEventExecutor_t4012779213_StaticFields, ___adEventsQueue_3)); }
	inline List_1_t2595592884 * get_adEventsQueue_3() const { return ___adEventsQueue_3; }
	inline List_1_t2595592884 ** get_address_of_adEventsQueue_3() { return &___adEventsQueue_3; }
	inline void set_adEventsQueue_3(List_1_t2595592884 * value)
	{
		___adEventsQueue_3 = value;
		Il2CppCodeGenWriteBarrier(&___adEventsQueue_3, value);
	}

	inline static int32_t get_offset_of_adEventsQueueEmpty_4() { return static_cast<int32_t>(offsetof(MobileAdsEventExecutor_t4012779213_StaticFields, ___adEventsQueueEmpty_4)); }
	inline bool get_adEventsQueueEmpty_4() const { return ___adEventsQueueEmpty_4; }
	inline bool* get_address_of_adEventsQueueEmpty_4() { return &___adEventsQueueEmpty_4; }
	inline void set_adEventsQueueEmpty_4(bool value)
	{
		___adEventsQueueEmpty_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
