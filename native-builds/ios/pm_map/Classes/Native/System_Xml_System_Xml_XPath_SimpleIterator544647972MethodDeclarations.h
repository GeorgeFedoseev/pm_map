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

// System.Xml.XPath.SimpleIterator
struct SimpleIterator_t544647972;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_SimpleIterator544647972.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"

// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SimpleIterator__ctor_m1076221202 (SimpleIterator_t544647972 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.SimpleIterator,System.Boolean)
extern "C"  void SimpleIterator__ctor_m403425804 (SimpleIterator_t544647972 * __this, SimpleIterator_t544647972 * ___other0, bool ___clone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SimpleIterator__ctor_m1024992466 (SimpleIterator_t544647972 * __this, XPathNavigator_t1075073278 * ___nav0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SimpleIterator::MoveNext()
extern "C"  bool SimpleIterator_MoveNext_m2872354886 (SimpleIterator_t544647972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * SimpleIterator_get_Current_m1974708922 (SimpleIterator_t544647972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
