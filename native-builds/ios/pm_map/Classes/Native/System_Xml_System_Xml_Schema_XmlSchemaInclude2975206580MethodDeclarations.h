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

// System.Xml.Schema.XmlSchemaInclude
struct XmlSchemaInclude_t2975206580;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2937014557;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation2937014557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"

// System.Void System.Xml.Schema.XmlSchemaInclude::.ctor()
extern "C"  void XmlSchemaInclude__ctor_m547325118 (XmlSchemaInclude_t2975206580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaInclude::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaInclude_set_Annotation_m67007312 (XmlSchemaInclude_t2975206580 * __this, XmlSchemaAnnotation_t2937014557 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaInclude System.Xml.Schema.XmlSchemaInclude::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaInclude_t2975206580 * XmlSchemaInclude_Read_m1342546142 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
