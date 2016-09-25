#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageBlinkScript
struct  ImageBlinkScript_t3190153996  : public MonoBehaviour_t667441552
{
public:
	// System.Single ImageBlinkScript::time
	float ___time_2;
	// UnityEngine.Color ImageBlinkScript::color
	Color_t4194546905  ___color_3;
	// UnityEngine.UI.Image ImageBlinkScript::image
	Image_t538875265 * ___image_4;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(ImageBlinkScript_t3190153996, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(ImageBlinkScript_t3190153996, ___color_3)); }
	inline Color_t4194546905  get_color_3() const { return ___color_3; }
	inline Color_t4194546905 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t4194546905  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(ImageBlinkScript_t3190153996, ___image_4)); }
	inline Image_t538875265 * get_image_4() const { return ___image_4; }
	inline Image_t538875265 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_t538875265 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier(&___image_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
