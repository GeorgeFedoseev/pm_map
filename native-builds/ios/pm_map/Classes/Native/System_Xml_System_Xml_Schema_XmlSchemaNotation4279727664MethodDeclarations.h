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

// System.Xml.Schema.XmlSchemaNotation
struct XmlSchemaNotation_t4279727664;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
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

// System.Void System.Xml.Schema.XmlSchemaNotation::.ctor()
extern "C"  void XmlSchemaNotation__ctor_m557152062 (XmlSchemaNotation_t4279727664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Name()
extern "C"  String_t* XmlSchemaNotation_get_Name_m704118167 (XmlSchemaNotation_t4279727664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Public()
extern "C"  String_t* XmlSchemaNotation_get_Public_m1802088245 (XmlSchemaNotation_t4279727664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaNotation::get_QualifiedName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSchemaNotation_get_QualifiedName_m1873656295 (XmlSchemaNotation_t4279727664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaNotation_Compile_m111198236 (XmlSchemaNotation_t4279727664 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaNotation_Validate_m114109285 (XmlSchemaNotation_t4279727664 * __this, ValidationEventHandler_t4231404781 * ___h0, XmlSchema_t1010706190 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaNotation System.Xml.Schema.XmlSchemaNotation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaNotation_t4279727664 * XmlSchemaNotation_Read_m4097463620 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
