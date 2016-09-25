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

// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t488285487;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.DTDEmptyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEmptyAutomata__ctor_m2211780324 (DTDEmptyAutomata_t488285487 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryEndElement()
extern "C"  DTDAutomata_t415542374 * DTDEmptyAutomata_TryEndElement_m1124027935 (DTDEmptyAutomata_t488285487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t415542374 * DTDEmptyAutomata_TryStartElement_m2181364426 (DTDEmptyAutomata_t488285487 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEmptyAutomata::get_Emptiable()
extern "C"  bool DTDEmptyAutomata_get_Emptiable_m11704938 (DTDEmptyAutomata_t488285487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
