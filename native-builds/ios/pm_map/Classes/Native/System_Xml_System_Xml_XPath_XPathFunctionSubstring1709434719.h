#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.Expression
struct Expression_t2556460284;

#include "System_Xml_System_Xml_XPath_XPathFunction3895226859.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstringBefore
struct  XPathFunctionSubstringBefore_t1709434719  : public XPathFunction_t3895226859
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringBefore::arg0
	Expression_t2556460284 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringBefore::arg1
	Expression_t2556460284 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringBefore_t1709434719, ___arg0_0)); }
	inline Expression_t2556460284 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t2556460284 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t2556460284 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier(&___arg0_0, value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringBefore_t1709434719, ___arg1_1)); }
	inline Expression_t2556460284 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t2556460284 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t2556460284 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier(&___arg1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
