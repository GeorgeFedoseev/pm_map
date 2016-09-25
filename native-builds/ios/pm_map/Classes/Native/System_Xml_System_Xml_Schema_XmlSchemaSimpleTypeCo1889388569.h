#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3060492794;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated4226823396.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct  XmlSchemaSimpleTypeContent_t1889388569  : public XmlSchemaAnnotated_t4226823396
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeContent::OwnerType
	XmlSchemaSimpleType_t3060492794 * ___OwnerType_16;

public:
	inline static int32_t get_offset_of_OwnerType_16() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeContent_t1889388569, ___OwnerType_16)); }
	inline XmlSchemaSimpleType_t3060492794 * get_OwnerType_16() const { return ___OwnerType_16; }
	inline XmlSchemaSimpleType_t3060492794 ** get_address_of_OwnerType_16() { return &___OwnerType_16; }
	inline void set_OwnerType_16(XmlSchemaSimpleType_t3060492794 * value)
	{
		___OwnerType_16 = value;
		Il2CppCodeGenWriteBarrier(&___OwnerType_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
