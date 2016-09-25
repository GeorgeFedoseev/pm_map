#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ToggleConfig
struct  ToggleConfig_t1746114530  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Slider MaterialUI.ToggleConfig::theSlider
	Slider_t79469677 * ___theSlider_2;
	// UnityEngine.UI.Toggle MaterialUI.ToggleConfig::theToggle
	Toggle_t110812896 * ___theToggle_3;

public:
	inline static int32_t get_offset_of_theSlider_2() { return static_cast<int32_t>(offsetof(ToggleConfig_t1746114530, ___theSlider_2)); }
	inline Slider_t79469677 * get_theSlider_2() const { return ___theSlider_2; }
	inline Slider_t79469677 ** get_address_of_theSlider_2() { return &___theSlider_2; }
	inline void set_theSlider_2(Slider_t79469677 * value)
	{
		___theSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___theSlider_2, value);
	}

	inline static int32_t get_offset_of_theToggle_3() { return static_cast<int32_t>(offsetof(ToggleConfig_t1746114530, ___theToggle_3)); }
	inline Toggle_t110812896 * get_theToggle_3() const { return ___theToggle_3; }
	inline Toggle_t110812896 ** get_address_of_theToggle_3() { return &___theToggle_3; }
	inline void set_theToggle_3(Toggle_t110812896 * value)
	{
		___theToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___theToggle_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
