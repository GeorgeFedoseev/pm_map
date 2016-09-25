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

// System.Xml.XPath.SimpleSlashIterator
struct SimpleSlashIterator_t1419496431;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.NodeSet
struct NodeSet_t2875795446;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_NodeSet2875795446.h"
#include "System_Xml_System_Xml_XPath_SimpleSlashIterator1419496431.h"

// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SimpleSlashIterator__ctor_m3208158132 (SimpleSlashIterator_t1419496431 * __this, BaseIterator_t1327316739 * ___left0, NodeSet_t2875795446 * ___expr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.SimpleSlashIterator)
extern "C"  void SimpleSlashIterator__ctor_m1778448769 (SimpleSlashIterator_t1419496431 * __this, SimpleSlashIterator_t1419496431 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SimpleSlashIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * SimpleSlashIterator_Clone_m2687801187 (SimpleSlashIterator_t1419496431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SimpleSlashIterator::MoveNextCore()
extern "C"  bool SimpleSlashIterator_MoveNextCore_m3882540316 (SimpleSlashIterator_t1419496431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleSlashIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * SimpleSlashIterator_get_Current_m3159180143 (SimpleSlashIterator_t1419496431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
