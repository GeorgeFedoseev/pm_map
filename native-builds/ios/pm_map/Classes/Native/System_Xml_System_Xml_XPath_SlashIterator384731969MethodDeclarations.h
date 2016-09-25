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

// System.Xml.XPath.SlashIterator
struct SlashIterator_t384731969;
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
#include "System_Xml_System_Xml_XPath_SlashIterator384731969.h"

// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SlashIterator__ctor_m2348632994 (SlashIterator_t384731969 * __this, BaseIterator_t1327316739 * ___iter0, NodeSet_t2875795446 * ___expr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.SlashIterator)
extern "C"  void SlashIterator__ctor_m1699614173 (SlashIterator_t384731969 * __this, SlashIterator_t384731969 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SlashIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * SlashIterator_Clone_m3185525137 (SlashIterator_t384731969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SlashIterator::MoveNextCore()
extern "C"  bool SlashIterator_MoveNextCore_m2132081902 (SlashIterator_t384731969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SlashIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * SlashIterator_get_Current_m812878301 (SlashIterator_t384731969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
