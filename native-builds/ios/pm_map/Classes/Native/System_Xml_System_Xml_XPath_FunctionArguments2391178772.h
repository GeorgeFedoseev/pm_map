﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2391178772;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FunctionArguments
struct  FunctionArguments_t2391178772  : public Il2CppObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::_arg
	Expression_t2556460284 * ____arg_0;
	// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::_tail
	FunctionArguments_t2391178772 * ____tail_1;

public:
	inline static int32_t get_offset_of__arg_0() { return static_cast<int32_t>(offsetof(FunctionArguments_t2391178772, ____arg_0)); }
	inline Expression_t2556460284 * get__arg_0() const { return ____arg_0; }
	inline Expression_t2556460284 ** get_address_of__arg_0() { return &____arg_0; }
	inline void set__arg_0(Expression_t2556460284 * value)
	{
		____arg_0 = value;
		Il2CppCodeGenWriteBarrier(&____arg_0, value);
	}

	inline static int32_t get_offset_of__tail_1() { return static_cast<int32_t>(offsetof(FunctionArguments_t2391178772, ____tail_1)); }
	inline FunctionArguments_t2391178772 * get__tail_1() const { return ____tail_1; }
	inline FunctionArguments_t2391178772 ** get_address_of__tail_1() { return &____tail_1; }
	inline void set__tail_1(FunctionArguments_t2391178772 * value)
	{
		____tail_1 = value;
		Il2CppCodeGenWriteBarrier(&____tail_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
