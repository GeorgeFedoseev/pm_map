#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;
// TMPro.InlineGraphicManager
struct InlineGraphicManager_t3583857972;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic3186046376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.InlineGraphic
struct  InlineGraphic_t3606901041  : public MaskableGraphic_t3186046376
{
public:
	// UnityEngine.Texture TMPro.InlineGraphic::texture
	Texture_t2526458961 * ___texture_28;
	// TMPro.InlineGraphicManager TMPro.InlineGraphic::m_manager
	InlineGraphicManager_t3583857972 * ___m_manager_29;

public:
	inline static int32_t get_offset_of_texture_28() { return static_cast<int32_t>(offsetof(InlineGraphic_t3606901041, ___texture_28)); }
	inline Texture_t2526458961 * get_texture_28() const { return ___texture_28; }
	inline Texture_t2526458961 ** get_address_of_texture_28() { return &___texture_28; }
	inline void set_texture_28(Texture_t2526458961 * value)
	{
		___texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___texture_28, value);
	}

	inline static int32_t get_offset_of_m_manager_29() { return static_cast<int32_t>(offsetof(InlineGraphic_t3606901041, ___m_manager_29)); }
	inline InlineGraphicManager_t3583857972 * get_m_manager_29() const { return ___m_manager_29; }
	inline InlineGraphicManager_t3583857972 ** get_address_of_m_manager_29() { return &___m_manager_29; }
	inline void set_m_manager_29(InlineGraphicManager_t3583857972 * value)
	{
		___m_manager_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_manager_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
