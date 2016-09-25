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

// TMPro.MaterialManager/<GetStencilMaterial>c__AnonStorey46
struct  U3CGetStencilMaterialU3Ec__AnonStorey46_t1936614865  : public Il2CppObject
{
public:
	// UnityEngine.Material TMPro.MaterialManager/<GetStencilMaterial>c__AnonStorey46::baseMaterial
	Material_t3870600107 * ___baseMaterial_0;
	// System.Int32 TMPro.MaterialManager/<GetStencilMaterial>c__AnonStorey46::stencilID
	int32_t ___stencilID_1;

public:
	inline static int32_t get_offset_of_baseMaterial_0() { return static_cast<int32_t>(offsetof(U3CGetStencilMaterialU3Ec__AnonStorey46_t1936614865, ___baseMaterial_0)); }
	inline Material_t3870600107 * get_baseMaterial_0() const { return ___baseMaterial_0; }
	inline Material_t3870600107 ** get_address_of_baseMaterial_0() { return &___baseMaterial_0; }
	inline void set_baseMaterial_0(Material_t3870600107 * value)
	{
		___baseMaterial_0 = value;
		Il2CppCodeGenWriteBarrier(&___baseMaterial_0, value);
	}

	inline static int32_t get_offset_of_stencilID_1() { return static_cast<int32_t>(offsetof(U3CGetStencilMaterialU3Ec__AnonStorey46_t1936614865, ___stencilID_1)); }
	inline int32_t get_stencilID_1() const { return ___stencilID_1; }
	inline int32_t* get_address_of_stencilID_1() { return &___stencilID_1; }
	inline void set_stencilID_1(int32_t value)
	{
		___stencilID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
