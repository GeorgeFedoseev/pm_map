#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;
// System.String
struct String_t;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loom/DelayedQueueItem
struct  DelayedQueueItem_t3219765808 
{
public:
	// System.Single Loom/DelayedQueueItem::time
	float ___time_0;
	// System.Action Loom/DelayedQueueItem::action
	Action_t3771233898 * ___action_1;
	// System.String Loom/DelayedQueueItem::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t3219765808, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t3219765808, ___action_1)); }
	inline Action_t3771233898 * get_action_1() const { return ___action_1; }
	inline Action_t3771233898 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t3771233898 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t3219765808, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Loom/DelayedQueueItem
struct DelayedQueueItem_t3219765808_marshaled_pinvoke
{
	float ___time_0;
	Il2CppMethodPointer ___action_1;
	char* ___name_2;
};
// Native definition for marshalling of: Loom/DelayedQueueItem
struct DelayedQueueItem_t3219765808_marshaled_com
{
	float ___time_0;
	Il2CppMethodPointer ___action_1;
	Il2CppChar* ___name_2;
};
