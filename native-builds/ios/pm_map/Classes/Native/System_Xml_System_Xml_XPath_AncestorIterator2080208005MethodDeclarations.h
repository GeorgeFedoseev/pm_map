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

// System.Xml.XPath.AncestorIterator
struct AncestorIterator_t2080208005;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_AncestorIterator2080208005.h"

// System.Void System.Xml.XPath.AncestorIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void AncestorIterator__ctor_m494746931 (AncestorIterator_t2080208005 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AncestorIterator::.ctor(System.Xml.XPath.AncestorIterator)
extern "C"  void AncestorIterator__ctor_m4189982705 (AncestorIterator_t2080208005 * __this, AncestorIterator_t2080208005 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.AncestorIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * AncestorIterator_Clone_m1848056383 (AncestorIterator_t2080208005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AncestorIterator::CollectResults()
extern "C"  void AncestorIterator_CollectResults_m594795063 (AncestorIterator_t2080208005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AncestorIterator::MoveNextCore()
extern "C"  bool AncestorIterator_MoveNextCore_m819234470 (AncestorIterator_t2080208005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AncestorIterator::get_ReverseAxis()
extern "C"  bool AncestorIterator_get_ReverseAxis_m4260779833 (AncestorIterator_t2080208005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.AncestorIterator::get_Count()
extern "C"  int32_t AncestorIterator_get_Count_m3165807551 (AncestorIterator_t2080208005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
