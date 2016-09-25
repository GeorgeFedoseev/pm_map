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
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<TMPro.SpriteInfo>
struct List_1_t2667256569;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t272385497;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.SpriteAsset
struct  SpriteAsset_t3304235981  : public ScriptableObject_t2970544072
{
public:
	// UnityEngine.Texture TMPro.SpriteAsset::spriteSheet
	Texture_t2526458961 * ___spriteSheet_2;
	// UnityEngine.Material TMPro.SpriteAsset::material
	Material_t3870600107 * ___material_3;
	// System.Collections.Generic.List`1<TMPro.SpriteInfo> TMPro.SpriteAsset::spriteInfoList
	List_1_t2667256569 * ___spriteInfoList_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> TMPro.SpriteAsset::m_sprites
	List_1_t272385497 * ___m_sprites_5;

public:
	inline static int32_t get_offset_of_spriteSheet_2() { return static_cast<int32_t>(offsetof(SpriteAsset_t3304235981, ___spriteSheet_2)); }
	inline Texture_t2526458961 * get_spriteSheet_2() const { return ___spriteSheet_2; }
	inline Texture_t2526458961 ** get_address_of_spriteSheet_2() { return &___spriteSheet_2; }
	inline void set_spriteSheet_2(Texture_t2526458961 * value)
	{
		___spriteSheet_2 = value;
		Il2CppCodeGenWriteBarrier(&___spriteSheet_2, value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(SpriteAsset_t3304235981, ___material_3)); }
	inline Material_t3870600107 * get_material_3() const { return ___material_3; }
	inline Material_t3870600107 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t3870600107 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_spriteInfoList_4() { return static_cast<int32_t>(offsetof(SpriteAsset_t3304235981, ___spriteInfoList_4)); }
	inline List_1_t2667256569 * get_spriteInfoList_4() const { return ___spriteInfoList_4; }
	inline List_1_t2667256569 ** get_address_of_spriteInfoList_4() { return &___spriteInfoList_4; }
	inline void set_spriteInfoList_4(List_1_t2667256569 * value)
	{
		___spriteInfoList_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriteInfoList_4, value);
	}

	inline static int32_t get_offset_of_m_sprites_5() { return static_cast<int32_t>(offsetof(SpriteAsset_t3304235981, ___m_sprites_5)); }
	inline List_1_t272385497 * get_m_sprites_5() const { return ___m_sprites_5; }
	inline List_1_t272385497 ** get_address_of_m_sprites_5() { return &___m_sprites_5; }
	inline void set_m_sprites_5(List_1_t272385497 * value)
	{
		___m_sprites_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_sprites_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
