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

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3260433748;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t78171291;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException78171291.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType944542020.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationEventArgs__ctor_m1860798045 (ValidationEventArgs_t3260433748 * __this, XmlSchemaException_t78171291 * ___ex0, String_t* ___message1, int32_t ___severity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C"  XmlSchemaException_t78171291 * ValidationEventArgs_get_Exception_m1711707009 (ValidationEventArgs_t3260433748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C"  int32_t ValidationEventArgs_get_Severity_m3103623188 (ValidationEventArgs_t3260433748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
