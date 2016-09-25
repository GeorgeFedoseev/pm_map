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

// System.Xml.Schema.XmlSchemaComplexContent
struct XmlSchemaComplexContent_t699193111;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t1984162949;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaComplexContent::.ctor()
extern "C"  void XmlSchemaComplexContent__ctor_m2574412727 (XmlSchemaComplexContent_t699193111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContent::get_IsMixed()
extern "C"  bool XmlSchemaComplexContent_get_IsMixed_m2346195685 (XmlSchemaComplexContent_t699193111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaComplexContent::get_Content()
extern "C"  XmlSchemaContent_t1984162949 * XmlSchemaComplexContent_get_Content_m2385350622 (XmlSchemaComplexContent_t699193111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContent::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaComplexContent_SetParent_m2653241681 (XmlSchemaComplexContent_t699193111 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContent::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContent_Compile_m2944982101 (XmlSchemaComplexContent_t699193111 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContent::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContent_Validate_m2062063180 (XmlSchemaComplexContent_t699193111 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContent System.Xml.Schema.XmlSchemaComplexContent::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaComplexContent_t699193111 * XmlSchemaComplexContent_Read_m376908306 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
