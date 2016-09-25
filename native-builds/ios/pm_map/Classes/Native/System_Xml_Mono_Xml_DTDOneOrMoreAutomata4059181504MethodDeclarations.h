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

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t4059181504;
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

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C"  void DTDOneOrMoreAutomata__ctor_m1844217423 (DTDOneOrMoreAutomata_t4059181504 * __this, DTDObjectModel_t3593115196 * ___root0, DTDAutomata_t415542374 * ___children1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t415542374 * DTDOneOrMoreAutomata_TryStartElement_m708739547 (DTDOneOrMoreAutomata_t4059181504 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C"  DTDAutomata_t415542374 * DTDOneOrMoreAutomata_TryEndElement_m601138990 (DTDOneOrMoreAutomata_t4059181504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
