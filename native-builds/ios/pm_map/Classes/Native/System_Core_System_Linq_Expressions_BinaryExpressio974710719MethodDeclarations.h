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

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t974710719;
// System.Type
struct Type_t;
// System.Linq.Expressions.Expression
struct Expression_t275615326;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3865948165;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2123556024.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Core_System_Linq_Expressions_Expression275615326.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "System_Core_System_Linq_Expressions_LambdaExpressi3865948165.h"

// System.Void System.Linq.Expressions.BinaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Type,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Boolean,System.Boolean,System.Reflection.MethodInfo,System.Linq.Expressions.LambdaExpression)
extern "C"  void BinaryExpression__ctor_m3813296769 (BinaryExpression_t974710719 * __this, int32_t ___node_type0, Type_t * ___type1, Expression_t275615326 * ___left2, Expression_t275615326 * ___right3, bool ___lift_to_null4, bool ___is_lifted5, MethodInfo_t * ___method6, LambdaExpression_t3865948165 * ___conversion7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C"  Expression_t275615326 * BinaryExpression_get_Left_m3490645159 (BinaryExpression_t974710719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C"  Expression_t275615326 * BinaryExpression_get_Right_m1981027998 (BinaryExpression_t974710719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C"  LambdaExpression_t3865948165 * BinaryExpression_get_Conversion_m591936751 (BinaryExpression_t974710719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
