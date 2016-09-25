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

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3890186420;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3890186420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable1281427547.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C"  void XmlSchemaParticle__ctor_m3107977530 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaParticle_get_Empty_m2394997992 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MinOccursString_m3840204348 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MinOccursString_m2908863933 (XmlSchemaParticle_t3890186420 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MaxOccursString_m1525159374 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MaxOccursString_m3406619499 (XmlSchemaParticle_t3890186420 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C"  Decimal_t1954350631  XmlSchemaParticle_get_MinOccurs_m2470369063 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MinOccurs_m2387084322 (XmlSchemaParticle_t3890186420 * __this, Decimal_t1954350631  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C"  Decimal_t1954350631  XmlSchemaParticle_get_MaxOccurs_m3147801657 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MaxOccurs_m2485881268 (XmlSchemaParticle_t3890186420 * __this, Decimal_t1954350631  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C"  Decimal_t1954350631  XmlSchemaParticle_get_ValidatedMinOccurs_m3003670527 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C"  Decimal_t1954350631  XmlSchemaParticle_get_ValidatedMaxOccurs_m3681103121 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaParticle_GetOptimizedParticle_m1275538028 (XmlSchemaParticle_t3890186420 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaParticle_GetShallowClone_m3030888163 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CompileOccurence_m2116634681 (XmlSchemaParticle_t3890186420 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaParticle_CopyInfo_m795056094 (XmlSchemaParticle_t3890186420 * __this, XmlSchemaParticle_t3890186420 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateOccurenceRangeOK_m898215581 (XmlSchemaParticle_t3890186420 * __this, XmlSchemaParticle_t3890186420 * ___other0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1954350631  XmlSchemaParticle_GetMinEffectiveTotalRange_m1371005051 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C"  Decimal_t1954350631  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m4161498034 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C"  bool XmlSchemaParticle_ValidateIsEmptiable_m2429188983 (XmlSchemaParticle_t3890186420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateDerivationByRestriction_m2560056655 (XmlSchemaParticle_t3890186420 * __this, XmlSchemaParticle_t3890186420 * ___baseParticle0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueParticleAttribution_m3869014854 (XmlSchemaParticle_t3890186420 * __this, XmlSchemaObjectTable_t1281427547 * ___qnames0, ArrayList_t3948406897 * ___nsNames1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueTypeAttribution_m2566009257 (XmlSchemaParticle_t3890186420 * __this, XmlSchemaObjectTable_t1281427547 * ___labels0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CheckRecursion_m1006304828 (XmlSchemaParticle_t3890186420 * __this, int32_t ___depth0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaParticle_ParticleEquals_m2079584708 (XmlSchemaParticle_t3890186420 * __this, XmlSchemaParticle_t3890186420 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
