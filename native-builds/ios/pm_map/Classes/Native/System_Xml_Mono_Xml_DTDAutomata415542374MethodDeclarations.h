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

// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "System_Xml_Mono_Xml_DTDAutomata415542374.h"

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomata__ctor_m4120291351 (DTDAutomata_t415542374 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
extern "C"  DTDObjectModel_t3593115196 * DTDAutomata_get_Root_m285994343 (DTDAutomata_t415542374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t415542374 * DTDAutomata_MakeChoice_m720640605 (DTDAutomata_t415542374 * __this, DTDAutomata_t415542374 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t415542374 * DTDAutomata_MakeSequence_m2001475901 (DTDAutomata_t415542374 * __this, DTDAutomata_t415542374 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
extern "C"  DTDAutomata_t415542374 * DTDAutomata_TryEndElement_m2876478478 (DTDAutomata_t415542374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
extern "C"  bool DTDAutomata_get_Emptiable_m470025351 (DTDAutomata_t415542374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
