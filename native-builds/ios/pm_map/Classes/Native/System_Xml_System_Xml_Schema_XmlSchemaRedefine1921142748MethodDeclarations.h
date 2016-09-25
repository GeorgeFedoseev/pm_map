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

// System.Xml.Schema.XmlSchemaRedefine
struct XmlSchemaRedefine_t1921142748;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3489199211;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3368959793;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3368959793.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle4231404781.h"

// System.Void System.Xml.Schema.XmlSchemaRedefine::.ctor()
extern "C"  void XmlSchemaRedefine__ctor_m1195818770 (XmlSchemaRedefine_t1921142748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::get_Items()
extern "C"  XmlSchemaObjectCollection_t3489199211 * XmlSchemaRedefine_get_Items_m3199911068 (XmlSchemaRedefine_t1921142748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaRedefine::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaRedefine_SetParent_m636910294 (XmlSchemaRedefine_t1921142748 * __this, XmlSchemaObject_t3280570797 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaRedefine System.Xml.Schema.XmlSchemaRedefine::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaRedefine_t1921142748 * XmlSchemaRedefine_Read_m3865787548 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3368959793 * ___reader0, ValidationEventHandler_t4231404781 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
