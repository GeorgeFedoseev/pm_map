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

// System.Xml.XPath.FollowingIterator
struct FollowingIterator_t3149710293;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_FollowingIterator3149710293.h"

// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void FollowingIterator__ctor_m4068454143 (FollowingIterator_t3149710293 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.FollowingIterator)
extern "C"  void FollowingIterator__ctor_m4069268917 (FollowingIterator_t3149710293 * __this, FollowingIterator_t3149710293 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.FollowingIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * FollowingIterator_Clone_m1372703741 (FollowingIterator_t3149710293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.FollowingIterator::MoveNextCore()
extern "C"  bool FollowingIterator_MoveNextCore_m1477945986 (FollowingIterator_t3149710293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
