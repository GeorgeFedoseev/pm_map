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

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Text.Encoding
struct Encoding_t2012439129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.String System.Net.HttpUtility::UrlDecode(System.String)
extern "C"  String_t* HttpUtility_UrlDecode_m3619317602 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Net.HttpUtility::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t3324145743* HttpUtility_GetChars_m2210861724 (Il2CppObject * __this /* static, unused */, MemoryStream_t418716369 * ___b0, Encoding_t2012439129 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m193935599 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
