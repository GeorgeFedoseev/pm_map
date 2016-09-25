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

// System.Xml.Schema.XmlSchemaComplexContentExtension
struct XmlSchemaComplexContentExtension_t3934413474;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3890186420;
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

// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::.ctor()
extern "C"  void XmlSchemaComplexContentExtension__ctor_m886437520 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaComplexContentExtension_get_BaseTypeName_m286354496 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::get_Particle()
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaComplexContentExtension_get_Particle_m1576836143 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaComplexContentExtension_get_Attributes_m81863273 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t2348706750 * XmlSchemaComplexContentExtension_get_AnyAttribute_m2724443759 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaComplexContentExtension_set_AnyAttribute_m1254592288 (XmlSchemaComplexContentExtension_t3934413474 * __this, XmlSchemaAnyAttribute_t2348706750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaComplexContentExtension_get_IsExtension_m4179929650 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaComplexContentExtension_SetParent_m2081864216 (XmlSchemaComplexContentExtension_t3934413474 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContentExtension_Compile_m795837162 (XmlSchemaComplexContentExtension_t3934413474 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaComplexContentExtension_GetBaseTypeName_m3759751533 (XmlSchemaComplexContentExtension_t3934413474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContentExtension_Validate_m4158046807 (XmlSchemaComplexContentExtension_t3934413474 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContentExtension System.Xml.Schema.XmlSchemaComplexContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaComplexContentExtension_t3934413474 * XmlSchemaComplexContentExtension_Read_m3348703262 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
