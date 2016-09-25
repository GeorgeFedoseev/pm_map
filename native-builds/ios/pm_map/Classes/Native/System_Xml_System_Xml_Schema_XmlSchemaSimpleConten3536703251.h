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
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3060492794;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "System_Xml_System_Xml_Schema_XmlSchemaContent1984162949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleContentRestriction
struct  XmlSchemaSimpleContentRestriction_t3536703251  : public XmlSchemaContent_t1984162949
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentRestriction::any
	XmlSchemaAnyAttribute_t2348706750 * ___any_17;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentRestriction::attributes
	XmlSchemaObjectCollection_t3489199211 * ___attributes_18;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleContentRestriction::baseType
	XmlSchemaSimpleType_t3060492794 * ___baseType_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentRestriction::baseTypeName
	XmlQualifiedName_t2133315502 * ___baseTypeName_20;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentRestriction::facets
	XmlSchemaObjectCollection_t3489199211 * ___facets_21;

public:
	inline static int32_t get_offset_of_any_17() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentRestriction_t3536703251, ___any_17)); }
	inline XmlSchemaAnyAttribute_t2348706750 * get_any_17() const { return ___any_17; }
	inline XmlSchemaAnyAttribute_t2348706750 ** get_address_of_any_17() { return &___any_17; }
	inline void set_any_17(XmlSchemaAnyAttribute_t2348706750 * value)
	{
		___any_17 = value;
		Il2CppCodeGenWriteBarrier(&___any_17, value);
	}

	inline static int32_t get_offset_of_attributes_18() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentRestriction_t3536703251, ___attributes_18)); }
	inline XmlSchemaObjectCollection_t3489199211 * get_attributes_18() const { return ___attributes_18; }
	inline XmlSchemaObjectCollection_t3489199211 ** get_address_of_attributes_18() { return &___attributes_18; }
	inline void set_attributes_18(XmlSchemaObjectCollection_t3489199211 * value)
	{
		___attributes_18 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_18, value);
	}

	inline static int32_t get_offset_of_baseType_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentRestriction_t3536703251, ___baseType_19)); }
	inline XmlSchemaSimpleType_t3060492794 * get_baseType_19() const { return ___baseType_19; }
	inline XmlSchemaSimpleType_t3060492794 ** get_address_of_baseType_19() { return &___baseType_19; }
	inline void set_baseType_19(XmlSchemaSimpleType_t3060492794 * value)
	{
		___baseType_19 = value;
		Il2CppCodeGenWriteBarrier(&___baseType_19, value);
	}

	inline static int32_t get_offset_of_baseTypeName_20() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentRestriction_t3536703251, ___baseTypeName_20)); }
	inline XmlQualifiedName_t2133315502 * get_baseTypeName_20() const { return ___baseTypeName_20; }
	inline XmlQualifiedName_t2133315502 ** get_address_of_baseTypeName_20() { return &___baseTypeName_20; }
	inline void set_baseTypeName_20(XmlQualifiedName_t2133315502 * value)
	{
		___baseTypeName_20 = value;
		Il2CppCodeGenWriteBarrier(&___baseTypeName_20, value);
	}

	inline static int32_t get_offset_of_facets_21() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentRestriction_t3536703251, ___facets_21)); }
	inline XmlSchemaObjectCollection_t3489199211 * get_facets_21() const { return ___facets_21; }
	inline XmlSchemaObjectCollection_t3489199211 ** get_address_of_facets_21() { return &___facets_21; }
	inline void set_facets_21(XmlSchemaObjectCollection_t3489199211 * value)
	{
		___facets_21 = value;
		Il2CppCodeGenWriteBarrier(&___facets_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
