#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CUDLR.CommandAttribute
struct CommandAttribute_t2471075151;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.QueuedCommand
struct  QueuedCommand_t2340564842 
{
public:
	// CUDLR.CommandAttribute CUDLR.QueuedCommand::command
	CommandAttribute_t2471075151 * ___command_0;
	// System.String[] CUDLR.QueuedCommand::args
	StringU5BU5D_t4054002952* ___args_1;

public:
	inline static int32_t get_offset_of_command_0() { return static_cast<int32_t>(offsetof(QueuedCommand_t2340564842, ___command_0)); }
	inline CommandAttribute_t2471075151 * get_command_0() const { return ___command_0; }
	inline CommandAttribute_t2471075151 ** get_address_of_command_0() { return &___command_0; }
	inline void set_command_0(CommandAttribute_t2471075151 * value)
	{
		___command_0 = value;
		Il2CppCodeGenWriteBarrier(&___command_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(QueuedCommand_t2340564842, ___args_1)); }
	inline StringU5BU5D_t4054002952* get_args_1() const { return ___args_1; }
	inline StringU5BU5D_t4054002952** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(StringU5BU5D_t4054002952* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CUDLR.QueuedCommand
struct QueuedCommand_t2340564842_marshaled_pinvoke
{
	CommandAttribute_t2471075151 * ___command_0;
	char** ___args_1;
};
// Native definition for marshalling of: CUDLR.QueuedCommand
struct QueuedCommand_t2340564842_marshaled_com
{
	CommandAttribute_t2471075151 * ___command_0;
	Il2CppChar** ___args_1;
};
