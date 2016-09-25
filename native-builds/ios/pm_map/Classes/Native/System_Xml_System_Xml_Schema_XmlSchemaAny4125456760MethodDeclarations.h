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

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t4125456760;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3266201207;
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
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2425104824.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3890186420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny4125456760.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable1281427547.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaAny::.ctor()
extern "C"  void XmlSchemaAny__ctor_m3516298618 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::get_AnyTypeContent()
extern "C"  XmlSchemaAny_t4125456760 * XmlSchemaAny_get_AnyTypeContent_m2289356428 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_Namespace()
extern "C"  String_t* XmlSchemaAny_get_Namespace_m141846471 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_Namespace(System.String)
extern "C"  void XmlSchemaAny_set_Namespace_m63374572 (XmlSchemaAny_t4125456760 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ProcessContents()
extern "C"  int32_t XmlSchemaAny_get_ProcessContents_m3153294066 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XmlSchemaAny_set_ProcessContents_m102151801 (XmlSchemaAny_t4125456760 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueAny()
extern "C"  bool XmlSchemaAny_get_HasValueAny_m2985981404 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueLocal()
extern "C"  bool XmlSchemaAny_get_HasValueLocal_m1672656859 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueOther()
extern "C"  bool XmlSchemaAny_get_HasValueOther_m188088896 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAny_get_HasValueTargetNamespace_m68551866 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAny::get_ResolvedNamespaces()
extern "C"  StringCollection_t3266201207 * XmlSchemaAny_get_ResolvedNamespaces_m3582517194 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAny_get_ResolvedProcessContents_m59137498 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAny_get_TargetNamespace_m2605686070 (XmlSchemaAny_t4125456760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAny_Compile_m3718165844 (XmlSchemaAny_t4125456760 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAny::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3890186420 * XmlSchemaAny_GetOptimizedParticle_m1792675460 (XmlSchemaAny_t4125456760 * __this, bool ___isTop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAny_Validate_m260955437 (XmlSchemaAny_t4125456760 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaAny_ParticleEquals_m1040598260 (XmlSchemaAny_t4125456760 * __this, XmlSchemaParticle_t3890186420 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAny_ExamineAttributeWildcardIntersection_m298519948 (XmlSchemaAny_t4125456760 * __this, XmlSchemaAny_t4125456760 * ___other0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAny_ValidateDerivationByRestriction_m3242969119 (XmlSchemaAny_t4125456760 * __this, XmlSchemaParticle_t3890186420 * ___baseParticle0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_CheckRecursion_m1773185660 (XmlSchemaAny_t4125456760 * __this, int32_t ___depth0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_ValidateUniqueParticleAttribution_m4267038598 (XmlSchemaAny_t4125456760 * __this, XmlSchemaObjectTable_t1281427547 * ___qnames0, ArrayList_t3948406897 * ___nsNames1, ValidationEventHandler_t4231404781 * ___h2, XmlSchema_t1010706190 * ___schema3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_ValidateUniqueTypeAttribution_m1943752041 (XmlSchemaAny_t4125456760 * __this, XmlSchemaObjectTable_t1281427547 * ___labels0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAny_ValidateWildcardAllowsNamespaceName_m4222495922 (XmlSchemaAny_t4125456760 * __this, String_t* ___ns0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAny_t4125456760 * XmlSchemaAny_Read_m1502776286 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
