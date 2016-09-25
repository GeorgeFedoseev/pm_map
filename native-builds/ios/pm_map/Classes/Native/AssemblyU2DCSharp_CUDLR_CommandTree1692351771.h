#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>
struct Dictionary_2_t2512770141;
// CUDLR.CommandAttribute
struct CommandAttribute_t2471075151;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandTree
struct  CommandTree_t1692351771  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree> CUDLR.CommandTree::m_subcommands
	Dictionary_2_t2512770141 * ___m_subcommands_0;
	// CUDLR.CommandAttribute CUDLR.CommandTree::m_command
	CommandAttribute_t2471075151 * ___m_command_1;

public:
	inline static int32_t get_offset_of_m_subcommands_0() { return static_cast<int32_t>(offsetof(CommandTree_t1692351771, ___m_subcommands_0)); }
	inline Dictionary_2_t2512770141 * get_m_subcommands_0() const { return ___m_subcommands_0; }
	inline Dictionary_2_t2512770141 ** get_address_of_m_subcommands_0() { return &___m_subcommands_0; }
	inline void set_m_subcommands_0(Dictionary_2_t2512770141 * value)
	{
		___m_subcommands_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_subcommands_0, value);
	}

	inline static int32_t get_offset_of_m_command_1() { return static_cast<int32_t>(offsetof(CommandTree_t1692351771, ___m_command_1)); }
	inline CommandAttribute_t2471075151 * get_m_command_1() const { return ___m_command_1; }
	inline CommandAttribute_t2471075151 ** get_address_of_m_command_1() { return &___m_command_1; }
	inline void set_m_command_1(CommandAttribute_t2471075151 * value)
	{
		___m_command_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_command_1, value);
	}
};

struct CommandTree_t1692351771_StaticFields
{
public:
	// System.String[] CUDLR.CommandTree::emptyArgs
	StringU5BU5D_t4054002952* ___emptyArgs_2;

public:
	inline static int32_t get_offset_of_emptyArgs_2() { return static_cast<int32_t>(offsetof(CommandTree_t1692351771_StaticFields, ___emptyArgs_2)); }
	inline StringU5BU5D_t4054002952* get_emptyArgs_2() const { return ___emptyArgs_2; }
	inline StringU5BU5D_t4054002952** get_address_of_emptyArgs_2() { return &___emptyArgs_2; }
	inline void set_emptyArgs_2(StringU5BU5D_t4054002952* value)
	{
		___emptyArgs_2 = value;
		Il2CppCodeGenWriteBarrier(&___emptyArgs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
