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

// System.Xml.XPath.PrecedingIterator
struct PrecedingIterator_t1039893511;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_PrecedingIterator1039893511.h"

// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void PrecedingIterator__ctor_m3521034673 (PrecedingIterator_t1039893511 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.PrecedingIterator)
extern "C"  void PrecedingIterator__ctor_m3696965713 (PrecedingIterator_t1039893511 * __this, PrecedingIterator_t1039893511 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PrecedingIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * PrecedingIterator_Clone_m1082336267 (PrecedingIterator_t1039893511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PrecedingIterator::MoveNextCore()
extern "C"  bool PrecedingIterator_MoveNextCore_m3322136244 (PrecedingIterator_t1039893511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.PrecedingIterator::get_ReverseAxis()
extern "C"  bool PrecedingIterator_get_ReverseAxis_m3280303211 (PrecedingIterator_t1039893511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
