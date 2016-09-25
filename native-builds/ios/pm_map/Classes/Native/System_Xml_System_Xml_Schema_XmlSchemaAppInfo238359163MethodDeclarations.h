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

// System.Xml.Schema.XmlSchemaAppInfo
struct XmlSchemaAppInfo_t238359163;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t4049803818;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"

// System.Void System.Xml.Schema.XmlSchemaAppInfo::.ctor()
extern "C"  void XmlSchemaAppInfo__ctor_m585961175 (XmlSchemaAppInfo_t238359163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::get_Markup()
extern "C"  XmlNodeU5BU5D_t4049803818* XmlSchemaAppInfo_get_Markup_m2715614730 (XmlSchemaAppInfo_t238359163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAppInfo::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaAppInfo_set_Markup_m970981101 (XmlSchemaAppInfo_t238359163 * __this, XmlNodeU5BU5D_t4049803818* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAppInfo System.Xml.Schema.XmlSchemaAppInfo::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaAppInfo_t238359163 * XmlSchemaAppInfo_Read_m1566788461 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, bool* ___skip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
