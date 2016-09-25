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

// System.Xml.XPath.DescendantIterator
struct DescendantIterator_t928464879;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_DescendantIterator928464879.h"

// System.Void System.Xml.XPath.DescendantIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void DescendantIterator__ctor_m2310076573 (DescendantIterator_t928464879 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.DescendantIterator::.ctor(System.Xml.XPath.DescendantIterator)
extern "C"  void DescendantIterator__ctor_m2374132145 (DescendantIterator_t928464879 * __this, DescendantIterator_t928464879 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.DescendantIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * DescendantIterator_Clone_m1069770709 (DescendantIterator_t928464879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.DescendantIterator::MoveNextCore()
extern "C"  bool DescendantIterator_MoveNextCore_m3508326288 (DescendantIterator_t928464879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
