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

// System.Xml.XPath.PredicateIterator
struct PredicateIterator_t3158177019;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_PredicateIterator3158177019.h"

// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.Expression)
extern "C"  void PredicateIterator__ctor_m3004206002 (PredicateIterator_t3158177019 * __this, BaseIterator_t1327316739 * ___iter0, Expression_t2556460284 * ___pred1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.PredicateIterator)
extern "C"  void PredicateIterator__ctor_m1246946409 (PredicateIterator_t3158177019 * __this, PredicateIterator_t3158177019 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PredicateIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * PredicateIterator_Clone_m2751366551 (PredicateIterator_t3158177019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PredicateIterator::MoveNextCore()
extern "C"  bool PredicateIterator_MoveNextCore_m3008221096 (PredicateIterator_t3158177019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.PredicateIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * PredicateIterator_get_Current_m508558563 (PredicateIterator_t3158177019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PredicateIterator::get_ReverseAxis()
extern "C"  bool PredicateIterator_get_ReverseAxis_m1577932535 (PredicateIterator_t3158177019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.PredicateIterator::ToString()
extern "C"  String_t* PredicateIterator_ToString_m891628812 (PredicateIterator_t3158177019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
