﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t4293298778;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;

#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_EntityHandling2742017190.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.EntityResolvingXmlReader
struct  EntityResolvingXmlReader_t4293298778  : public XmlReader_t4123196108
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.EntityResolvingXmlReader::entity
	EntityResolvingXmlReader_t4293298778 * ___entity_2;
	// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::source
	XmlReader_t4123196108 * ___source_3;
	// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::context
	XmlParserContext_t1291067127 * ___context_4;
	// System.Xml.XmlResolver Mono.Xml.EntityResolvingXmlReader::resolver
	XmlResolver_t3822670287 * ___resolver_5;
	// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::entity_handling
	int32_t ___entity_handling_6;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::entity_inside_attr
	bool ___entity_inside_attr_7;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::inside_attr
	bool ___inside_attr_8;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::do_resolve
	bool ___do_resolve_9;

public:
	inline static int32_t get_offset_of_entity_2() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___entity_2)); }
	inline EntityResolvingXmlReader_t4293298778 * get_entity_2() const { return ___entity_2; }
	inline EntityResolvingXmlReader_t4293298778 ** get_address_of_entity_2() { return &___entity_2; }
	inline void set_entity_2(EntityResolvingXmlReader_t4293298778 * value)
	{
		___entity_2 = value;
		Il2CppCodeGenWriteBarrier(&___entity_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___source_3)); }
	inline XmlReader_t4123196108 * get_source_3() const { return ___source_3; }
	inline XmlReader_t4123196108 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(XmlReader_t4123196108 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_context_4() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___context_4)); }
	inline XmlParserContext_t1291067127 * get_context_4() const { return ___context_4; }
	inline XmlParserContext_t1291067127 ** get_address_of_context_4() { return &___context_4; }
	inline void set_context_4(XmlParserContext_t1291067127 * value)
	{
		___context_4 = value;
		Il2CppCodeGenWriteBarrier(&___context_4, value);
	}

	inline static int32_t get_offset_of_resolver_5() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___resolver_5)); }
	inline XmlResolver_t3822670287 * get_resolver_5() const { return ___resolver_5; }
	inline XmlResolver_t3822670287 ** get_address_of_resolver_5() { return &___resolver_5; }
	inline void set_resolver_5(XmlResolver_t3822670287 * value)
	{
		___resolver_5 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_5, value);
	}

	inline static int32_t get_offset_of_entity_handling_6() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___entity_handling_6)); }
	inline int32_t get_entity_handling_6() const { return ___entity_handling_6; }
	inline int32_t* get_address_of_entity_handling_6() { return &___entity_handling_6; }
	inline void set_entity_handling_6(int32_t value)
	{
		___entity_handling_6 = value;
	}

	inline static int32_t get_offset_of_entity_inside_attr_7() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___entity_inside_attr_7)); }
	inline bool get_entity_inside_attr_7() const { return ___entity_inside_attr_7; }
	inline bool* get_address_of_entity_inside_attr_7() { return &___entity_inside_attr_7; }
	inline void set_entity_inside_attr_7(bool value)
	{
		___entity_inside_attr_7 = value;
	}

	inline static int32_t get_offset_of_inside_attr_8() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___inside_attr_8)); }
	inline bool get_inside_attr_8() const { return ___inside_attr_8; }
	inline bool* get_address_of_inside_attr_8() { return &___inside_attr_8; }
	inline void set_inside_attr_8(bool value)
	{
		___inside_attr_8 = value;
	}

	inline static int32_t get_offset_of_do_resolve_9() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4293298778, ___do_resolve_9)); }
	inline bool get_do_resolve_9() const { return ___do_resolve_9; }
	inline bool* get_address_of_do_resolve_9() { return &___do_resolve_9; }
	inline void set_do_resolve_9(bool value)
	{
		___do_resolve_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
