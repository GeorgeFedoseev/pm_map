﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "System_Xml_System_Xml_XPath_Expression2556460284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFunctionCall
struct  ExprFunctionCall_t3990388239  : public Expression_t2556460284
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprFunctionCall::_name
	XmlQualifiedName_t2133315502 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprFunctionCall::resolvedName
	bool ___resolvedName_1;
	// System.Collections.ArrayList System.Xml.XPath.ExprFunctionCall::_args
	ArrayList_t3948406897 * ____args_2;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t3990388239, ____name_0)); }
	inline XmlQualifiedName_t2133315502 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2133315502 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2133315502 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t3990388239, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}

	inline static int32_t get_offset_of__args_2() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t3990388239, ____args_2)); }
	inline ArrayList_t3948406897 * get__args_2() const { return ____args_2; }
	inline ArrayList_t3948406897 ** get_address_of__args_2() { return &____args_2; }
	inline void set__args_2(ArrayList_t3948406897 * value)
	{
		____args_2 = value;
		Il2CppCodeGenWriteBarrier(&____args_2, value);
	}
};

struct ExprFunctionCall_t3990388239_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XPath.ExprFunctionCall::<>f__switch$map3C
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map3C_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3C_3() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t3990388239_StaticFields, ___U3CU3Ef__switchU24map3C_3)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map3C_3() const { return ___U3CU3Ef__switchU24map3C_3; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map3C_3() { return &___U3CU3Ef__switchU24map3C_3; }
	inline void set_U3CU3Ef__switchU24map3C_3(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map3C_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3C_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
