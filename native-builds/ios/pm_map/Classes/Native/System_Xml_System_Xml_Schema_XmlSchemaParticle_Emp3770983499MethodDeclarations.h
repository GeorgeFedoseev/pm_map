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

// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t3770983499;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3890186420;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1281427547;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3890186420.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable1281427547.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::.ctor()
extern "C"  void EmptyParticle__ctor_m3532038774 (EmptyParticle_t3770983499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle/EmptyParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3890186420 * EmptyParticle_GetOptimizedParticle_m2860255152 (EmptyParticle_t3770983499 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool EmptyParticle_ParticleEquals_m4199711488 (EmptyParticle_t3770983499 * __this, XmlSchemaParticle_t3890186420 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool EmptyParticle_ValidateDerivationByRestriction_m2512912787 (EmptyParticle_t3770983499 * __this, XmlSchemaParticle_t3890186420 * ___baseParticle0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_CheckRecursion_m29816 (EmptyParticle_t3770983499 * __this, int32_t ___depth0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_ValidateUniqueParticleAttribution_m3840439938 (EmptyParticle_t3770983499 * __this, XmlSchemaObjectTable_t1281427547 * ___qnames0, ArrayList_t3948406897 * ___nsNames1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_ValidateUniqueTypeAttribution_m3233935085 (EmptyParticle_t3770983499 * __this, XmlSchemaObjectTable_t1281427547 * ___labels0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
