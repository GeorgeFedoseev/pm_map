#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t3171165001;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated4226823396.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2425104824.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnyAttribute
struct  XmlSchemaAnyAttribute_t2348706750  : public XmlSchemaAnnotated_t4226823396
{
public:
	// System.String System.Xml.Schema.XmlSchemaAnyAttribute::nameSpace
	String_t* ___nameSpace_16;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::processing
	int32_t ___processing_17;
	// Mono.Xml.Schema.XsdWildcard System.Xml.Schema.XmlSchemaAnyAttribute::wildcard
	XsdWildcard_t3171165001 * ___wildcard_18;

public:
	inline static int32_t get_offset_of_nameSpace_16() { return static_cast<int32_t>(offsetof(XmlSchemaAnyAttribute_t2348706750, ___nameSpace_16)); }
	inline String_t* get_nameSpace_16() const { return ___nameSpace_16; }
	inline String_t** get_address_of_nameSpace_16() { return &___nameSpace_16; }
	inline void set_nameSpace_16(String_t* value)
	{
		___nameSpace_16 = value;
		Il2CppCodeGenWriteBarrier(&___nameSpace_16, value);
	}

	inline static int32_t get_offset_of_processing_17() { return static_cast<int32_t>(offsetof(XmlSchemaAnyAttribute_t2348706750, ___processing_17)); }
	inline int32_t get_processing_17() const { return ___processing_17; }
	inline int32_t* get_address_of_processing_17() { return &___processing_17; }
	inline void set_processing_17(int32_t value)
	{
		___processing_17 = value;
	}

	inline static int32_t get_offset_of_wildcard_18() { return static_cast<int32_t>(offsetof(XmlSchemaAnyAttribute_t2348706750, ___wildcard_18)); }
	inline XsdWildcard_t3171165001 * get_wildcard_18() const { return ___wildcard_18; }
	inline XsdWildcard_t3171165001 ** get_address_of_wildcard_18() { return &___wildcard_18; }
	inline void set_wildcard_18(XsdWildcard_t3171165001 * value)
	{
		___wildcard_18 = value;
		Il2CppCodeGenWriteBarrier(&___wildcard_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
