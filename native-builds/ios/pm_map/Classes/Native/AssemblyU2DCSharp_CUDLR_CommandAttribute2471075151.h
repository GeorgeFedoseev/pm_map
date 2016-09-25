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
// CUDLR.CommandAttribute/Callback
struct Callback_t1792859565;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute
struct  CommandAttribute_t2471075151  : public Attribute_t2523058482
{
public:
	// System.String CUDLR.CommandAttribute::m_command
	String_t* ___m_command_0;
	// System.String CUDLR.CommandAttribute::m_help
	String_t* ___m_help_1;
	// System.Boolean CUDLR.CommandAttribute::m_runOnMainThread
	bool ___m_runOnMainThread_2;
	// CUDLR.CommandAttribute/Callback CUDLR.CommandAttribute::m_callback
	Callback_t1792859565 * ___m_callback_3;

public:
	inline static int32_t get_offset_of_m_command_0() { return static_cast<int32_t>(offsetof(CommandAttribute_t2471075151, ___m_command_0)); }
	inline String_t* get_m_command_0() const { return ___m_command_0; }
	inline String_t** get_address_of_m_command_0() { return &___m_command_0; }
	inline void set_m_command_0(String_t* value)
	{
		___m_command_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_command_0, value);
	}

	inline static int32_t get_offset_of_m_help_1() { return static_cast<int32_t>(offsetof(CommandAttribute_t2471075151, ___m_help_1)); }
	inline String_t* get_m_help_1() const { return ___m_help_1; }
	inline String_t** get_address_of_m_help_1() { return &___m_help_1; }
	inline void set_m_help_1(String_t* value)
	{
		___m_help_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_help_1, value);
	}

	inline static int32_t get_offset_of_m_runOnMainThread_2() { return static_cast<int32_t>(offsetof(CommandAttribute_t2471075151, ___m_runOnMainThread_2)); }
	inline bool get_m_runOnMainThread_2() const { return ___m_runOnMainThread_2; }
	inline bool* get_address_of_m_runOnMainThread_2() { return &___m_runOnMainThread_2; }
	inline void set_m_runOnMainThread_2(bool value)
	{
		___m_runOnMainThread_2 = value;
	}

	inline static int32_t get_offset_of_m_callback_3() { return static_cast<int32_t>(offsetof(CommandAttribute_t2471075151, ___m_callback_3)); }
	inline Callback_t1792859565 * get_m_callback_3() const { return ___m_callback_3; }
	inline Callback_t1792859565 ** get_address_of_m_callback_3() { return &___m_callback_3; }
	inline void set_m_callback_3(Callback_t1792859565 * value)
	{
		___m_callback_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_callback_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
