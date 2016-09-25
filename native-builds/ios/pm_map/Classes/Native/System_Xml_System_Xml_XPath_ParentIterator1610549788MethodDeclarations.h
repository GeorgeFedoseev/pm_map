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

// System.Xml.XPath.ParentIterator
struct ParentIterator_t1610549788;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_ParentIterator1610549788.h"

// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParentIterator__ctor_m2909223434 (ParentIterator_t1610549788 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.ParentIterator,System.Boolean)
extern "C"  void ParentIterator__ctor_m3526189836 (ParentIterator_t1610549788 * __this, ParentIterator_t1610549788 * ___other0, bool ___dummy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ParentIterator::Clone()
extern "C"  XPathNodeIterator_t1383168931 * ParentIterator_Clone_m1936231624 (ParentIterator_t1610549788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ParentIterator::MoveNextCore()
extern "C"  bool ParentIterator_MoveNextCore_m439950525 (ParentIterator_t1610549788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
