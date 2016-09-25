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

// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t2125183969;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3752917378;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
extern "C"  void AttributeTypeAndValue__ctor_m1154101250 (AttributeTypeAndValue_t2125183969 * __this, String_t* ___oid0, int32_t ___upperBound1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
extern "C"  void AttributeTypeAndValue__ctor_m1048196135 (AttributeTypeAndValue_t2125183969 * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::set_Value(System.String)
extern "C"  void AttributeTypeAndValue_set_Value_m2494542275 (AttributeTypeAndValue_t2125183969 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
extern "C"  ASN1_t3752917378 * AttributeTypeAndValue_GetASN1_m336149366 (AttributeTypeAndValue_t2125183969 * __this, uint8_t ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
extern "C"  ASN1_t3752917378 * AttributeTypeAndValue_GetASN1_m2636661973 (AttributeTypeAndValue_t2125183969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
extern "C"  uint8_t AttributeTypeAndValue_SelectBestEncoding_m750204702 (AttributeTypeAndValue_t2125183969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
