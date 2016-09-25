#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.RippleControl
struct  RippleControl_t2007958899  : public Il2CppObject
{
public:

public:
};

struct RippleControl_t2007958899_StaticFields
{
public:
	// UnityEngine.GameObject MaterialUI.RippleControl::ripplePrefab
	GameObject_t3674682005 * ___ripplePrefab_0;
	// UnityEngine.GameObject MaterialUI.RippleControl::currentRipple
	GameObject_t3674682005 * ___currentRipple_1;

public:
	inline static int32_t get_offset_of_ripplePrefab_0() { return static_cast<int32_t>(offsetof(RippleControl_t2007958899_StaticFields, ___ripplePrefab_0)); }
	inline GameObject_t3674682005 * get_ripplePrefab_0() const { return ___ripplePrefab_0; }
	inline GameObject_t3674682005 ** get_address_of_ripplePrefab_0() { return &___ripplePrefab_0; }
	inline void set_ripplePrefab_0(GameObject_t3674682005 * value)
	{
		___ripplePrefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___ripplePrefab_0, value);
	}

	inline static int32_t get_offset_of_currentRipple_1() { return static_cast<int32_t>(offsetof(RippleControl_t2007958899_StaticFields, ___currentRipple_1)); }
	inline GameObject_t3674682005 * get_currentRipple_1() const { return ___currentRipple_1; }
	inline GameObject_t3674682005 ** get_address_of_currentRipple_1() { return &___currentRipple_1; }
	inline void set_currentRipple_1(GameObject_t3674682005 * value)
	{
		___currentRipple_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentRipple_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
