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

// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t2942714895;
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

// System.Void System.Xml.Schema.XmlSchemaChoice::.ctor()
extern "C"  void XmlSchemaChoice__ctor_m4257534911 (XmlSchemaChoice_t2942714895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::get_Items()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaChoice_get_Items_m2370419721 (XmlSchemaChoice_t2942714895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaChoice_SetParent_m2135473737 (XmlSchemaChoice_t2942714895 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaChoice_Compile_m612098141 (XmlSchemaChoice_t2942714895 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaChoice::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaChoice_GetOptimizedParticle_m2929987335 (XmlSchemaChoice_t2942714895 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaChoice_Validate_m2757104452 (XmlSchemaChoice_t2942714895 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaChoice::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaChoice_ValidateDerivationByRestriction_m4014467946 (XmlSchemaChoice_t2942714895 * __this, XmlSchemaParticle_t3890186420 * ___baseParticle0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaChoice::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1954350631  XmlSchemaChoice_GetMinEffectiveTotalRange_m4073536064 (XmlSchemaChoice_t2942714895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaChoice_ValidateUniqueParticleAttribution_m73918283 (XmlSchemaChoice_t2942714895 * __this, XmlSchemaObjectTable_t1281427547 * ___qnames0, ArrayList_t3948406897 * ___nsNames1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaChoice_ValidateUniqueTypeAttribution_m4252163332 (XmlSchemaChoice_t2942714895 * __this, XmlSchemaObjectTable_t1281427547 * ___labels0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaChoice System.Xml.Schema.XmlSchemaChoice::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaChoice_t2942714895 * XmlSchemaChoice_Read_m4096725506 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
