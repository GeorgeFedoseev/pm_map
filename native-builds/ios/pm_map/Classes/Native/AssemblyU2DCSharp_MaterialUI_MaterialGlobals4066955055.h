#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.MaterialGlobals
struct  MaterialGlobals_t4066955055  : public MonoBehaviour_t667441552
{
public:

public:
};

struct MaterialGlobals_t4066955055_StaticFields
{
public:
	// UnityEngine.Vector4 MaterialUI.MaterialGlobals::shadowSpriteBorder
	Vector4_t4282066567  ___shadowSpriteBorder_2;
	// System.Single MaterialUI.MaterialGlobals::uiScale
	float ___uiScale_3;

public:
	inline static int32_t get_offset_of_shadowSpriteBorder_2() { return static_cast<int32_t>(offsetof(MaterialGlobals_t4066955055_StaticFields, ___shadowSpriteBorder_2)); }
	inline Vector4_t4282066567  get_shadowSpriteBorder_2() const { return ___shadowSpriteBorder_2; }
	inline Vector4_t4282066567 * get_address_of_shadowSpriteBorder_2() { return &___shadowSpriteBorder_2; }
	inline void set_shadowSpriteBorder_2(Vector4_t4282066567  value)
	{
		___shadowSpriteBorder_2 = value;
	}

	inline static int32_t get_offset_of_uiScale_3() { return static_cast<int32_t>(offsetof(MaterialGlobals_t4066955055_StaticFields, ___uiScale_3)); }
	inline float get_uiScale_3() const { return ___uiScale_3; }
	inline float* get_address_of_uiScale_3() { return &___uiScale_3; }
	inline void set_uiScale_3(float value)
	{
		___uiScale_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
