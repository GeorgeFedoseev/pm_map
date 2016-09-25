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

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3090381356;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t2998747273;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t1405586823;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t471607183;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t583292246;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaXPath2998747273.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField471607183.h"

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C"  void XsdIdentitySelector__ctor_m4035241194 (XsdIdentitySelector_t3090381356 * __this, XmlSchemaXPath_t2998747273 * ___selector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C"  XsdIdentityPathU5BU5D_t1405586823* XsdIdentitySelector_get_Paths_m3765529913 (XsdIdentitySelector_t3090381356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdIdentitySelector_AddField_m3757938105 (XsdIdentitySelector_t3090381356 * __this, XsdIdentityField_t471607183 * ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C"  XsdIdentityFieldU5BU5D_t583292246* XsdIdentitySelector_get_Fields_m962948175 (XsdIdentitySelector_t3090381356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
