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

// System.Xml.XPath.AxisIterator
struct AxisIterator_t953634771;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.NodeTest
struct NodeTest_t2939071960;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_NodeTest2939071960.h"
#include "System_Xml_System_Xml_XPath_AxisIterator953634771.h"

// System.Void System.Xml.XPath.AxisIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeTest)
extern "C"  void AxisIterator__ctor_m2307956914 (AxisIterator_t953634771 * __this, BaseIterator_t1327316739 * ___iter0, NodeTest_t2939071960 * ___test1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AxisIterator::.ctor(System.Xml.XPath.AxisIterator)
extern "C"  void AxisIterator__ctor_m967112753 (AxisIterator_t953634771 * __this, AxisIterator_t953634771 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.AxisIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * AxisIterator_Clone_m2661155633 (AxisIterator_t953634771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AxisIterator::MoveNextCore()
extern "C"  bool AxisIterator_MoveNextCore_m314688244 (AxisIterator_t953634771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.AxisIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * AxisIterator_get_Current_m1435899435 (AxisIterator_t953634771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AxisIterator::get_ReverseAxis()
extern "C"  bool AxisIterator_get_ReverseAxis_m1414729771 (AxisIterator_t953634771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
