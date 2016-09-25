#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// pb_ObjectPool
struct pb_ObjectPool_t1117343880;
// System.Func`1<UnityEngine.Object>
struct Func_1_t4196640233;
// UnityEngine.Object
struct Object_t3071478659;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"

// System.Void pb_ObjectPool::.ctor(System.Int32,System.Int32,System.Func`1<UnityEngine.Object>)
extern "C"  void pb_ObjectPool__ctor_m3596759040 (pb_ObjectPool_t1117343880 * __this, int32_t ___initialSize0, int32_t ___desiredSize1, Func_1_t4196640233 * ___constructor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object pb_ObjectPool::Get()
extern "C"  Object_t3071478659 * pb_ObjectPool_Get_m2787768591 (pb_ObjectPool_t1117343880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_ObjectPool::Put(UnityEngine.Object)
extern "C"  void pb_ObjectPool_Put_m2304490953 (pb_ObjectPool_t1117343880 * __this, Object_t3071478659 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_ObjectPool::Empty()
extern "C"  void pb_ObjectPool_Empty_m2177897149 (pb_ObjectPool_t1117343880 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
