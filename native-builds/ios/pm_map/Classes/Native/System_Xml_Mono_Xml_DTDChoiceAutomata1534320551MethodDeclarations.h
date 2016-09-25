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

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t1534320551;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "System_Xml_Mono_Xml_DTDAutomata415542374.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDChoiceAutomata__ctor_m2508519768 (DTDChoiceAutomata_t1534320551 * __this, DTDObjectModel_t3593115196 * ___root0, DTDAutomata_t415542374 * ___left1, DTDAutomata_t415542374 * ___right2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t415542374 * DTDChoiceAutomata_TryStartElement_m1771571836 (DTDChoiceAutomata_t1534320551 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C"  DTDAutomata_t415542374 * DTDChoiceAutomata_TryEndElement_m2807632045 (DTDChoiceAutomata_t1534320551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C"  bool DTDChoiceAutomata_get_Emptiable_m3452891110 (DTDChoiceAutomata_t1534320551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
