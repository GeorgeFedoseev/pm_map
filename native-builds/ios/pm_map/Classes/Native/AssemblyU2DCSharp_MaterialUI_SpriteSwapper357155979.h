#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.UI.Image
struct Image_t538875265;
// MaterialUI.MaterialUIScaler
struct MaterialUIScaler_t3014107375;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SpriteSwapper
struct  SpriteSwapper_t357155979  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite MaterialUI.SpriteSwapper::sprite1x
	Sprite_t3199167241 * ___sprite1x_2;
	// UnityEngine.Sprite MaterialUI.SpriteSwapper::sprite2x
	Sprite_t3199167241 * ___sprite2x_3;
	// UnityEngine.Sprite MaterialUI.SpriteSwapper::sprite4x
	Sprite_t3199167241 * ___sprite4x_4;
	// System.Single MaterialUI.SpriteSwapper::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.UI.Image MaterialUI.SpriteSwapper::thisImage
	Image_t538875265 * ___thisImage_6;
	// MaterialUI.MaterialUIScaler MaterialUI.SpriteSwapper::scaler
	MaterialUIScaler_t3014107375 * ___scaler_7;

public:
	inline static int32_t get_offset_of_sprite1x_2() { return static_cast<int32_t>(offsetof(SpriteSwapper_t357155979, ___sprite1x_2)); }
	inline Sprite_t3199167241 * get_sprite1x_2() const { return ___sprite1x_2; }
	inline Sprite_t3199167241 ** get_address_of_sprite1x_2() { return &___sprite1x_2; }
	inline void set_sprite1x_2(Sprite_t3199167241 * value)
	{
		___sprite1x_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite1x_2, value);
	}

	inline static int32_t get_offset_of_sprite2x_3() { return static_cast<int32_t>(offsetof(SpriteSwapper_t357155979, ___sprite2x_3)); }
	inline Sprite_t3199167241 * get_sprite2x_3() const { return ___sprite2x_3; }
	inline Sprite_t3199167241 ** get_address_of_sprite2x_3() { return &___sprite2x_3; }
	inline void set_sprite2x_3(Sprite_t3199167241 * value)
	{
		___sprite2x_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite2x_3, value);
	}

	inline static int32_t get_offset_of_sprite4x_4() { return static_cast<int32_t>(offsetof(SpriteSwapper_t357155979, ___sprite4x_4)); }
	inline Sprite_t3199167241 * get_sprite4x_4() const { return ___sprite4x_4; }
	inline Sprite_t3199167241 ** get_address_of_sprite4x_4() { return &___sprite4x_4; }
	inline void set_sprite4x_4(Sprite_t3199167241 * value)
	{
		___sprite4x_4 = value;
		Il2CppCodeGenWriteBarrier(&___sprite4x_4, value);
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(SpriteSwapper_t357155979, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_thisImage_6() { return static_cast<int32_t>(offsetof(SpriteSwapper_t357155979, ___thisImage_6)); }
	inline Image_t538875265 * get_thisImage_6() const { return ___thisImage_6; }
	inline Image_t538875265 ** get_address_of_thisImage_6() { return &___thisImage_6; }
	inline void set_thisImage_6(Image_t538875265 * value)
	{
		___thisImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_6, value);
	}

	inline static int32_t get_offset_of_scaler_7() { return static_cast<int32_t>(offsetof(SpriteSwapper_t357155979, ___scaler_7)); }
	inline MaterialUIScaler_t3014107375 * get_scaler_7() const { return ___scaler_7; }
	inline MaterialUIScaler_t3014107375 ** get_address_of_scaler_7() { return &___scaler_7; }
	inline void set_scaler_7(MaterialUIScaler_t3014107375 * value)
	{
		___scaler_7 = value;
		Il2CppCodeGenWriteBarrier(&___scaler_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
