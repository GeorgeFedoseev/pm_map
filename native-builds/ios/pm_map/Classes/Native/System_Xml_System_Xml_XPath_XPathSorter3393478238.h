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
// System.Collections.IComparer
struct IComparer_t4034294160;

#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XPath_XmlDataType545259441.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter
struct  XPathSorter_t3393478238  : public Il2CppObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::_expr
	Expression_t2556460284 * ____expr_0;
	// System.Collections.IComparer System.Xml.XPath.XPathSorter::_cmp
	Il2CppObject * ____cmp_1;
	// System.Xml.XPath.XmlDataType System.Xml.XPath.XPathSorter::_type
	int32_t ____type_2;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(XPathSorter_t3393478238, ____expr_0)); }
	inline Expression_t2556460284 * get__expr_0() const { return ____expr_0; }
	inline Expression_t2556460284 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t2556460284 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier(&____expr_0, value);
	}

	inline static int32_t get_offset_of__cmp_1() { return static_cast<int32_t>(offsetof(XPathSorter_t3393478238, ____cmp_1)); }
	inline Il2CppObject * get__cmp_1() const { return ____cmp_1; }
	inline Il2CppObject ** get_address_of__cmp_1() { return &____cmp_1; }
	inline void set__cmp_1(Il2CppObject * value)
	{
		____cmp_1 = value;
		Il2CppCodeGenWriteBarrier(&____cmp_1, value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(XPathSorter_t3393478238, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
