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

// Mono.Xml.XPath.Tokenizer
struct Tokenizer_t1510902653;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.XPath.Tokenizer::.ctor(System.String)
extern "C"  void Tokenizer__ctor_m3725140673 (Tokenizer_t1510902653 * __this, String_t* ___strInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.Tokenizer::.cctor()
extern "C"  void Tokenizer__cctor_m2939925996 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::Peek(System.Int32)
extern "C"  Il2CppChar Tokenizer_Peek_m3172346797 (Tokenizer_t1510902653 * __this, int32_t ___iOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::Peek()
extern "C"  Il2CppChar Tokenizer_Peek_m4053934172 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::GetChar()
extern "C"  Il2CppChar Tokenizer_GetChar_m3293081869 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::PutBack()
extern "C"  Il2CppChar Tokenizer_PutBack_m1991014231 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::SkipWhitespace()
extern "C"  bool Tokenizer_SkipWhitespace_m3223252775 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseNumber()
extern "C"  int32_t Tokenizer_ParseNumber_m2376763193 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseLiteral()
extern "C"  int32_t Tokenizer_ParseLiteral_m2561279649 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.Tokenizer::ReadIdentifier()
extern "C"  String_t* Tokenizer_ReadIdentifier_m224120005 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseIdentifier()
extern "C"  int32_t Tokenizer_ParseIdentifier_m151998745 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsWhitespace(System.Char)
extern "C"  bool Tokenizer_IsWhitespace_m596496075 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsDigit(System.Char)
extern "C"  bool Tokenizer_IsDigit_m448102595 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseToken()
extern "C"  int32_t Tokenizer_ParseToken_m1903029675 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::advance()
extern "C"  bool Tokenizer_advance_m3323820185 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::token()
extern "C"  int32_t Tokenizer_token_m1034812214 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.XPath.Tokenizer::value()
extern "C"  Il2CppObject * Tokenizer_value_m3552967611 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::get_IsFirstToken()
extern "C"  bool Tokenizer_get_IsFirstToken_m1142525831 (Tokenizer_t1510902653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsNodeType(System.Int32)
extern "C"  bool Tokenizer_IsNodeType_m3472117698 (Tokenizer_t1510902653 * __this, int32_t ___iToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsOperatorName(System.Int32)
extern "C"  bool Tokenizer_IsOperatorName_m3788670325 (Tokenizer_t1510902653 * __this, int32_t ___iToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsAxisName(System.Int32)
extern "C"  bool Tokenizer_IsAxisName_m1626818866 (Tokenizer_t1510902653 * __this, int32_t ___iToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
