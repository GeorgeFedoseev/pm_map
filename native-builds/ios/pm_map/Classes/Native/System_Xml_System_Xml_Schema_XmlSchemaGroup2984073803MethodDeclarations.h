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

// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t2984073803;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1407981116;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase1407981116.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaGroup::.ctor()
extern "C"  void XmlSchemaGroup__ctor_m457482631 (XmlSchemaGroup_t2984073803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaGroup::get_Name()
extern "C"  String_t* XmlSchemaGroup_get_Name_m3067474388 (XmlSchemaGroup_t2984073803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::get_Particle()
extern "C"  XmlSchemaGroupBase_t1407981116 * XmlSchemaGroup_get_Particle_m4108333646 (XmlSchemaGroup_t2984073803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::set_Particle(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroup_set_Particle_m803346225 (XmlSchemaGroup_t2984073803 * __this, XmlSchemaGroupBase_t1407981116 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::get_QualifiedName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaGroup_get_QualifiedName_m2583472886 (XmlSchemaGroup_t2984073803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroup::get_IsCircularDefinition()
extern "C"  bool XmlSchemaGroup_get_IsCircularDefinition_m2043379466 (XmlSchemaGroup_t2984073803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaGroup_SetParent_m1696558465 (XmlSchemaGroup_t2984073803 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroup_Compile_m2739248161 (XmlSchemaGroup_t2984073803 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroup_Validate_m4274245632 (XmlSchemaGroup_t2984073803 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaGroup_t2984073803 * XmlSchemaGroup_Read_m3787358590 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
