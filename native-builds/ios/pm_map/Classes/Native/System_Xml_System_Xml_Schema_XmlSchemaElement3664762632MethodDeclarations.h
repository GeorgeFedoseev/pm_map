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

// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3664762632;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t4090188264;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3890186420;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMet998439334.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaType4090188264.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec3489199211.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement3664762632.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3890186420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable1281427547.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaElement::.ctor()
extern "C"  void XmlSchemaElement__ctor_m1057102058 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::InitPostCompileInformations()
extern "C"  void XmlSchemaElement_InitPostCompileInformations_m690225906 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsAbstract()
extern "C"  bool XmlSchemaElement_get_IsAbstract_m1786408087 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsAbstract(System.Boolean)
extern "C"  void XmlSchemaElement_set_IsAbstract_m1289605434 (XmlSchemaElement_t3664762632 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XmlSchemaElement_set_Final_m3204597336 (XmlSchemaElement_t3664762632 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Name(System.String)
extern "C"  void XmlSchemaElement_set_Name_m2260992352 (XmlSchemaElement_t3664762632 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsNillable()
extern "C"  bool XmlSchemaElement_get_IsNillable_m1154069514 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsNillable(System.Boolean)
extern "C"  void XmlSchemaElement_set_IsNillable_m2834666349 (XmlSchemaElement_t3664762632 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_RefName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaElement_get_RefName_m3872471184 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SubstitutionGroup()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaElement_get_SubstitutionGroup_m733403668 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SchemaTypeName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaElement_get_SchemaTypeName_m1463024310 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaTypeName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaElement_set_SchemaTypeName_m4135018735 (XmlSchemaElement_t3664762632 * __this, XmlQualifiedName_t2133315502 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::get_SchemaType()
extern "C"  XmlSchemaType_t4090188264 * XmlSchemaElement_get_SchemaType_m3318429078 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaType(System.Xml.Schema.XmlSchemaType)
extern "C"  void XmlSchemaElement_set_SchemaType_m4095516037 (XmlSchemaElement_t3664762632 * __this, XmlSchemaType_t4090188264 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::get_Constraints()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaElement_get_Constraints_m1205744096 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_QualifiedName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaElement_get_QualifiedName_m2908521753 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaElement::get_ElementType()
extern "C"  Il2CppObject * XmlSchemaElement_get_ElementType_m4125256416 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_BlockResolved()
extern "C"  int32_t XmlSchemaElement_get_BlockResolved_m3524109706 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_FinalResolved()
extern "C"  int32_t XmlSchemaElement_get_FinalResolved_m719344435 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsNillable()
extern "C"  bool XmlSchemaElement_get_ActualIsNillable_m2165982520 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsAbstract()
extern "C"  bool XmlSchemaElement_get_ActualIsAbstract_m2798321093 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedDefaultValue()
extern "C"  String_t* XmlSchemaElement_get_ValidatedDefaultValue_m1287986938 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedFixedValue()
extern "C"  String_t* XmlSchemaElement_get_ValidatedFixedValue_m3377257639 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Schema.XmlSchemaElement::get_SubstitutingElements()
extern "C"  ArrayList_t3948406897 * XmlSchemaElement_get_SubstitutingElements_m2459300003 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaElement_SetParent_m3443714046 (XmlSchemaElement_t3664762632 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaElement_Compile_m2349311428 (XmlSchemaElement_t3664762632 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaElement::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaElement_GetOptimizedParticle_m2275642132 (XmlSchemaElement_t3664762632 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::AddSubstElementRecursively(System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaElement_AddSubstElementRecursively_m1197278708 (XmlSchemaElement_t3664762632 * __this, XmlSchemaObjectCollection_t3489199211 * ___col0, XmlSchemaElement_t3664762632 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::FillSubstitutionElementInfo()
extern "C"  void XmlSchemaElement_FillSubstitutionElementInfo_m3585409490 (XmlSchemaElement_t3664762632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaElement_Validate_m776141501 (XmlSchemaElement_t3664762632 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaElement_ParticleEquals_m75580516 (XmlSchemaElement_t3664762632 * __this, XmlSchemaParticle_t3890186420 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaElement_ValidateDerivationByRestriction_m2663132847 (XmlSchemaElement_t3664762632 * __this, XmlSchemaParticle_t3890186420 * ___baseParticle0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestrictionNameAndTypeOK(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaElement_ValidateDerivationByRestrictionNameAndTypeOK_m3385575661 (XmlSchemaElement_t3664762632 * __this, XmlSchemaElement_t3664762632 * ___baseElement0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_CheckRecursion_m2265604588 (XmlSchemaElement_t3664762632 * __this, int32_t ___depth0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_ValidateUniqueParticleAttribution_m3576791798 (XmlSchemaElement_t3664762632 * __this, XmlSchemaObjectTable_t1281427547 * ___qnames0, ArrayList_t3948406897 * ___nsNames1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_ValidateUniqueTypeAttribution_m65188857 (XmlSchemaElement_t3664762632 * __this, XmlSchemaObjectTable_t1281427547 * ___labels0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateElementDefaultValidImmediate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaElement_ValidateElementDefaultValidImmediate_m245393813 (XmlSchemaElement_t3664762632 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaElement_t3664762632 * XmlSchemaElement_Read_m1856176222 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
