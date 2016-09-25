#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t4049803818;
// System.String
struct String_t;

#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAppInfo
struct  XmlSchemaAppInfo_t238359163  : public XmlSchemaObject_t3280570797
{
public:
	// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::markup
	XmlNodeU5BU5D_t4049803818* ___markup_13;
	// System.String System.Xml.Schema.XmlSchemaAppInfo::source
	String_t* ___source_14;

public:
	inline static int32_t get_offset_of_markup_13() { return static_cast<int32_t>(offsetof(XmlSchemaAppInfo_t238359163, ___markup_13)); }
	inline XmlNodeU5BU5D_t4049803818* get_markup_13() const { return ___markup_13; }
	inline XmlNodeU5BU5D_t4049803818** get_address_of_markup_13() { return &___markup_13; }
	inline void set_markup_13(XmlNodeU5BU5D_t4049803818* value)
	{
		___markup_13 = value;
		Il2CppCodeGenWriteBarrier(&___markup_13, value);
	}

	inline static int32_t get_offset_of_source_14() { return static_cast<int32_t>(offsetof(XmlSchemaAppInfo_t238359163, ___source_14)); }
	inline String_t* get_source_14() const { return ___source_14; }
	inline String_t** get_address_of_source_14() { return &___source_14; }
	inline void set_source_14(String_t* value)
	{
		___source_14 = value;
		Il2CppCodeGenWriteBarrier(&___source_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
