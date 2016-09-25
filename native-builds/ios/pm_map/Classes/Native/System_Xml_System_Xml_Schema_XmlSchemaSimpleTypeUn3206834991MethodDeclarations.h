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

// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t3206834991;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t3496396251;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::.ctor()
extern "C"  void XmlSchemaSimpleTypeUnion__ctor_m383336099 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_BaseTypes()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaSimpleTypeUnion_get_BaseTypes_m1523723083 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_MemberTypes()
extern "C"  XmlQualifiedNameU5BU5D_t3496396251* XmlSchemaSimpleTypeUnion_get_MemberTypes_m507135532 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_ValidatedTypes()
extern "C"  ObjectU5BU5D_t1108656482* XmlSchemaSimpleTypeUnion_get_ValidatedTypes_m2857961384 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeUnion_SetParent_m622989797 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeUnion_Compile_m2011977405 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeUnion_Validate_m3203688676 (XmlSchemaSimpleTypeUnion_t3206834991 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeUnion System.Xml.Schema.XmlSchemaSimpleTypeUnion::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeUnion_t3206834991 * XmlSchemaSimpleTypeUnion_Read_m1781101310 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
