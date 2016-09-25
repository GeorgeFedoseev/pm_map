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

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t809616844;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t1534320551;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1500816711;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "System_Xml_Mono_Xml_DTDAutomata415542374.h"

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomataFactory__ctor_m2953278209 (DTDAutomataFactory_t809616844 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDChoiceAutomata_t1534320551 * DTDAutomataFactory_Choice_m3290007144 (DTDAutomataFactory_t809616844 * __this, DTDAutomata_t415542374 * ___left0, DTDAutomata_t415542374 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDSequenceAutomata_t1500816711 * DTDAutomataFactory_Sequence_m812875240 (DTDAutomataFactory_t809616844 * __this, DTDAutomata_t415542374 * ___left0, DTDAutomata_t415542374 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
