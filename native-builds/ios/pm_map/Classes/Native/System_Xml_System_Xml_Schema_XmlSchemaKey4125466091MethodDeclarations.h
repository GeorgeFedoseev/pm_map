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

// System.Xml.Schema.XmlSchemaKey
struct XmlSchemaKey_t4125466091;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1010706190.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"

// System.Void System.Xml.Schema.XmlSchemaKey::.ctor()
extern "C"  void XmlSchemaKey__ctor_m3799818855 (XmlSchemaKey_t4125466091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaKey::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaKey_Compile_m3427325057 (XmlSchemaKey_t4125466091 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaKey System.Xml.Schema.XmlSchemaKey::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaKey_t4125466091 * XmlSchemaKey_Read_m407934334 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
