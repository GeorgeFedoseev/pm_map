#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "System_Xml_System_Xml_XPath_Expression2556460284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprVariable
struct  ExprVariable_t3764672565  : public Expression_t2556460284
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprVariable::_name
	XmlQualifiedName_t2133315502 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprVariable::resolvedName
	bool ___resolvedName_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprVariable_t3764672565, ____name_0)); }
	inline XmlQualifiedName_t2133315502 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2133315502 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2133315502 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprVariable_t3764672565, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
