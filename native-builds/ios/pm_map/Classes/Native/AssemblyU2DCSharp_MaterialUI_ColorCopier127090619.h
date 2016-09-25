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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ColorCopier
struct  ColorCopier_t127090619  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image MaterialUI.ColorCopier::sourceImage
	Image_t538875265 * ___sourceImage_2;
	// UnityEngine.UI.Text MaterialUI.ColorCopier::sourceText
	Text_t9039225 * ___sourceText_3;
	// UnityEngine.UI.Image MaterialUI.ColorCopier::thisImage
	Image_t538875265 * ___thisImage_4;
	// UnityEngine.UI.Text MaterialUI.ColorCopier::thisText
	Text_t9039225 * ___thisText_5;
	// UnityEngine.Color MaterialUI.ColorCopier::lastColor
	Color_t4194546905  ___lastColor_6;

public:
	inline static int32_t get_offset_of_sourceImage_2() { return static_cast<int32_t>(offsetof(ColorCopier_t127090619, ___sourceImage_2)); }
	inline Image_t538875265 * get_sourceImage_2() const { return ___sourceImage_2; }
	inline Image_t538875265 ** get_address_of_sourceImage_2() { return &___sourceImage_2; }
	inline void set_sourceImage_2(Image_t538875265 * value)
	{
		___sourceImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___sourceImage_2, value);
	}

	inline static int32_t get_offset_of_sourceText_3() { return static_cast<int32_t>(offsetof(ColorCopier_t127090619, ___sourceText_3)); }
	inline Text_t9039225 * get_sourceText_3() const { return ___sourceText_3; }
	inline Text_t9039225 ** get_address_of_sourceText_3() { return &___sourceText_3; }
	inline void set_sourceText_3(Text_t9039225 * value)
	{
		___sourceText_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceText_3, value);
	}

	inline static int32_t get_offset_of_thisImage_4() { return static_cast<int32_t>(offsetof(ColorCopier_t127090619, ___thisImage_4)); }
	inline Image_t538875265 * get_thisImage_4() const { return ___thisImage_4; }
	inline Image_t538875265 ** get_address_of_thisImage_4() { return &___thisImage_4; }
	inline void set_thisImage_4(Image_t538875265 * value)
	{
		___thisImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_4, value);
	}

	inline static int32_t get_offset_of_thisText_5() { return static_cast<int32_t>(offsetof(ColorCopier_t127090619, ___thisText_5)); }
	inline Text_t9039225 * get_thisText_5() const { return ___thisText_5; }
	inline Text_t9039225 ** get_address_of_thisText_5() { return &___thisText_5; }
	inline void set_thisText_5(Text_t9039225 * value)
	{
		___thisText_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisText_5, value);
	}

	inline static int32_t get_offset_of_lastColor_6() { return static_cast<int32_t>(offsetof(ColorCopier_t127090619, ___lastColor_6)); }
	inline Color_t4194546905  get_lastColor_6() const { return ___lastColor_6; }
	inline Color_t4194546905 * get_address_of_lastColor_6() { return &___lastColor_6; }
	inline void set_lastColor_6(Color_t4194546905  value)
	{
		___lastColor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
