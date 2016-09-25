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

// System.Xml.XPath.ListIterator
struct ListIterator_t4080389072;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Collections.IList
struct IList_t1751339649;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_ListIterator4080389072.h"

// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.BaseIterator,System.Collections.IList)
extern "C"  void ListIterator__ctor_m222741241 (ListIterator_t4080389072 * __this, BaseIterator_t1327316739 * ___iter0, Il2CppObject * ___list1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Collections.IList,System.Xml.IXmlNamespaceResolver)
extern "C"  void ListIterator__ctor_m320855722 (ListIterator_t4080389072 * __this, Il2CppObject * ___list0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.ListIterator)
extern "C"  void ListIterator__ctor_m3954479633 (ListIterator_t4080389072 * __this, ListIterator_t4080389072 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ListIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * ListIterator_Clone_m1676587988 (ListIterator_t4080389072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ListIterator::MoveNextCore()
extern "C"  bool ListIterator_MoveNextCore_m2796201201 (ListIterator_t4080389072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ListIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * ListIterator_get_Current_m3594158222 (ListIterator_t4080389072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.ListIterator::get_Count()
extern "C"  int32_t ListIterator_get_Count_m773660244 (ListIterator_t4080389072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
