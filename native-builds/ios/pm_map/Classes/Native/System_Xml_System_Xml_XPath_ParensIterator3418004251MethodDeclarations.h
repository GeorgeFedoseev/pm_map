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

// System.Xml.XPath.ParensIterator
struct ParensIterator_t3418004251;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_ParensIterator3418004251.h"

// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParensIterator__ctor_m938283977 (ParensIterator_t3418004251 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.ParensIterator)
extern "C"  void ParensIterator__ctor_m3840579889 (ParensIterator_t3418004251 * __this, ParensIterator_t3418004251 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ParensIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * ParensIterator_Clone_m2933303977 (ParensIterator_t3418004251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ParensIterator::MoveNextCore()
extern "C"  bool ParensIterator_MoveNextCore_m2517159868 (ParensIterator_t3418004251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ParensIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * ParensIterator_get_Current_m1307635171 (ParensIterator_t3418004251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.ParensIterator::get_Count()
extern "C"  int32_t ParensIterator_get_Count_m3610177769 (ParensIterator_t3418004251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
