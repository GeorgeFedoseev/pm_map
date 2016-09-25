#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3324145743;

#include "System_Xml_System_Xml_XPath_XPathItem3597956134.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator
struct  XPathNavigator_t1075073278  : public XPathItem_t3597956134
{
public:

public:
};

struct XPathNavigator_t1075073278_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_text_chars
	CharU5BU5D_t3324145743* ___escape_text_chars_0;
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_attr_chars
	CharU5BU5D_t3324145743* ___escape_attr_chars_1;

public:
	inline static int32_t get_offset_of_escape_text_chars_0() { return static_cast<int32_t>(offsetof(XPathNavigator_t1075073278_StaticFields, ___escape_text_chars_0)); }
	inline CharU5BU5D_t3324145743* get_escape_text_chars_0() const { return ___escape_text_chars_0; }
	inline CharU5BU5D_t3324145743** get_address_of_escape_text_chars_0() { return &___escape_text_chars_0; }
	inline void set_escape_text_chars_0(CharU5BU5D_t3324145743* value)
	{
		___escape_text_chars_0 = value;
		Il2CppCodeGenWriteBarrier(&___escape_text_chars_0, value);
	}

	inline static int32_t get_offset_of_escape_attr_chars_1() { return static_cast<int32_t>(offsetof(XPathNavigator_t1075073278_StaticFields, ___escape_attr_chars_1)); }
	inline CharU5BU5D_t3324145743* get_escape_attr_chars_1() const { return ___escape_attr_chars_1; }
	inline CharU5BU5D_t3324145743** get_address_of_escape_attr_chars_1() { return &___escape_attr_chars_1; }
	inline void set_escape_attr_chars_1(CharU5BU5D_t3324145743* value)
	{
		___escape_attr_chars_1 = value;
		Il2CppCodeGenWriteBarrier(&___escape_attr_chars_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
