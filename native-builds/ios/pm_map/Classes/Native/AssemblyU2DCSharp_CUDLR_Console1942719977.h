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
// CUDLR.Console
struct Console_t1942719977;
// CUDLR.CommandTree
struct CommandTree_t1692351771;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>
struct Queue_1_t281839975;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Console
struct  Console_t1942719977  : public Il2CppObject
{
public:
	// CUDLR.CommandTree CUDLR.Console::m_commands
	CommandTree_t1692351771 * ___m_commands_4;
	// System.Collections.Generic.List`1<System.String> CUDLR.Console::m_output
	List_1_t1375417109 * ___m_output_5;
	// System.Collections.Generic.List`1<System.String> CUDLR.Console::m_history
	List_1_t1375417109 * ___m_history_6;
	// System.String CUDLR.Console::m_help
	String_t* ___m_help_7;
	// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand> CUDLR.Console::m_commandQueue
	Queue_1_t281839975 * ___m_commandQueue_8;

public:
	inline static int32_t get_offset_of_m_commands_4() { return static_cast<int32_t>(offsetof(Console_t1942719977, ___m_commands_4)); }
	inline CommandTree_t1692351771 * get_m_commands_4() const { return ___m_commands_4; }
	inline CommandTree_t1692351771 ** get_address_of_m_commands_4() { return &___m_commands_4; }
	inline void set_m_commands_4(CommandTree_t1692351771 * value)
	{
		___m_commands_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_commands_4, value);
	}

	inline static int32_t get_offset_of_m_output_5() { return static_cast<int32_t>(offsetof(Console_t1942719977, ___m_output_5)); }
	inline List_1_t1375417109 * get_m_output_5() const { return ___m_output_5; }
	inline List_1_t1375417109 ** get_address_of_m_output_5() { return &___m_output_5; }
	inline void set_m_output_5(List_1_t1375417109 * value)
	{
		___m_output_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_output_5, value);
	}

	inline static int32_t get_offset_of_m_history_6() { return static_cast<int32_t>(offsetof(Console_t1942719977, ___m_history_6)); }
	inline List_1_t1375417109 * get_m_history_6() const { return ___m_history_6; }
	inline List_1_t1375417109 ** get_address_of_m_history_6() { return &___m_history_6; }
	inline void set_m_history_6(List_1_t1375417109 * value)
	{
		___m_history_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_history_6, value);
	}

	inline static int32_t get_offset_of_m_help_7() { return static_cast<int32_t>(offsetof(Console_t1942719977, ___m_help_7)); }
	inline String_t* get_m_help_7() const { return ___m_help_7; }
	inline String_t** get_address_of_m_help_7() { return &___m_help_7; }
	inline void set_m_help_7(String_t* value)
	{
		___m_help_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_help_7, value);
	}

	inline static int32_t get_offset_of_m_commandQueue_8() { return static_cast<int32_t>(offsetof(Console_t1942719977, ___m_commandQueue_8)); }
	inline Queue_1_t281839975 * get_m_commandQueue_8() const { return ___m_commandQueue_8; }
	inline Queue_1_t281839975 ** get_address_of_m_commandQueue_8() { return &___m_commandQueue_8; }
	inline void set_m_commandQueue_8(Queue_1_t281839975 * value)
	{
		___m_commandQueue_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_commandQueue_8, value);
	}
};

struct Console_t1942719977_StaticFields
{
public:
	// CUDLR.Console CUDLR.Console::instance
	Console_t1942719977 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(Console_t1942719977_StaticFields, ___instance_3)); }
	inline Console_t1942719977 * get_instance_3() const { return ___instance_3; }
	inline Console_t1942719977 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(Console_t1942719977 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
