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

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t918003794;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t41916820;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDElementDeclaration41916820.h"

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDElementDeclarationCollection__ctor_m879563011 (DTDElementDeclarationCollection_t918003794 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C"  DTDElementDeclaration_t41916820 * DTDElementDeclarationCollection_get_Item_m2338684824 (DTDElementDeclarationCollection_t918003794 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C"  DTDElementDeclaration_t41916820 * DTDElementDeclarationCollection_Get_m2070883288 (DTDElementDeclarationCollection_t918003794 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDElementDeclarationCollection_Add_m2137189962 (DTDElementDeclarationCollection_t918003794 * __this, String_t* ___name0, DTDElementDeclaration_t41916820 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
