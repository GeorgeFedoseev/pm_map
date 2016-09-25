#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.Schema.XmlSchemaAttributeGroupRef
struct XmlSchemaAttributeGroupRef_t1667982748;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaAttributeGroupRef::.ctor()
extern "C"  void XmlSchemaAttributeGroupRef__ctor_m1536638550 (XmlSchemaAttributeGroupRef_t1667982748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroupRef::get_RefName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaAttributeGroupRef_get_RefName_m3386014012 (XmlSchemaAttributeGroupRef_t1667982748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroupRef_Compile_m3498724528 (XmlSchemaAttributeGroupRef_t1667982748 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroupRef_Validate_m2048209233 (XmlSchemaAttributeGroupRef_t1667982748 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroupRef System.Xml.Schema.XmlSchemaAttributeGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAttributeGroupRef_t1667982748 * XmlSchemaAttributeGroupRef_Read_m976402718 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
