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

// System.Linq.Expressions.Expression
struct Expression_t275615326;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2235474049;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t974710719;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2123556024.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049.h"
#include "System_Core_System_Linq_Expressions_Expression275615326.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C"  void Expression__ctor_m3602002992 (Expression_t275615326 * __this, int32_t ___node_type0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C"  int32_t Expression_get_NodeType_m2139853313 (Expression_t275615326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C"  Type_t * Expression_get_Type_m2445344496 (Expression_t275615326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
extern "C"  String_t* Expression_ToString_m288908258 (Expression_t275615326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetUnaryOperator(System.String,System.Type,System.Type,System.Type)
extern "C"  MethodInfo_t * Expression_GetUnaryOperator_m139753793 (Il2CppObject * __this /* static, unused */, String_t* ___oper_name0, Type_t * ___declaring1, Type_t * ___param2, Type_t * ___ret3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetTrueOperator(System.Type)
extern "C"  MethodInfo_t * Expression_GetTrueOperator_m4281195052 (Il2CppObject * __this /* static, unused */, Type_t * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetFalseOperator(System.Type)
extern "C"  MethodInfo_t * Expression_GetFalseOperator_m3877646251 (Il2CppObject * __this /* static, unused */, Type_t * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetBooleanOperator(System.String,System.Type)
extern "C"  MethodInfo_t * Expression_GetBooleanOperator_m2158199874 (Il2CppObject * __this /* static, unused */, String_t* ___op0, Type_t * ___self1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
extern "C"  bool Expression_IsAssignableToParameterType_m241263170 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ParameterInfo_t2235474049 * ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetBinaryOperator(System.String,System.Type,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
extern "C"  MethodInfo_t * Expression_GetBinaryOperator_m90954901 (Il2CppObject * __this /* static, unused */, String_t* ___oper_name0, Type_t * ___on_type1, Expression_t275615326 * ___left2, Expression_t275615326 * ___right3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::BinaryCoreCheck(System.String,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Reflection.MethodInfo)
extern "C"  MethodInfo_t * Expression_BinaryCoreCheck_m2919437886 (Il2CppObject * __this /* static, unused */, String_t* ___oper_name0, Expression_t275615326 * ___left1, Expression_t275615326 * ___right2, MethodInfo_t * ___method3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToOperatorParameter(System.Linq.Expressions.Expression,System.Reflection.ParameterInfo)
extern "C"  bool Expression_IsAssignableToOperatorParameter_m3944337169 (Il2CppObject * __this /* static, unused */, Expression_t275615326 * ___expression0, ParameterInfo_t2235474049 * ___parameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::MakeBoolBinary(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Boolean,System.Reflection.MethodInfo)
extern "C"  BinaryExpression_t974710719 * Expression_MakeBoolBinary_m313805328 (Il2CppObject * __this /* static, unused */, int32_t ___et0, Expression_t275615326 * ___left1, Expression_t275615326 * ___right2, bool ___liftToNull3, MethodInfo_t * ___method4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::AndAlso(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
extern "C"  BinaryExpression_t974710719 * Expression_AndAlso_m1461520475 (Il2CppObject * __this /* static, unused */, Expression_t275615326 * ___left0, Expression_t275615326 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::AndAlso(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Reflection.MethodInfo)
extern "C"  BinaryExpression_t974710719 * Expression_AndAlso_m2603967096 (Il2CppObject * __this /* static, unused */, Expression_t275615326 * ___left0, Expression_t275615326 * ___right1, MethodInfo_t * ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::ConditionalBinaryCheck(System.String,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Reflection.MethodInfo)
extern "C"  MethodInfo_t * Expression_ConditionalBinaryCheck_m2716262447 (Il2CppObject * __this /* static, unused */, String_t* ___oper0, Expression_t275615326 * ___left1, Expression_t275615326 * ___right2, MethodInfo_t * ___method3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsInt(System.Type)
extern "C"  bool Expression_IsInt_m3204438457 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsNumber(System.Type)
extern "C"  bool Expression_IsNumber_m1081243583 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
