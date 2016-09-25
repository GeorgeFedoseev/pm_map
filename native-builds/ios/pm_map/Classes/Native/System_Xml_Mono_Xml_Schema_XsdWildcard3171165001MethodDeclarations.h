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

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t3171165001;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t4125456760;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny4125456760.h"
#include "System_Xml_Mono_Xml_Schema_XsdWildcard3171165001.h"

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XsdWildcard__ctor_m3279048073 (XsdWildcard_t3171165001 * __this, XmlSchemaObject_t3280570797 * ___wildcard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
extern "C"  void XsdWildcard_Reset_m2924675830 (XsdWildcard_t3171165001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_Compile_m4203221961 (XsdWildcard_t3171165001 * __this, String_t* ___nss0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XsdWildcard_ExamineAttributeWildcardIntersection_m1346006443 (XsdWildcard_t3171165001 * __this, XmlSchemaAny_t4125456760 * ___other0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m3469531379 (XsdWildcard_t3171165001 * __this, String_t* ___ns0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_ValidateWildcardSubset_m2036236740 (XsdWildcard_t3171165001 * __this, XsdWildcard_t3171165001 * ___other0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardSubset_m2072467265 (XsdWildcard_t3171165001 * __this, XsdWildcard_t3171165001 * ___other0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
