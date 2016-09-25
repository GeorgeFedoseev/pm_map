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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t4125473774;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t880573945;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t2904598248;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t2847060657;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3664762632;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t4090188264;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm4089761650.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMet998439334.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet4125473774.h"
#include "System_Xml_System_Xml_XmlResolver3822670287.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaExternal880573945.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec3489199211.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C"  void XmlSchema__ctor_m188227104 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C"  int32_t XmlSchema_get_AttributeFormDefault_m2406364640 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C"  int32_t XmlSchema_get_BlockDefault_m1868070695 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C"  int32_t XmlSchema_get_FinalDefault_m3994351710 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C"  int32_t XmlSchema_get_ElementFormDefault_m361882880 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C"  String_t* XmlSchema_get_TargetNamespace_m1263789570 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C"  void XmlSchema_set_TargetNamespace_m3512711863 (XmlSchema_t1010706190 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C"  String_t* XmlSchema_get_Version_m1135093648 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchema_get_Includes_m748082563 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchema_get_Items_m3467235754 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C"  bool XmlSchema_get_IsCompiled_m3170323904 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_Attributes_m631487041 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_AttributeGroups_m2860353672 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_SchemaTypes_m2406206928 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_Elements_m1404485665 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C"  String_t* XmlSchema_get_Id_m792700229 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_Groups_m1629027326 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_Notations_m506061481 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t1281427547 * XmlSchema_get_NamedIdentities_m543179181 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C"  XmlSchemaSet_t4125473774 * XmlSchema_get_Schemas_m2385362935 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C"  Hashtable_t1407064410 * XmlSchema_get_IDCollection_m2655855613 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C"  void XmlSchema_CompileSubset_m3567496017 (XmlSchema_t1010706190 * __this, ValidationEventHandler_t4231404781 * ___handler0, XmlSchemaSet_t4125473774 * ___col1, XmlResolver_t3822670287 * ___resolver2, Hashtable_t1407064410 * ___handledUris3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C"  void XmlSchema_SetParent_m798376298 (XmlSchema_t1010706190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C"  void XmlSchema_DoCompile_m1793284530 (XmlSchema_t1010706190 * __this, ValidationEventHandler_t4231404781 * ___handler0, Hashtable_t1407064410 * ___handledUris1, XmlSchemaSet_t4125473774 * ___col2, XmlResolver_t3822670287 * ___resolver3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C"  String_t* XmlSchema_GetResolvedUri_m669425620 (XmlSchema_t1010706190 * __this, XmlResolver_t3822670287 * ___resolver0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_ProcessExternal_m3624028268 (XmlSchema_t1010706190 * __this, ValidationEventHandler_t4231404781 * ___handler0, Hashtable_t1407064410 * ___handledUris1, XmlResolver_t3822670287 * ___resolver2, XmlSchemaExternal_t880573945 * ___ext3, XmlSchemaSet_t4125473774 * ___col4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_AddExternalComponentsTo_m3629422530 (XmlSchema_t1010706190 * __this, XmlSchema_t1010706190 * ___s0, XmlSchemaObjectCollection_t3489199211 * ___items1, ValidationEventHandler_t4231404781 * ___handler2, Hashtable_t1407064410 * ___handledUris3, XmlResolver_t3822670287 * ___resolver4, XmlSchemaSet_t4125473774 * ___col5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C"  bool XmlSchema_IsNamespaceAbsent_m3886411730 (XmlSchema_t1010706190 * __this, String_t* ___ns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttribute_t2904598248 * XmlSchema_FindAttribute_m1642502741 (XmlSchema_t1010706190 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttributeGroup_t2847060657 * XmlSchema_FindAttributeGroup_m2150583515 (XmlSchema_t1010706190 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaElement_t3664762632 * XmlSchema_FindElement_m3492185045 (XmlSchema_t1010706190 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t4090188264 * XmlSchema_FindSchemaType_m2055392780 (XmlSchema_t1010706190 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_Validate_m3258498682 (XmlSchema_t1010706190 * __this, ValidationEventHandler_t4231404781 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchema_t1010706190 * XmlSchema_Read_m807478306 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___rdr0, ValidationEventHandler_t4231404781 * ___validationEventHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadAttributes_m4276125438 (Il2CppObject * __this /* static, unused */, XmlSchema_t1010706190 * ___schema0, XmlSchemaReader_t3368959793 * ___reader1, ValidationEventHandler_t4231404781 * ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadContent_m572495374 (Il2CppObject * __this /* static, unused */, XmlSchema_t1010706190 * ___schema0, XmlSchemaReader_t3368959793 * ___reader1, ValidationEventHandler_t4231404781 * ___h2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
