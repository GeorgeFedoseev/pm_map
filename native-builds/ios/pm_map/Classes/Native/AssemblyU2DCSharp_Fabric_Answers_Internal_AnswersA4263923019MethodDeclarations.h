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

// Fabric.Answers.Internal.AnswersAppleImplementation
struct AnswersAppleImplementation_t4263923019;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Nullable_1_gen560925241.h"
#include "mscorlib_System_Nullable_1_gen3952353088.h"
#include "mscorlib_System_Nullable_1_gen2038477154.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::.ctor()
extern "C"  void AnswersAppleImplementation__ctor_m2706499413 (AnswersAppleImplementation_t4263923019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogSignUp(System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogSignUp_m3288402677 (Il2CppObject * __this /* static, unused */, String_t* ___signupMethod0, String_t* ___success1, String_t* ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogLogin(System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogLogin_m1953397372 (Il2CppObject * __this /* static, unused */, String_t* ___loginMethod0, String_t* ___success1, String_t* ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogShare(System.String,System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogShare_m2604883646 (Il2CppObject * __this /* static, unused */, String_t* ___shareMethod0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, String_t* ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogInvite(System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogInvite_m2667783752 (Il2CppObject * __this /* static, unused */, String_t* ___inviteMethod0, String_t* ___customAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogPurchase(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogPurchase_m771174780 (Il2CppObject * __this /* static, unused */, String_t* ___purchasePrice0, String_t* ___currency1, String_t* ___success2, String_t* ___itemName3, String_t* ___itemType4, String_t* ___itemId5, String_t* ___customAttributes6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogLevelStart(System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogLevelStart_m1496983603 (Il2CppObject * __this /* static, unused */, String_t* ___levelName0, String_t* ___customAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogLevelEnd(System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogLevelEnd_m3949198546 (Il2CppObject * __this /* static, unused */, String_t* ___levelName0, String_t* ___levelScore1, String_t* ___success2, String_t* ___customAttribute3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogAddToCart(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogAddToCart_m652353597 (Il2CppObject * __this /* static, unused */, String_t* ___itemPrice0, String_t* ___currency1, String_t* ___itemName2, String_t* ___itemType3, String_t* ___itemId4, String_t* ___customAttributes5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogStartCheckout(System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogStartCheckout_m583204409 (Il2CppObject * __this /* static, unused */, String_t* ___itemPrice0, String_t* ___currency1, String_t* ___itemCount2, String_t* ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogRating(System.String,System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogRating_m3888220392 (Il2CppObject * __this /* static, unused */, String_t* ___rating0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, String_t* ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogContentView(System.String,System.String,System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogContentView_m3991648003 (Il2CppObject * __this /* static, unused */, String_t* ___contentName0, String_t* ___contentType1, String_t* ___contentId2, String_t* ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogSearch(System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogSearch_m2465024009 (Il2CppObject * __this /* static, unused */, String_t* ___query0, String_t* ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::ANSLogCustom(System.String,System.String)
extern "C"  void AnswersAppleImplementation_ANSLogCustom_m3744596704 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName0, String_t* ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogSignUp(System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogSignUp_m144228496 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___method0, Nullable_1_t560925241  ___success1, Dictionary_2_t696267445 * ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogLogin(System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogLogin_m2078372757 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___method0, Nullable_1_t560925241  ___success1, Dictionary_2_t696267445 * ___customAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogShare(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogShare_m3631530361 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___method0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, Dictionary_2_t696267445 * ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogInvite(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogInvite_m3751756355 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___method0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogLevelStart(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogLevelStart_m1472229112 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___level0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogLevelEnd(System.String,System.Nullable`1<System.Double>,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogLevelEnd_m4177835338 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___level0, Nullable_1_t3952353088  ___score1, Nullable_1_t560925241  ___success2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogAddToCart(System.Nullable`1<System.Decimal>,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogAddToCart_m2490502763 (AnswersAppleImplementation_t4263923019 * __this, Nullable_1_t2038477154  ___itemPrice0, String_t* ___currency1, String_t* ___itemName2, String_t* ___itemType3, String_t* ___itemId4, Dictionary_2_t696267445 * ___customAttributes5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogPurchase(System.Nullable`1<System.Decimal>,System.String,System.Nullable`1<System.Boolean>,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogPurchase_m3389026490 (AnswersAppleImplementation_t4263923019 * __this, Nullable_1_t2038477154  ___price0, String_t* ___currency1, Nullable_1_t560925241  ___success2, String_t* ___itemName3, String_t* ___itemType4, String_t* ___itemId5, Dictionary_2_t696267445 * ___customAttributes6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogStartCheckout(System.Nullable`1<System.Decimal>,System.String,System.Nullable`1<System.Int32>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogStartCheckout_m2398503331 (AnswersAppleImplementation_t4263923019 * __this, Nullable_1_t2038477154  ___totalPrice0, String_t* ___currency1, Nullable_1_t1237965023  ___itemCount2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogRating(System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogRating_m2747793751 (AnswersAppleImplementation_t4263923019 * __this, Nullable_1_t1237965023  ___rating0, String_t* ___contentName1, String_t* ___contentType2, String_t* ___contentId3, Dictionary_2_t696267445 * ___customAttributes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogContentView(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogContentView_m2305815956 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___contentName0, String_t* ___contentType1, String_t* ___contentId2, Dictionary_2_t696267445 * ___customAttributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogSearch(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogSearch_m924351330 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___query0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Answers.Internal.AnswersAppleImplementation::LogCustom(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AnswersAppleImplementation_LogCustom_m3945405099 (AnswersAppleImplementation_t4263923019 * __this, String_t* ___eventName0, Dictionary_2_t696267445 * ___customAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Fabric.Answers.Internal.AnswersAppleImplementation::AsStringOrNull(System.Object)
extern "C"  String_t* AnswersAppleImplementation_AsStringOrNull_m4216349173 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Fabric.Answers.Internal.AnswersAppleImplementation::boolToString(System.Nullable`1<System.Boolean>)
extern "C"  String_t* AnswersAppleImplementation_boolToString_m3184519328 (Il2CppObject * __this /* static, unused */, Nullable_1_t560925241  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Fabric.Answers.Internal.AnswersAppleImplementation::dictionaryToString(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  String_t* AnswersAppleImplementation_dictionaryToString_m2872994643 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
