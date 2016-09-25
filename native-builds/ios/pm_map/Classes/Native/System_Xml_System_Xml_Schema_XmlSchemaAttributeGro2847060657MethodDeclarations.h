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

// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t2847060657;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2348706750;
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
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2348706750.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::.ctor()
extern "C"  void XmlSchemaAttributeGroup__ctor_m385940829 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttributeGroup::get_Name()
extern "C"  String_t* XmlSchemaAttributeGroup_get_Name_m1816681816 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaAttributeGroup_get_Attributes_m2225409906 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::get_AttributeUses()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchemaAttributeGroup_get_AttributeUses_m1276538813 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttributeUse()
extern "C"  XmlSchemaAnyAttribute_t2348706750 * XmlSchemaAttributeGroup_get_AnyAttributeUse_m4057963915 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t2348706750 * XmlSchemaAttributeGroup_get_AnyAttribute_m3563871998 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaAttributeGroup_set_AnyAttribute_m88860845 (XmlSchemaAttributeGroup_t2847060657 * __this, XmlSchemaAnyAttribute_t2348706750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::get_QualifiedName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaAttributeGroup_get_QualifiedName_m1369605062 (XmlSchemaAttributeGroup_t2847060657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaAttributeGroup_SetParent_m127852395 (XmlSchemaAttributeGroup_t2847060657 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroup_Compile_m3916753275 (XmlSchemaAttributeGroup_t2847060657 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroup_Validate_m2122198502 (XmlSchemaAttributeGroup_t2847060657 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAttributeGroup_t2847060657 * XmlSchemaAttributeGroup_Read_m445209542 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
