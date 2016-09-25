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

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t539606558;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3091667497;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t3090381356;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t691771506;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons3091667497.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable__ctor_m2774336930 (XsdKeyTable_t539606558 * __this, XmlSchemaIdentityConstraint_t3091667497 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C"  XmlSchemaIdentityConstraint_t3091667497 * XsdKeyTable_get_SourceSchemaIdentity_m233246076 (XsdKeyTable_t539606558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C"  XsdIdentitySelector_t3090381356 * XsdKeyTable_get_Selector_m1159069408 (XsdKeyTable_t539606558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable_Reset_m628396053 (XsdKeyTable_t539606558 * __this, XmlSchemaIdentityConstraint_t3091667497 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C"  XsdIdentityPath_t691771506 * XsdKeyTable_SelectorMatches_m3533945790 (XsdKeyTable_t539606558 * __this, ArrayList_t3948406897 * ___qnameStack0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
