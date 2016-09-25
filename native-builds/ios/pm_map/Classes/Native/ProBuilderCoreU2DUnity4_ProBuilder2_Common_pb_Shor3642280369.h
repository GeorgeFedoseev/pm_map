#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_EventModifiers4195406918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Shortcut
struct  pb_Shortcut_t3642280369  : public Il2CppObject
{
public:
	// System.String ProBuilder2.Common.pb_Shortcut::action
	String_t* ___action_0;
	// System.String ProBuilder2.Common.pb_Shortcut::description
	String_t* ___description_1;
	// UnityEngine.KeyCode ProBuilder2.Common.pb_Shortcut::key
	int32_t ___key_2;
	// UnityEngine.EventModifiers ProBuilder2.Common.pb_Shortcut::eventModifiers
	int32_t ___eventModifiers_3;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(pb_Shortcut_t3642280369, ___action_0)); }
	inline String_t* get_action_0() const { return ___action_0; }
	inline String_t** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(String_t* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(pb_Shortcut_t3642280369, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(pb_Shortcut_t3642280369, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_eventModifiers_3() { return static_cast<int32_t>(offsetof(pb_Shortcut_t3642280369, ___eventModifiers_3)); }
	inline int32_t get_eventModifiers_3() const { return ___eventModifiers_3; }
	inline int32_t* get_address_of_eventModifiers_3() { return &___eventModifiers_3; }
	inline void set_eventModifiers_3(int32_t value)
	{
		___eventModifiers_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
