﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Action`2<System.Object,System.Object>>
struct LinkedList_1_t2167699632;
// System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,System.Object>>
struct LinkedListNode_1_t3909799170;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedList`1/Enumerator<System.Action`2<System.Object,System.Object>>
struct  Enumerator_t3650854192 
{
public:
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::list
	LinkedList_1_t2167699632 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::current
	LinkedListNode_1_t3909799170 * ___current_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::index
	int32_t ___index_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator::version
	uint32_t ___version_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1/Enumerator::si
	SerializationInfo_t2185721892 * ___si_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3650854192, ___list_0)); }
	inline LinkedList_1_t2167699632 * get_list_0() const { return ___list_0; }
	inline LinkedList_1_t2167699632 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(LinkedList_1_t2167699632 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Enumerator_t3650854192, ___current_1)); }
	inline LinkedListNode_1_t3909799170 * get_current_1() const { return ___current_1; }
	inline LinkedListNode_1_t3909799170 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(LinkedListNode_1_t3909799170 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier(&___current_1, value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3650854192, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Enumerator_t3650854192, ___version_3)); }
	inline uint32_t get_version_3() const { return ___version_3; }
	inline uint32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_si_4() { return static_cast<int32_t>(offsetof(Enumerator_t3650854192, ___si_4)); }
	inline SerializationInfo_t2185721892 * get_si_4() const { return ___si_4; }
	inline SerializationInfo_t2185721892 ** get_address_of_si_4() { return &___si_4; }
	inline void set_si_4(SerializationInfo_t2185721892 * value)
	{
		___si_4 = value;
		Il2CppCodeGenWriteBarrier(&___si_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
