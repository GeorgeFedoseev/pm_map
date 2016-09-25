#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t4125456760;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState2934101963.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdAnyValidationState
struct  XsdAnyValidationState_t4008767483  : public XsdValidationState_t2934101963
{
public:
	// System.Xml.Schema.XmlSchemaAny Mono.Xml.Schema.XsdAnyValidationState::any
	XmlSchemaAny_t4125456760 * ___any_3;

public:
	inline static int32_t get_offset_of_any_3() { return static_cast<int32_t>(offsetof(XsdAnyValidationState_t4008767483, ___any_3)); }
	inline XmlSchemaAny_t4125456760 * get_any_3() const { return ___any_3; }
	inline XmlSchemaAny_t4125456760 ** get_address_of_any_3() { return &___any_3; }
	inline void set_any_3(XmlSchemaAny_t4125456760 * value)
	{
		___any_3 = value;
		Il2CppCodeGenWriteBarrier(&___any_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
