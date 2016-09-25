#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Boolean,System.Collections.Generic.List`1<UnityEngine.GameObject>>>
struct Dictionary_2_t1791036972;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolSystem
struct  PoolSystem_t2430881163  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Boolean,System.Collections.Generic.List`1<UnityEngine.GameObject>>> PoolSystem::pool
	Dictionary_2_t1791036972 * ___pool_2;
	// System.Object PoolSystem::lockObj
	Il2CppObject * ___lockObj_3;

public:
	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(PoolSystem_t2430881163, ___pool_2)); }
	inline Dictionary_2_t1791036972 * get_pool_2() const { return ___pool_2; }
	inline Dictionary_2_t1791036972 ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(Dictionary_2_t1791036972 * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier(&___pool_2, value);
	}

	inline static int32_t get_offset_of_lockObj_3() { return static_cast<int32_t>(offsetof(PoolSystem_t2430881163, ___lockObj_3)); }
	inline Il2CppObject * get_lockObj_3() const { return ___lockObj_3; }
	inline Il2CppObject ** get_address_of_lockObj_3() { return &___lockObj_3; }
	inline void set_lockObj_3(Il2CppObject * value)
	{
		___lockObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockObj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
