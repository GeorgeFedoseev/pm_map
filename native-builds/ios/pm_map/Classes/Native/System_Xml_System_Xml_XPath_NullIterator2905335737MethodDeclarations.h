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

// System.Xml.XPath.NullIterator
struct NullIterator_t2905335737;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"
#include "System_Xml_System_Xml_XPath_NullIterator2905335737.h"

// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void NullIterator__ctor_m2854644327 (NullIterator_t2905335737 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void NullIterator__ctor_m4158990173 (NullIterator_t2905335737 * __this, XPathNavigator_t1075073278 * ___nav0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.NullIterator)
extern "C"  void NullIterator__ctor_m233625713 (NullIterator_t2905335737 * __this, NullIterator_t2905335737 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.NullIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * NullIterator_Clone_m2491346443 (NullIterator_t2905335737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NullIterator::MoveNextCore()
extern "C"  bool NullIterator_MoveNextCore_m161861338 (NullIterator_t2905335737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.NullIterator::get_CurrentPosition()
extern "C"  int32_t NullIterator_get_CurrentPosition_m3673814846 (NullIterator_t2905335737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.NullIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * NullIterator_get_Current_m3786274181 (NullIterator_t2905335737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
