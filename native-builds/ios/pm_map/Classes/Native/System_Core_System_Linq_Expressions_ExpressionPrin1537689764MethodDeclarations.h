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

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t1537689764;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t275615326;
// System.Linq.Expressions.ElementInit
struct ElementInit_t4153286382;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3342028749;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t200720105;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t974710719;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t2638685721;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t2412990242;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t898168064;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t2166942179;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t441367320;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1914889245;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3263082317;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t2047291603;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t231913295;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3865948165;
// System.Linq.Expressions.NewExpression
struct NewExpression_t4031407514;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t1080187464;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t1553729996;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3559217623;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t476269710;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "System_Core_System_Linq_Expressions_Expression275615326.h"
#include "System_Core_System_Linq_Expressions_ElementInit4153286382.h"
#include "System_Core_System_Linq_Expressions_MemberBinding3342028749.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Core_System_Linq_Expressions_UnaryExpression200720105.h"
#include "System_Core_System_Linq_Expressions_BinaryExpressio974710719.h"
#include "System_Core_System_Linq_Expressions_TypeBinaryExpr2638685721.h"
#include "System_Core_System_Linq_Expressions_ConstantExpres2412990242.h"
#include "System_Core_System_Linq_Expressions_ConditionalExpr898168064.h"
#include "System_Core_System_Linq_Expressions_ParameterExpre2166942179.h"
#include "System_Core_System_Linq_Expressions_MemberExpressio441367320.h"
#include "System_Core_System_Linq_Expressions_MethodCallExpr1914889245.h"
#include "System_Core_System_Linq_Expressions_MemberAssignme3263082317.h"
#include "System_Core_System_Linq_Expressions_MemberMemberBi2047291603.h"
#include "System_Core_System_Linq_Expressions_MemberListBindi231913295.h"
#include "System_Core_System_Linq_Expressions_LambdaExpressi3865948165.h"
#include "System_Core_System_Linq_Expressions_NewExpression4031407514.h"
#include "System_Core_System_Linq_Expressions_MemberInitExpr1080187464.h"
#include "System_Core_System_Linq_Expressions_ListInitExpres1553729996.h"
#include "System_Core_System_Linq_Expressions_NewArrayExpres3559217623.h"
#include "System_Core_System_Linq_Expressions_InvocationExpre476269710.h"

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C"  void ExpressionPrinter__ctor_m4107327567 (ExpressionPrinter_t1537689764 * __this, StringBuilder_t243639308 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C"  void ExpressionPrinter__ctor_m4051061755 (ExpressionPrinter_t1537689764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C"  String_t* ExpressionPrinter_ToString_m547071960 (Il2CppObject * __this /* static, unused */, Expression_t275615326 * ___expression0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C"  String_t* ExpressionPrinter_ToString_m2333420822 (Il2CppObject * __this /* static, unused */, ElementInit_t4153286382 * ___init0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C"  String_t* ExpressionPrinter_ToString_m522507863 (Il2CppObject * __this /* static, unused */, MemberBinding_t3342028749 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C"  void ExpressionPrinter_Print_m3017882684 (ExpressionPrinter_t1537689764 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C"  void ExpressionPrinter_Print_m3239993038 (ExpressionPrinter_t1537689764 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C"  void ExpressionPrinter_Print_m319347368 (ExpressionPrinter_t1537689764 * __this, String_t* ___str0, ObjectU5BU5D_t1108656482* ___objs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C"  void ExpressionPrinter_VisitElementInitializer_m1350232926 (ExpressionPrinter_t1537689764 * __this, ElementInit_t4153286382 * ___initializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C"  void ExpressionPrinter_VisitUnary_m2081576480 (ExpressionPrinter_t1537689764 * __this, UnaryExpression_t200720105 * ___unary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C"  String_t* ExpressionPrinter_OperatorToString_m571184795 (Il2CppObject * __this /* static, unused */, BinaryExpression_t974710719 * ___binary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C"  bool ExpressionPrinter_IsBoolean_m2211668817 (Il2CppObject * __this /* static, unused */, Expression_t275615326 * ___expression0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C"  void ExpressionPrinter_PrintArrayIndex_m327605732 (ExpressionPrinter_t1537689764 * __this, BinaryExpression_t974710719 * ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C"  void ExpressionPrinter_VisitBinary_m2717788938 (ExpressionPrinter_t1537689764 * __this, BinaryExpression_t974710719 * ___binary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C"  void ExpressionPrinter_VisitTypeIs_m787702451 (ExpressionPrinter_t1537689764 * __this, TypeBinaryExpression_t2638685721 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C"  void ExpressionPrinter_VisitConstant_m2755257194 (ExpressionPrinter_t1537689764 * __this, ConstantExpression_t2412990242 * ___constant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C"  bool ExpressionPrinter_HasStringRepresentation_m2360999695 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C"  void ExpressionPrinter_VisitConditional_m1439796594 (ExpressionPrinter_t1537689764 * __this, ConditionalExpression_t898168064 * ___conditional0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C"  void ExpressionPrinter_VisitParameter_m1572882092 (ExpressionPrinter_t1537689764 * __this, ParameterExpression_t2166942179 * ___parameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C"  void ExpressionPrinter_VisitMemberAccess_m3679421678 (ExpressionPrinter_t1537689764 * __this, MemberExpression_t441367320 * ___access0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C"  void ExpressionPrinter_VisitMethodCall_m3513915722 (ExpressionPrinter_t1537689764 * __this, MethodCallExpression_t1914889245 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C"  void ExpressionPrinter_VisitMemberAssignment_m4128100098 (ExpressionPrinter_t1537689764 * __this, MemberAssignment_t3263082317 * ___assignment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C"  void ExpressionPrinter_VisitMemberMemberBinding_m3091544212 (ExpressionPrinter_t1537689764 * __this, MemberMemberBinding_t2047291603 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C"  void ExpressionPrinter_VisitMemberListBinding_m3512713308 (ExpressionPrinter_t1537689764 * __this, MemberListBinding_t231913295 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C"  void ExpressionPrinter_VisitLambda_m3497302986 (ExpressionPrinter_t1537689764 * __this, LambdaExpression_t3865948165 * ___lambda0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C"  void ExpressionPrinter_VisitNew_m3016434622 (ExpressionPrinter_t1537689764 * __this, NewExpression_t4031407514 * ___nex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C"  void ExpressionPrinter_VisitMemberInit_m1317954858 (ExpressionPrinter_t1537689764 * __this, MemberInitExpression_t1080187464 * ___init0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C"  void ExpressionPrinter_VisitListInit_m3532787242 (ExpressionPrinter_t1537689764 * __this, ListInitExpression_t1553729996 * ___init0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C"  void ExpressionPrinter_VisitNewArray_m3367521482 (ExpressionPrinter_t1537689764 * __this, NewArrayExpression_t3559217623 * ___newArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C"  void ExpressionPrinter_VisitInvocation_m3565126378 (ExpressionPrinter_t1537689764 * __this, InvocationExpression_t476269710 * ___invocation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
