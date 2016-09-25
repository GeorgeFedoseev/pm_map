#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2348706750;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "System_Xml_System_Xml_Schema_XmlSchemaContent1984162949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct  XmlSchemaSimpleContentExtension_t3054769670  : public XmlSchemaContent_t1984162949
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::any
	XmlSchemaAnyAttribute_t2348706750 * ___any_17;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::attributes
	XmlSchemaObjectCollection_t3489199211 * ___attributes_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::baseTypeName
	XmlQualifiedName_t2133315502 * ___baseTypeName_19;

public:
	inline static int32_t get_offset_of_any_17() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t3054769670, ___any_17)); }
	inline XmlSchemaAnyAttribute_t2348706750 * get_any_17() const { return ___any_17; }
	inline XmlSchemaAnyAttribute_t2348706750 ** get_address_of_any_17() { return &___any_17; }
	inline void set_any_17(XmlSchemaAnyAttribute_t2348706750 * value)
	{
		___any_17 = value;
		Il2CppCodeGenWriteBarrier(&___any_17, value);
	}

	inline static int32_t get_offset_of_attributes_18() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t3054769670, ___attributes_18)); }
	inline XmlSchemaObjectCollection_t3489199211 * get_attributes_18() const { return ___attributes_18; }
	inline XmlSchemaObjectCollection_t3489199211 ** get_address_of_attributes_18() { return &___attributes_18; }
	inline void set_attributes_18(XmlSchemaObjectCollection_t3489199211 * value)
	{
		___attributes_18 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_18, value);
	}

	inline static int32_t get_offset_of_baseTypeName_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t3054769670, ___baseTypeName_19)); }
	inline XmlQualifiedName_t2133315502 * get_baseTypeName_19() const { return ___baseTypeName_19; }
	inline XmlQualifiedName_t2133315502 ** get_address_of_baseTypeName_19() { return &___baseTypeName_19; }
	inline void set_baseTypeName_19(XmlQualifiedName_t2133315502 * value)
	{
		___baseTypeName_19 = value;
		Il2CppCodeGenWriteBarrier(&___baseTypeName_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
