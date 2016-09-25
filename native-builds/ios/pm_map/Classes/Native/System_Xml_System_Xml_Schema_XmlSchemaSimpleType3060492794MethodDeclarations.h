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

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3060492794;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t730532811;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct XmlSchemaSimpleTypeContent_t1889388569;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeCo1889388569.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMet998439334.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec3489199211.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleType::.ctor()
extern "C"  void XmlSchemaSimpleType__ctor_m562693940 (XmlSchemaSimpleType_t3060492794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::.cctor()
extern "C"  void XmlSchemaSimpleType__cctor_m4076514041 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String)
extern "C"  XmlSchemaSimpleType_t3060492794 * XmlSchemaSimpleType_BuildSchemaType_m742275997 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___baseName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  XmlSchemaSimpleType_t3060492794 * XmlSchemaSimpleType_BuildSchemaType_m2882584893 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___baseName1, bool ___xdt2, bool ___baseXdt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleType::get_AnySimpleType()
extern "C"  XsdAnySimpleType_t730532811 * XmlSchemaSimpleType_get_AnySimpleType_m1434590200 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeContent System.Xml.Schema.XmlSchemaSimpleType::get_Content()
extern "C"  XmlSchemaSimpleTypeContent_t1889388569 * XmlSchemaSimpleType_get_Content_m1777111111 (XmlSchemaSimpleType_t3060492794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::set_Content(System.Xml.Schema.XmlSchemaSimpleTypeContent)
extern "C"  void XmlSchemaSimpleType_set_Content_m3246044994 (XmlSchemaSimpleType_t3060492794 * __this, XmlSchemaSimpleTypeContent_t1889388569 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaSimpleType::get_Variety()
extern "C"  int32_t XmlSchemaSimpleType_get_Variety_m3390013291 (XmlSchemaSimpleType_t3060492794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleType_SetParent_m2996371444 (XmlSchemaSimpleType_t3060492794 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleType_Compile_m4078108434 (XmlSchemaSimpleType_t3060492794 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::CollectBaseType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleType_CollectBaseType_m2154800242 (XmlSchemaSimpleType_t3060492794 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleType_Validate_m2829241135 (XmlSchemaSimpleType_t3060492794 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::ValidateDerivationValid(System.Object,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleType_ValidateDerivationValid_m2038912592 (XmlSchemaSimpleType_t3060492794 * __this, Il2CppObject * ___baseType0, XmlSchemaObjectCollection_t3489199211 * ___facets1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleType::ValidateTypeDerivationOK(System.Object,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaSimpleType_ValidateTypeDerivationOK_m3208461045 (XmlSchemaSimpleType_t3060492794 * __this, Il2CppObject * ___baseType0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleType_t3060492794 * XmlSchemaSimpleType_Read_m310115352 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
