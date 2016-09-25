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

// System.Xml.XPath.NamespaceIterator
struct NamespaceIterator_t1295432863;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_NamespaceIterator1295432863.h"

// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void NamespaceIterator__ctor_m729989193 (NamespaceIterator_t1295432863 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.NamespaceIterator)
extern "C"  void NamespaceIterator__ctor_m30894881 (NamespaceIterator_t1295432863 * __this, NamespaceIterator_t1295432863 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.NamespaceIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * NamespaceIterator_Clone_m1073878643 (NamespaceIterator_t1295432863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NamespaceIterator::MoveNextCore()
extern "C"  bool NamespaceIterator_MoveNextCore_m212520780 (NamespaceIterator_t1295432863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
