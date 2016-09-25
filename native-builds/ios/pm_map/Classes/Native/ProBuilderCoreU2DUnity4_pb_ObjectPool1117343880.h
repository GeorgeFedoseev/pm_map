#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<UnityEngine.Object>
struct Func_1_t4196640233;
// System.Collections.Queue
struct Queue_t1759945451;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pb_ObjectPool
struct  pb_ObjectPool_t1117343880  : public Il2CppObject
{
public:
	// System.Int32 pb_ObjectPool::desiredSize
	int32_t ___desiredSize_0;
	// System.Func`1<UnityEngine.Object> pb_ObjectPool::constructor
	Func_1_t4196640233 * ___constructor_1;
	// System.Collections.Queue pb_ObjectPool::pool
	Queue_t1759945451 * ___pool_2;

public:
	inline static int32_t get_offset_of_desiredSize_0() { return static_cast<int32_t>(offsetof(pb_ObjectPool_t1117343880, ___desiredSize_0)); }
	inline int32_t get_desiredSize_0() const { return ___desiredSize_0; }
	inline int32_t* get_address_of_desiredSize_0() { return &___desiredSize_0; }
	inline void set_desiredSize_0(int32_t value)
	{
		___desiredSize_0 = value;
	}

	inline static int32_t get_offset_of_constructor_1() { return static_cast<int32_t>(offsetof(pb_ObjectPool_t1117343880, ___constructor_1)); }
	inline Func_1_t4196640233 * get_constructor_1() const { return ___constructor_1; }
	inline Func_1_t4196640233 ** get_address_of_constructor_1() { return &___constructor_1; }
	inline void set_constructor_1(Func_1_t4196640233 * value)
	{
		___constructor_1 = value;
		Il2CppCodeGenWriteBarrier(&___constructor_1, value);
	}

	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(pb_ObjectPool_t1117343880, ___pool_2)); }
	inline Queue_t1759945451 * get_pool_2() const { return ___pool_2; }
	inline Queue_t1759945451 ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(Queue_t1759945451 * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier(&___pool_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
