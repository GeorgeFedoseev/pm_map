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

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t3054769670;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2348706750;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2348706750.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C"  void XmlSchemaSimpleContentExtension__ctor_m91409320 (XmlSchemaSimpleContentExtension_t3054769670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m414359854 (XmlSchemaSimpleContentExtension_t3054769670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaSimpleContentExtension_get_Attributes_m310061703 (XmlSchemaSimpleContentExtension_t3054769670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t2348706750 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m2242692563 (XmlSchemaSimpleContentExtension_t3054769670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaSimpleContentExtension_set_AnyAttribute_m1362095672 (XmlSchemaSimpleContentExtension_t3054769670 * __this, XmlSchemaAnyAttribute_t2348706750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaSimpleContentExtension_get_IsExtension_m3772222554 (XmlSchemaSimpleContentExtension_t3054769670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleContentExtension_SetParent_m4178162688 (XmlSchemaSimpleContentExtension_t3054769670 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Compile_m1533196678 (XmlSchemaSimpleContentExtension_t3054769670 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m438744767 (XmlSchemaSimpleContentExtension_t3054769670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Validate_m1246388027 (XmlSchemaSimpleContentExtension_t3054769670 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleContentExtension_t3054769670 * XmlSchemaSimpleContentExtension_Read_m3857222320 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
