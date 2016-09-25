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

// System.Xml.XPath.AttributeIterator
struct AttributeIterator_t4254482656;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_AttributeIterator4254482656.h"

// System.Void System.Xml.XPath.AttributeIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void AttributeIterator__ctor_m626920394 (AttributeIterator_t4254482656 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AttributeIterator::.ctor(System.Xml.XPath.AttributeIterator)
extern "C"  void AttributeIterator__ctor_m738536479 (AttributeIterator_t4254482656 * __this, AttributeIterator_t4254482656 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.AttributeIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * AttributeIterator_Clone_m1870449490 (AttributeIterator_t4254482656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AttributeIterator::MoveNextCore()
extern "C"  bool AttributeIterator_MoveNextCore_m816034189 (AttributeIterator_t4254482656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
