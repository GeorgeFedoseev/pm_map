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

// System.Xml.XPath.UnionIterator
struct UnionIterator_t1391611539;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_UnionIterator1391611539.h"
#include "System_Xml_System_Xml_XPath_XPathNodeIterator1383168931.h"

// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator)
extern "C"  void UnionIterator__ctor_m4002392457 (UnionIterator_t1391611539 * __this, BaseIterator_t1327316739 * ___iter0, BaseIterator_t1327316739 * ___left1, BaseIterator_t1327316739 * ___right2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.UnionIterator)
extern "C"  void UnionIterator__ctor_m1987098937 (UnionIterator_t1391611539 * __this, UnionIterator_t1391611539 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.UnionIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * UnionIterator_Clone_m2246908543 (UnionIterator_t1391611539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.UnionIterator::MoveNextCore()
extern "C"  bool UnionIterator_MoveNextCore_m2409356352 (UnionIterator_t1391611539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::SetCurrent(System.Xml.XPath.XPathNodeIterator)
extern "C"  void UnionIterator_SetCurrent_m1765329958 (UnionIterator_t1391611539 * __this, XPathNodeIterator_t1383168931 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.UnionIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * UnionIterator_get_Current_m1791653963 (UnionIterator_t1391611539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
