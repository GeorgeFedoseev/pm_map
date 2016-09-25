#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.ShaderPropAnimator
struct  ShaderPropAnimator_t4036634283  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Renderer TMPro.Examples.ShaderPropAnimator::m_Renderer
	Renderer_t3076687687 * ___m_Renderer_2;
	// UnityEngine.Material TMPro.Examples.ShaderPropAnimator::m_Material
	Material_t3870600107 * ___m_Material_3;
	// UnityEngine.AnimationCurve TMPro.Examples.ShaderPropAnimator::GlowCurve
	AnimationCurve_t3667593487 * ___GlowCurve_4;
	// System.Single TMPro.Examples.ShaderPropAnimator::m_frame
	float ___m_frame_5;

public:
	inline static int32_t get_offset_of_m_Renderer_2() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t4036634283, ___m_Renderer_2)); }
	inline Renderer_t3076687687 * get_m_Renderer_2() const { return ___m_Renderer_2; }
	inline Renderer_t3076687687 ** get_address_of_m_Renderer_2() { return &___m_Renderer_2; }
	inline void set_m_Renderer_2(Renderer_t3076687687 * value)
	{
		___m_Renderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_2, value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t4036634283, ___m_Material_3)); }
	inline Material_t3870600107 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t3870600107 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t3870600107 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_3, value);
	}

	inline static int32_t get_offset_of_GlowCurve_4() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t4036634283, ___GlowCurve_4)); }
	inline AnimationCurve_t3667593487 * get_GlowCurve_4() const { return ___GlowCurve_4; }
	inline AnimationCurve_t3667593487 ** get_address_of_GlowCurve_4() { return &___GlowCurve_4; }
	inline void set_GlowCurve_4(AnimationCurve_t3667593487 * value)
	{
		___GlowCurve_4 = value;
		Il2CppCodeGenWriteBarrier(&___GlowCurve_4, value);
	}

	inline static int32_t get_offset_of_m_frame_5() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t4036634283, ___m_frame_5)); }
	inline float get_m_frame_5() const { return ___m_frame_5; }
	inline float* get_address_of_m_frame_5() { return &___m_frame_5; }
	inline void set_m_frame_5(float value)
	{
		___m_frame_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
