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

// System.Xml.XPath.SelfIterator
struct SelfIterator_t197024894;
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
#include "System_Xml_System_Xml_XPath_SelfIterator197024894.h"

// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SelfIterator__ctor_m2835358572 (SelfIterator_t197024894 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SelfIterator__ctor_m4150585400 (SelfIterator_t197024894 * __this, XPathNavigator_t1075073278 * ___nav0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.SelfIterator,System.Boolean)
extern "C"  void SelfIterator__ctor_m3078894092 (SelfIterator_t197024894 * __this, SelfIterator_t197024894 * ___other0, bool ___clone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SelfIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * SelfIterator_Clone_m3186820838 (SelfIterator_t197024894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SelfIterator::MoveNextCore()
extern "C"  bool SelfIterator_MoveNextCore_m260577695 (SelfIterator_t197024894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SelfIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * SelfIterator_get_Current_m4205100576 (SelfIterator_t197024894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
