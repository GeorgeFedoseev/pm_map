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

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1407981116;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3890186420;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t4125456760;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase1407981116.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3890186420.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny4125456760.h"

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C"  void XmlSchemaGroupBase__ctor_m2861941686 (XmlSchemaGroupBase_t1407981116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaGroupBase_get_CompiledItems_m2915752677 (XmlSchemaGroupBase_t1407981116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroupBase_CopyOptimizedItems_m3829116813 (XmlSchemaGroupBase_t1407981116 * __this, XmlSchemaGroupBase_t1407981116 * ___gb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupBase_ParticleEquals_m2715389744 (XmlSchemaGroupBase_t1407981116 * __this, XmlSchemaParticle_t3890186420 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupBase_CheckRecursion_m3784476088 (XmlSchemaGroupBase_t1407981116 * __this, int32_t ___depth0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m593398327 (XmlSchemaGroupBase_t1407981116 * __this, XmlSchemaAny_t4125456760 * ___any0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateRecurse_m2895814290 (XmlSchemaGroupBase_t1407981116 * __this, XmlSchemaGroupBase_t1407981116 * ___baseGroup0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m1310490371 (XmlSchemaGroupBase_t1407981116 * __this, XmlSchemaGroupBase_t1407981116 * ___baseGroup0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___isLax3, bool ___isMapAndSum4, bool ___raiseError5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
