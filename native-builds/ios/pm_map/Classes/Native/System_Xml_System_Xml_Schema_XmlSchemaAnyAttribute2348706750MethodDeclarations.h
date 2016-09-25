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

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2348706750;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3266201207;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2425104824.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2348706750.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C"  void XmlSchemaAnyAttribute__ctor_m931168880 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_Namespace_m1933652323 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueAny_m2832339042 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueLocal_m51235041 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueOther_m2861634374 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m451675712 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C"  StringCollection_t3266201207 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m2877156902 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m3631140316 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m3186475474 (XmlSchemaAnyAttribute_t2348706750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Compile_m2801274062 (XmlSchemaAnyAttribute_t2348706750 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Validate_m1902081267 (XmlSchemaAnyAttribute_t2348706750 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAnyAttribute_ValidateWildcardSubset_m550143286 (XmlSchemaAnyAttribute_t2348706750 * __this, XmlSchemaAnyAttribute_t2348706750 * ___other0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m2705546027 (XmlSchemaAnyAttribute_t2348706750 * __this, String_t* ___ns0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAnyAttribute_t2348706750 * XmlSchemaAnyAttribute_Read_m1540580064 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
