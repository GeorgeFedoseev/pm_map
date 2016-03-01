#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<UnityEngine.Object>
struct Func_1_t726165739;
// System.Collections.Queue
struct Queue_t1621224067;

#include "mscorlib_System_Object837106420.h"

// pb_ObjectPool
struct  pb_ObjectPool_t1117343880  : public Object_t
{
	// System.Int32 pb_ObjectPool::desiredSize
	int32_t ___desiredSize_0;
	// System.Func`1<UnityEngine.Object> pb_ObjectPool::constructor
	Func_1_t726165739 * ___constructor_1;
	// System.Collections.Queue pb_ObjectPool::pool
	Queue_t1621224067 * ___pool_2;
};
