#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.ShadowAnim[]
struct ShadowAnimU5BU5D_t3214588464;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_MaterialUI_ShadowConfig_ShadowsAc229625119.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ShadowConfig
struct  ShadowConfig_t3345927342  : public MonoBehaviour_t667441552
{
public:
	// MaterialUI.ShadowAnim[] MaterialUI.ShadowConfig::shadows
	ShadowAnimU5BU5D_t3214588464* ___shadows_2;
	// System.Int32 MaterialUI.ShadowConfig::shadowNormalSize
	int32_t ___shadowNormalSize_3;
	// System.Int32 MaterialUI.ShadowConfig::shadowActiveSize
	int32_t ___shadowActiveSize_4;
	// MaterialUI.ShadowConfig/ShadowsActive MaterialUI.ShadowConfig::shadowsActiveWhen
	int32_t ___shadowsActiveWhen_5;
	// System.Boolean MaterialUI.ShadowConfig::isEnabled
	bool ___isEnabled_6;

public:
	inline static int32_t get_offset_of_shadows_2() { return static_cast<int32_t>(offsetof(ShadowConfig_t3345927342, ___shadows_2)); }
	inline ShadowAnimU5BU5D_t3214588464* get_shadows_2() const { return ___shadows_2; }
	inline ShadowAnimU5BU5D_t3214588464** get_address_of_shadows_2() { return &___shadows_2; }
	inline void set_shadows_2(ShadowAnimU5BU5D_t3214588464* value)
	{
		___shadows_2 = value;
		Il2CppCodeGenWriteBarrier(&___shadows_2, value);
	}

	inline static int32_t get_offset_of_shadowNormalSize_3() { return static_cast<int32_t>(offsetof(ShadowConfig_t3345927342, ___shadowNormalSize_3)); }
	inline int32_t get_shadowNormalSize_3() const { return ___shadowNormalSize_3; }
	inline int32_t* get_address_of_shadowNormalSize_3() { return &___shadowNormalSize_3; }
	inline void set_shadowNormalSize_3(int32_t value)
	{
		___shadowNormalSize_3 = value;
	}

	inline static int32_t get_offset_of_shadowActiveSize_4() { return static_cast<int32_t>(offsetof(ShadowConfig_t3345927342, ___shadowActiveSize_4)); }
	inline int32_t get_shadowActiveSize_4() const { return ___shadowActiveSize_4; }
	inline int32_t* get_address_of_shadowActiveSize_4() { return &___shadowActiveSize_4; }
	inline void set_shadowActiveSize_4(int32_t value)
	{
		___shadowActiveSize_4 = value;
	}

	inline static int32_t get_offset_of_shadowsActiveWhen_5() { return static_cast<int32_t>(offsetof(ShadowConfig_t3345927342, ___shadowsActiveWhen_5)); }
	inline int32_t get_shadowsActiveWhen_5() const { return ___shadowsActiveWhen_5; }
	inline int32_t* get_address_of_shadowsActiveWhen_5() { return &___shadowsActiveWhen_5; }
	inline void set_shadowsActiveWhen_5(int32_t value)
	{
		___shadowsActiveWhen_5 = value;
	}

	inline static int32_t get_offset_of_isEnabled_6() { return static_cast<int32_t>(offsetof(ShadowConfig_t3345927342, ___isEnabled_6)); }
	inline bool get_isEnabled_6() const { return ___isEnabled_6; }
	inline bool* get_address_of_isEnabled_6() { return &___isEnabled_6; }
	inline void set_isEnabled_6(bool value)
	{
		___isEnabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
