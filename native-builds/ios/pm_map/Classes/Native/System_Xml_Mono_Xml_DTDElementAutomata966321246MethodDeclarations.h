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

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t966321246;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.String
struct String_t;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDElementAutomata__ctor_m739456143 (DTDElementAutomata_t966321246 * __this, DTDObjectModel_t3593115196 * ___root0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C"  String_t* DTDElementAutomata_get_Name_m3002165678 (DTDElementAutomata_t966321246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t415542374 * DTDElementAutomata_TryStartElement_m1218012473 (DTDElementAutomata_t966321246 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
