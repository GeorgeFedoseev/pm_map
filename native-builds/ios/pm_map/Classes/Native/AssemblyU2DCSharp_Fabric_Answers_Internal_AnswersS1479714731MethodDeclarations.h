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

// Fabric.Answers.Internal.AnswersStubImplementation
struct AnswersStubImplementation_t1479714731;
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

// System.Void Fabric.Answers.Internal.AnswersStubImplementation::.ctor()
extern "C"  void AnswersStubImplementation__ctor_m1062970821 (AnswersStubImplementation_t1479714731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogSignUp(System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogSignUp_m375975680 (AnswersStubImplementation_t1479714731 * __this, String_t* ___method0, Nullable_1_t560925241  ___success1, Dictionary_2_t696267445 * ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogLogin(System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogLogin_m2501490469 (AnswersStubImplementation_t1479714731 * __this, String_t* ___method0, Nullable_1_t560925241  ___success1, Dictionary_2_t696267445 * ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogShare(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogShare_m2302178569 (AnswersStubImplementation_t1479714731 * __this, String_t* ___method0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, Dictionary_2_t696267445 * ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogInvite(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogInvite_m852364467 (AnswersStubImplementation_t1479714731 * __this, String_t* ___method0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogLevelStart(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogLevelStart_m2292482408 (AnswersStubImplementation_t1479714731 * __this, String_t* ___level0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogLevelEnd(System.String,System.Nullable`1<System.Double>,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogLevelEnd_m3506335962 (AnswersStubImplementation_t1479714731 * __this, String_t* ___level0, Nullable_1_t3952353088  ___score1, Nullable_1_t560925241  ___success2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogAddToCart(System.Nullable`1<System.Decimal>,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogAddToCart_m1482855931 (AnswersStubImplementation_t1479714731 * __this, Nullable_1_t2038477154  ___itemPrice0, String_t* ___currency1, String_t* ___itemName2, String_t* ___itemType3, String_t* ___itemId4, Dictionary_2_t696267445 * ___customAttributes5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogPurchase(System.Nullable`1<System.Decimal>,System.String,System.Nullable`1<System.Boolean>,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogPurchase_m1717246762 (AnswersStubImplementation_t1479714731 * __this, Nullable_1_t2038477154  ___price0, String_t* ___currency1, Nullable_1_t560925241  ___success2, String_t* ___itemName3, String_t* ___itemType4, String_t* ___itemId5, Dictionary_2_t696267445 * ___customAttributes6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogStartCheckout(System.Nullable`1<System.Decimal>,System.String,System.Nullable`1<System.Int32>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogStartCheckout_m361215283 (AnswersStubImplementation_t1479714731 * __this, Nullable_1_t2038477154  ___totalPrice0, String_t* ___currency1, Nullable_1_t1237965023  ___itemCount2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogRating(System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogRating_m2987525063 (AnswersStubImplementation_t1479714731 * __this, Nullable_1_t1237965023  ___rating0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, Dictionary_2_t696267445 * ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogContentView(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogContentView_m2728933668 (AnswersStubImplementation_t1479714731 * __this, String_t* ___contentName0, String_t* ___contentType1, String_t* ___contentId2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogSearch(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogSearch_m2319926738 (AnswersStubImplementation_t1479714731 * __this, String_t* ___query0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersStubImplementation::LogCustom(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersStubImplementation_LogCustom_m1046013211 (AnswersStubImplementation_t1479714731 * __this, String_t* ___eventName0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
