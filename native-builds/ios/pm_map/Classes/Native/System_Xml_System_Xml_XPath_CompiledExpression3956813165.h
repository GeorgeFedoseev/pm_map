﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.XPathSorters
struct XPathSorters_t1807339567;
// System.String
struct String_t;

#include "System_Xml_System_Xml_XPath_XPathExpression3588072235.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.CompiledExpression
struct  CompiledExpression_t3956813165  : public XPathExpression_t3588072235
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::_nsm
	Il2CppObject * ____nsm_0;
	// System.Xml.XPath.Expression System.Xml.XPath.CompiledExpression::_expr
	Expression_t2556460284 * ____expr_1;
	// System.Xml.XPath.XPathSorters System.Xml.XPath.CompiledExpression::_sorters
	XPathSorters_t1807339567 * ____sorters_2;
	// System.String System.Xml.XPath.CompiledExpression::rawExpression
	String_t* ___rawExpression_3;

public:
	inline static int32_t get_offset_of__nsm_0() { return static_cast<int32_t>(offsetof(CompiledExpression_t3956813165, ____nsm_0)); }
	inline Il2CppObject * get__nsm_0() const { return ____nsm_0; }
	inline Il2CppObject ** get_address_of__nsm_0() { return &____nsm_0; }
	inline void set__nsm_0(Il2CppObject * value)
	{
		____nsm_0 = value;
		Il2CppCodeGenWriteBarrier(&____nsm_0, value);
	}

	inline static int32_t get_offset_of__expr_1() { return static_cast<int32_t>(offsetof(CompiledExpression_t3956813165, ____expr_1)); }
	inline Expression_t2556460284 * get__expr_1() const { return ____expr_1; }
	inline Expression_t2556460284 ** get_address_of__expr_1() { return &____expr_1; }
	inline void set__expr_1(Expression_t2556460284 * value)
	{
		____expr_1 = value;
		Il2CppCodeGenWriteBarrier(&____expr_1, value);
	}

	inline static int32_t get_offset_of__sorters_2() { return static_cast<int32_t>(offsetof(CompiledExpression_t3956813165, ____sorters_2)); }
	inline XPathSorters_t1807339567 * get__sorters_2() const { return ____sorters_2; }
	inline XPathSorters_t1807339567 ** get_address_of__sorters_2() { return &____sorters_2; }
	inline void set__sorters_2(XPathSorters_t1807339567 * value)
	{
		____sorters_2 = value;
		Il2CppCodeGenWriteBarrier(&____sorters_2, value);
	}

	inline static int32_t get_offset_of_rawExpression_3() { return static_cast<int32_t>(offsetof(CompiledExpression_t3956813165, ___rawExpression_3)); }
	inline String_t* get_rawExpression_3() const { return ___rawExpression_3; }
	inline String_t** get_address_of_rawExpression_3() { return &___rawExpression_3; }
	inline void set_rawExpression_3(String_t* value)
	{
		___rawExpression_3 = value;
		Il2CppCodeGenWriteBarrier(&___rawExpression_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
