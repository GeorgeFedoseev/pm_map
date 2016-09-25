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

// System.Xml.XPath.ChildIterator
struct ChildIterator_t3087618016;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_ChildIterator3087618016.h"

// System.Void System.Xml.XPath.ChildIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ChildIterator__ctor_m1815034314 (ChildIterator_t3087618016 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ChildIterator::.ctor(System.Xml.XPath.ChildIterator)
extern "C"  void ChildIterator__ctor_m2771727263 (ChildIterator_t3087618016 * __this, ChildIterator_t3087618016 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ChildIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * ChildIterator_Clone_m2923315154 (ChildIterator_t3087618016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ChildIterator::MoveNextCore()
extern "C"  bool ChildIterator_MoveNextCore_m3551044493 (ChildIterator_t3087618016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ChildIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * ChildIterator_get_Current_m3213955934 (ChildIterator_t3087618016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
