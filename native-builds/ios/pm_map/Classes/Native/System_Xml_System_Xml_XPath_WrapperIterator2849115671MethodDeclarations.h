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

// System.Xml.XPath.WrapperIterator
struct WrapperIterator_t2849115671;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathNodeIterator1383168931.h"
#include "System_Xml_System_Xml_XPath_WrapperIterator2849115671.h"

// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.XPathNodeIterator,System.Xml.IXmlNamespaceResolver)
extern "C"  void WrapperIterator__ctor_m802118820 (WrapperIterator_t2849115671 * __this, XPathNodeIterator_t1383168931 * ___iter0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.WrapperIterator)
extern "C"  void WrapperIterator__ctor_m2127158577 (WrapperIterator_t2849115671 * __this, WrapperIterator_t2849115671 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.WrapperIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * WrapperIterator_Clone_m3191539131 (WrapperIterator_t2849115671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.WrapperIterator::MoveNextCore()
extern "C"  bool WrapperIterator_MoveNextCore_m1284174404 (WrapperIterator_t2849115671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.WrapperIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * WrapperIterator_get_Current_m4028081223 (WrapperIterator_t2849115671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
