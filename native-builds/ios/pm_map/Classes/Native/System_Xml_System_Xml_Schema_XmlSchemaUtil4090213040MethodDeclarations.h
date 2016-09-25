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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t730532811;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Xml.XmlAttribute
struct XmlAttribute_t6647939;
// System.Exception
struct Exception_t3991598821;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2348706750;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t2847060657;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t2904598248;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t4125473774;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t2974990486;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable1281427547.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType730532811.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlAttribute6647939.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMet998439334.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm4089761650.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2425104824.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaUse4125476115.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec3489199211.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2348706750.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttributeGro2847060657.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute2904598248.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet4125473774.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaComplexType2974990486.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C"  void XmlSchemaUtil__cctor_m1976949167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_AddToTable_m2489876554 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t1281427547 * ___table0, XmlSchemaObject_t3280570797 * ___obj1, XmlQualifiedName_t2133315502 * ___qname2, ValidationEventHandler_t4231404781 * ___h3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_CompileID_m3091706380 (Il2CppObject * __this /* static, unused */, String_t* ___id0, XmlSchemaObject_t3280570797 * ___xso1, Hashtable_t1407064410 * ___idCollection2, ValidationEventHandler_t4231404781 * ___h3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C"  bool XmlSchemaUtil_CheckAnyUri_m4146910934 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C"  bool XmlSchemaUtil_CheckNormalizedString_m3757568398 (Il2CppObject * __this /* static, unused */, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C"  bool XmlSchemaUtil_CheckNCName_m1147251958 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_CheckQName_m3611145498 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t2133315502 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C"  XmlParserContext_t1291067127 * XmlSchemaUtil_GetParserContext_m469864920 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_IsBuiltInDatatypeName_m3465375616 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t2133315502 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C"  bool XmlSchemaUtil_AreSchemaDatatypeEqual_m3363616973 (Il2CppObject * __this /* static, unused */, XsdAnySimpleType_t730532811 * ___st10, Il2CppObject * ___v11, XsdAnySimpleType_t730532811 * ___st22, Il2CppObject * ___v23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C"  bool XmlSchemaUtil_IsValidQName_m1274079738 (Il2CppObject * __this /* static, unused */, String_t* ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C"  StringU5BU5D_t4054002952* XmlSchemaUtil_SplitList_m739244845 (Il2CppObject * __this /* static, unused */, String_t* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaUtil_ReadUnhandledAttribute_m1450247805 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, XmlSchemaObject_t3280570797 * ___xso1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlSchemaUtil_ParseWsdlArrayType_m153752591 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, XmlAttribute_t6647939 * ___attr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  bool XmlSchemaUtil_ReadBoolAttribute_m2558495378 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, Exception_t3991598821 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_ReadDerivationAttribute_m3229061286 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, Exception_t3991598821 ** ___innerExcpetion1, String_t* ___name2, int32_t ___allowed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_AddFlag_m4098650780 (Il2CppObject * __this /* static, unused */, int32_t ___dst0, int32_t ___add1, int32_t ___allowed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadFormAttribute_m3096485854 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, Exception_t3991598821 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadProcessingAttribute_m389093543 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, Exception_t3991598821 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadUseAttribute_m2305677272 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, Exception_t3991598821 ** ___innerExcpetion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaUtil_ReadQNameAttribute_m2798992097 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, Exception_t3991598821 ** ___innerEx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaUtil_ToQName_m2651108472 (Il2CppObject * __this /* static, unused */, XmlReader_t4123196108 * ___reader0, String_t* ___qnamestr1, Exception_t3991598821 ** ___innerEx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C"  int32_t XmlSchemaUtil_ValidateAttributesResolved_m3831522979 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t1281427547 * ___attributesResolved0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, XmlSchemaObjectCollection_t3489199211 * ___attributes3, XmlSchemaAnyAttribute_t2348706750 * ___anyAttribute4, XmlSchemaAnyAttribute_t2348706750 ** ___anyAttributeUse5, XmlSchemaAttributeGroup_t2847060657 * ___redefined6, bool ___skipEquivalent7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C"  bool XmlSchemaUtil_AreAttributesEqual_m2942570911 (Il2CppObject * __this /* static, unused */, XmlSchemaAttribute_t2904598248 * ___one0, XmlSchemaAttribute_t2904598248 * ___another1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t3280570797 * XmlSchemaUtil_FindAttributeDeclaration_m3449558422 (Il2CppObject * __this /* static, unused */, String_t* ___ns0, XmlSchemaSet_t4125473774 * ___schemas1, XmlSchemaComplexType_t2974990486 * ___cType2, XmlQualifiedName_t2133315502 * ___qname3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C"  bool XmlSchemaUtil_AttributeWildcardItemValid_m814712370 (Il2CppObject * __this /* static, unused */, XmlSchemaAnyAttribute_t2348706750 * ___anyAttr0, XmlQualifiedName_t2133315502 * ___qname1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
