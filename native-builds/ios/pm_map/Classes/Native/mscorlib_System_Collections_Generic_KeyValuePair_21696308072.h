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
// System.Collections.Generic.LinkedListNode`1<System.Action>
struct LinkedListNode_1_t3387968605;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct  KeyValuePair_2_t1696308072 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Action_t3771233898 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	LinkedListNode_1_t3387968605 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1696308072, ___key_0)); }
	inline Action_t3771233898 * get_key_0() const { return ___key_0; }
	inline Action_t3771233898 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Action_t3771233898 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1696308072, ___value_1)); }
	inline LinkedListNode_1_t3387968605 * get_value_1() const { return ___value_1; }
	inline LinkedListNode_1_t3387968605 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(LinkedListNode_1_t3387968605 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
