﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.StringReader
struct StringReader_t4061477668;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fabric.Internal.ThirdParty.MiniJSON.Json/Parser
struct  Parser_t4250788414  : public Il2CppObject
{
public:
	// System.IO.StringReader Fabric.Internal.ThirdParty.MiniJSON.Json/Parser::json
	StringReader_t4061477668 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t4250788414, ___json_1)); }
	inline StringReader_t4061477668 * get_json_1() const { return ___json_1; }
	inline StringReader_t4061477668 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t4061477668 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier(&___json_1, value);
	}
};

struct Parser_t4250788414_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Fabric.Internal.ThirdParty.MiniJSON.Json/Parser::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_2() { return static_cast<int32_t>(offsetof(Parser_t4250788414_StaticFields, ___U3CU3Ef__switchU24map0_2)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_2() const { return ___U3CU3Ef__switchU24map0_2; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_2() { return &___U3CU3Ef__switchU24map0_2; }
	inline void set_U3CU3Ef__switchU24map0_2(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
