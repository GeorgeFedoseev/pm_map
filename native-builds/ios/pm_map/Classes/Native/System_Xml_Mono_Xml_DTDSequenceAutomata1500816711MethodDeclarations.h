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

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1500816711;
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

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDSequenceAutomata__ctor_m4129199992 (DTDSequenceAutomata_t1500816711 * __this, DTDObjectModel_t3593115196 * ___root0, DTDAutomata_t415542374 * ___left1, DTDAutomata_t415542374 * ___right2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t415542374 * DTDSequenceAutomata_TryStartElement_m683184348 (DTDSequenceAutomata_t1500816711 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C"  DTDAutomata_t415542374 * DTDSequenceAutomata_TryEndElement_m3754464845 (DTDSequenceAutomata_t1500816711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C"  bool DTDSequenceAutomata_get_Emptiable_m4164407238 (DTDSequenceAutomata_t1500816711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
