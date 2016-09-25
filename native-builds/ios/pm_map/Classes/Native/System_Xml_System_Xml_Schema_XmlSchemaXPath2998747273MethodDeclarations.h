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

// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t2998747273;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t1405586823;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaXPath::.ctor()
extern "C"  void XmlSchemaXPath__ctor_m3400589577 (XmlSchemaXPath_t2998747273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaXPath::get_XPath()
extern "C"  String_t* XmlSchemaXPath_get_XPath_m2946469112 (XmlSchemaXPath_t2998747273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaXPath_Compile_m3472859683 (XmlSchemaXPath_t2998747273 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::get_CompiledExpression()
extern "C"  XsdIdentityPathU5BU5D_t1405586823* XmlSchemaXPath_get_CompiledExpression_m1070271229 (XmlSchemaXPath_t2998747273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseExpression(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseExpression_m2043180545 (XmlSchemaXPath_t2998747273 * __this, String_t* ___xpath0, ValidationEventHandler_t4231404781 * ___h1, XmlSchema_t1010706190 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParsePath(System.String,System.Int32,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParsePath_m2782280958 (XmlSchemaXPath_t2998747273 * __this, String_t* ___xpath0, int32_t ___pos1, ArrayList_t3948406897 * ___paths2, ValidationEventHandler_t4231404781 * ___h3, XmlSchema_t1010706190 * ___schema4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseStep(System.String,System.Int32,System.Collections.ArrayList,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseStep_m1604962518 (XmlSchemaXPath_t2998747273 * __this, String_t* ___xpath0, int32_t ___pos1, ArrayList_t3948406897 * ___steps2, ArrayList_t3948406897 * ___paths3, ValidationEventHandler_t4231404781 * ___h4, XmlSchema_t1010706190 * ___schema5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlSchemaXPath_SkipWhitespace_m2356894766 (XmlSchemaXPath_t2998747273 * __this, String_t* ___xpath0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaXPath::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  XmlSchemaXPath_t2998747273 * XmlSchemaXPath_Read_m523859194 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
