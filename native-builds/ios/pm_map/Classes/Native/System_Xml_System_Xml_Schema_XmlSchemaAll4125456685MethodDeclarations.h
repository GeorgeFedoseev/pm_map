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

// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t4125456685;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
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
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3890186420.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable1281427547.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaAll::.ctor()
extern "C"  void XmlSchemaAll__ctor_m1074942309 (XmlSchemaAll_t4125456685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::get_Items()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaAll_get_Items_m2074651685 (XmlSchemaAll_t4125456685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::get_Emptiable()
extern "C"  bool XmlSchemaAll_get_Emptiable_m3104264297 (XmlSchemaAll_t4125456685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaAll_SetParent_m187101283 (XmlSchemaAll_t4125456685 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAll_Compile_m3612335359 (XmlSchemaAll_t4125456685 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAll::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaAll_GetOptimizedParticle_m2274467449 (XmlSchemaAll_t4125456685 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAll_Validate_m1275177698 (XmlSchemaAll_t4125456685 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ComputeEmptiable()
extern "C"  void XmlSchemaAll_ComputeEmptiable_m1785978847 (XmlSchemaAll_t4125456685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAll_ValidateDerivationByRestriction_m878677908 (XmlSchemaAll_t4125456685 * __this, XmlSchemaParticle_t3890186420 * ___baseParticle0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaAll::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1954350631  XmlSchemaAll_GetMinEffectiveTotalRange_m2609009096 (XmlSchemaAll_t4125456685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAll_ValidateUniqueParticleAttribution_m1056811505 (XmlSchemaAll_t4125456685 * __this, XmlSchemaObjectTable_t1281427547 * ___qnames0, ArrayList_t3948406897 * ___nsNames1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAll_ValidateUniqueTypeAttribution_m3498055070 (XmlSchemaAll_t4125456685 * __this, XmlSchemaObjectTable_t1281427547 * ___labels0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAll System.Xml.Schema.XmlSchemaAll::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAll_t4125456685 * XmlSchemaAll_Read_m1303985470 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
