#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.CheckBoxToggler
struct  CheckBoxToggler_t4178758561  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Toggle MaterialUI.CheckBoxToggler::theToggle
	Toggle_t110812896 * ___theToggle_2;

public:
	inline static int32_t get_offset_of_theToggle_2() { return static_cast<int32_t>(offsetof(CheckBoxToggler_t4178758561, ___theToggle_2)); }
	inline Toggle_t110812896 * get_theToggle_2() const { return ___theToggle_2; }
	inline Toggle_t110812896 ** get_address_of_theToggle_2() { return &___theToggle_2; }
	inline void set_theToggle_2(Toggle_t110812896 * value)
	{
		___theToggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___theToggle_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
