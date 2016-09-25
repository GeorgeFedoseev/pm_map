#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CUDLR.CommandAttribute/CallbackSimple
struct CallbackSimple_t3929425343;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Console/<RegisterAttributes>c__AnonStorey43
struct  U3CRegisterAttributesU3Ec__AnonStorey43_t1478417744  : public Il2CppObject
{
public:
	// CUDLR.CommandAttribute/CallbackSimple CUDLR.Console/<RegisterAttributes>c__AnonStorey43::cbs
	CallbackSimple_t3929425343 * ___cbs_0;

public:
	inline static int32_t get_offset_of_cbs_0() { return static_cast<int32_t>(offsetof(U3CRegisterAttributesU3Ec__AnonStorey43_t1478417744, ___cbs_0)); }
	inline CallbackSimple_t3929425343 * get_cbs_0() const { return ___cbs_0; }
	inline CallbackSimple_t3929425343 ** get_address_of_cbs_0() { return &___cbs_0; }
	inline void set_cbs_0(CallbackSimple_t3929425343 * value)
	{
		___cbs_0 = value;
		Il2CppCodeGenWriteBarrier(&___cbs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
