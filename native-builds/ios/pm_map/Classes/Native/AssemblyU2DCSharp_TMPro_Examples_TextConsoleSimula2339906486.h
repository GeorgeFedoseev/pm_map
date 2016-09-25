#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t3071478659;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TMPro_Examples_TextConsoleSimula2002743843.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextConsoleSimulator
struct  TextConsoleSimulator_t2339906486  : public MonoBehaviour_t667441552
{
public:
	// TMPro.Examples.TextConsoleSimulator/objectType TMPro.Examples.TextConsoleSimulator::m_textObjectType
	int32_t ___m_textObjectType_2;
	// UnityEngine.Object TMPro.Examples.TextConsoleSimulator::m_TextComponent
	Object_t3071478659 * ___m_TextComponent_3;

public:
	inline static int32_t get_offset_of_m_textObjectType_2() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t2339906486, ___m_textObjectType_2)); }
	inline int32_t get_m_textObjectType_2() const { return ___m_textObjectType_2; }
	inline int32_t* get_address_of_m_textObjectType_2() { return &___m_textObjectType_2; }
	inline void set_m_textObjectType_2(int32_t value)
	{
		___m_textObjectType_2 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_3() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t2339906486, ___m_TextComponent_3)); }
	inline Object_t3071478659 * get_m_TextComponent_3() const { return ___m_TextComponent_3; }
	inline Object_t3071478659 ** get_address_of_m_TextComponent_3() { return &___m_TextComponent_3; }
	inline void set_m_TextComponent_3(Object_t3071478659 * value)
	{
		___m_TextComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
