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

// System.Xml.XPath.SortedIterator
struct SortedIterator_t4014821679;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_SortedIterator4014821679.h"

// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SortedIterator__ctor_m2178587357 (SortedIterator_t4014821679 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.SortedIterator)
extern "C"  void SortedIterator__ctor_m3092690865 (SortedIterator_t4014821679 * __this, SortedIterator_t4014821679 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SortedIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * SortedIterator_Clone_m3148712725 (SortedIterator_t4014821679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.SortedIterator::MoveNextCore()
extern "C"  bool SortedIterator_MoveNextCore_m1723129296 (SortedIterator_t4014821679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SortedIterator::get_Current()
extern "C"  XPathNavigator_t1075073278 * SortedIterator_get_Current_m2806041935 (SortedIterator_t4014821679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.SortedIterator::get_Count()
extern "C"  int32_t SortedIterator_get_Count_m3817323349 (SortedIterator_t4014821679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
