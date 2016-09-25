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

// Mono.Xml.DTDContentModel
struct DTDContentModel_t647030886;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t194646180;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t41916820;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDOccurence81554249.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType4011965541.h"
#include "System_Xml_Mono_Xml_DTDAutomata415542374.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDContentModel__ctor_m248936723 (DTDContentModel_t647030886 * __this, DTDObjectModel_t3593115196 * ___root0, String_t* ___ownerElementName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C"  DTDContentModelCollection_t194646180 * DTDContentModel_get_ChildModels_m1642723597 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDContentModel::get_ElementDecl()
extern "C"  DTDElementDeclaration_t41916820 * DTDContentModel_get_ElementDecl_m1388326301 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C"  String_t* DTDContentModel_get_ElementName_m461002204 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C"  void DTDContentModel_set_ElementName_m4279929463 (DTDContentModel_t647030886 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::get_Occurence()
extern "C"  int32_t DTDContentModel_get_Occurence_m3803308929 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C"  void DTDContentModel_set_Occurence_m1938639474 (DTDContentModel_t647030886 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C"  int32_t DTDContentModel_get_OrderType_m2382989904 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C"  void DTDContentModel_set_OrderType_m2020937195 (DTDContentModel_t647030886 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetAutomata()
extern "C"  DTDAutomata_t415542374 * DTDContentModel_GetAutomata_m2141566264 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Compile()
extern "C"  DTDAutomata_t415542374 * DTDContentModel_Compile_m3218529797 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::CompileInternal()
extern "C"  DTDAutomata_t415542374 * DTDContentModel_CompileInternal_m4110057890 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::GetBasicContentAutomata()
extern "C"  DTDAutomata_t415542374 * DTDContentModel_GetBasicContentAutomata_m501448067 (DTDContentModel_t647030886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t415542374 * DTDContentModel_Sequence_m1958675541 (DTDContentModel_t647030886 * __this, DTDAutomata_t415542374 * ___l0, DTDAutomata_t415542374 * ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t415542374 * DTDContentModel_Choice_m606966453 (DTDContentModel_t647030886 * __this, DTDAutomata_t415542374 * ___l0, DTDAutomata_t415542374 * ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
