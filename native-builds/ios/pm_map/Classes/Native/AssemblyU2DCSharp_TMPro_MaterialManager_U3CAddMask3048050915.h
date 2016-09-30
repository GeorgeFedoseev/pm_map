#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialManager/<AddMaskingMaterial>c__AnonStorey49
struct  U3CAddMaskingMaterialU3Ec__AnonStorey49_t3048050915  : public Il2CppObject
{
public:
	// UnityEngine.Material TMPro.MaterialManager/<AddMaskingMaterial>c__AnonStorey49::stencilMaterial
	Material_t3870600107 * ___stencilMaterial_0;

public:
	inline static int32_t get_offset_of_stencilMaterial_0() { return static_cast<int32_t>(offsetof(U3CAddMaskingMaterialU3Ec__AnonStorey49_t3048050915, ___stencilMaterial_0)); }
	inline Material_t3870600107 * get_stencilMaterial_0() const { return ___stencilMaterial_0; }
	inline Material_t3870600107 ** get_address_of_stencilMaterial_0() { return &___stencilMaterial_0; }
	inline void set_stencilMaterial_0(Material_t3870600107 * value)
	{
		___stencilMaterial_0 = value;
		Il2CppCodeGenWriteBarrier(&___stencilMaterial_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
