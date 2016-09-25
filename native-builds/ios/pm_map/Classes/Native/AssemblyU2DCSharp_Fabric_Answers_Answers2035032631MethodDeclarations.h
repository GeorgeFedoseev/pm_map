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

// Fabric.Answers.Answers
struct Answers_t2035032631;
// Fabric.Answers.Internal.IAnswers
struct IAnswers_t2984795104;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Nullable_1_gen560925241.h"
#include "mscorlib_System_Nullable_1_gen3952353088.h"
#include "mscorlib_System_Nullable_1_gen2038477154.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"

// System.Void Fabric.Answers.Answers::.ctor()
extern "C"  void Answers__ctor_m3609428328 (Answers_t2035032631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fabric.Answers.Internal.IAnswers Fabric.Answers.Answers::get_Implementation()
extern "C"  Il2CppObject * Answers_get_Implementation_m1029938201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogSignUp(System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogSignUp_m257879459 (Il2CppObject * __this /* static, unused */, String_t* ___method0, Nullable_1_t560925241  ___success1, Dictionary_2_t696267445 * ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogLogin(System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogLogin_m3051870242 (Il2CppObject * __this /* static, unused */, String_t* ___method0, Nullable_1_t560925241  ___success1, Dictionary_2_t696267445 * ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogShare(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogShare_m294144262 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, Dictionary_2_t696267445 * ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogInvite(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogInvite_m3742868502 (Il2CppObject * __this /* static, unused */, String_t* ___method0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogLevelStart(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogLevelStart_m1035841355 (Il2CppObject * __this /* static, unused */, String_t* ___level0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogLevelEnd(System.String,System.Nullable`1<System.Double>,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogLevelEnd_m2316867415 (Il2CppObject * __this /* static, unused */, String_t* ___level0, Nullable_1_t3952353088  ___score1, Nullable_1_t560925241  ___success2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogAddToCart(System.Nullable`1<System.Decimal>,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogAddToCart_m2670756920 (Il2CppObject * __this /* static, unused */, Nullable_1_t2038477154  ___itemPrice0, String_t* ___currency1, String_t* ___itemName2, String_t* ___itemType3, String_t* ___itemId4, Dictionary_2_t696267445 * ___customAttributes5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogPurchase(System.Nullable`1<System.Decimal>,System.String,System.Nullable`1<System.Boolean>,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogPurchase_m102017165 (Il2CppObject * __this /* static, unused */, Nullable_1_t2038477154  ___price0, String_t* ___currency1, Nullable_1_t560925241  ___success2, String_t* ___itemName3, String_t* ___itemType4, String_t* ___itemId5, Dictionary_2_t696267445 * ___customAttributes6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogStartCheckout(System.Nullable`1<System.Decimal>,System.String,System.Nullable`1<System.Int32>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogStartCheckout_m3489682736 (Il2CppObject * __this /* static, unused */, Nullable_1_t2038477154  ___totalPrice0, String_t* ___currency1, Nullable_1_t1237965023  ___itemCount2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogRating(System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogRating_m2684628138 (Il2CppObject * __this /* static, unused */, Nullable_1_t1237965023  ___rating0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, Dictionary_2_t696267445 * ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogContentView(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogContentView_m3279313441 (Il2CppObject * __this /* static, unused */, String_t* ___contentName0, String_t* ___contentType1, String_t* ___contentId2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogSearch(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogSearch_m915463477 (Il2CppObject * __this /* static, unused */, String_t* ___query0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Answers::LogCustom(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Answers_LogCustom_m3936517246 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
