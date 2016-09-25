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

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// pb_Object
struct pb_Object_t3489221196;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1355284823;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_Project2343073952.h"

// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::PointInCircumference(System.Single,System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pb_Math_PointInCircumference_m2349024030 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___angleInDegrees1, Vector2_t4282066565  ___origin2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::PointInSphere(System.Single,System.Single,System.Single)
extern "C"  Vector3_t4282066566  pb_Math_PointInSphere_m3189871836 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___latitudeAngle1, float ___longitudeAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::TriangleArea(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float pb_Math_TriangleArea_m505619181 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, Vector3_t4282066566  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::RotateAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t4282066565  pb_Math_RotateAroundPoint_m4159906869 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, Vector2_t4282066565  ___origin1, float ___theta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::ScaleAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pb_Math_ScaleAroundPoint_m4116526589 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, Vector2_t4282066565  ___origin1, Vector2_t4282066565  ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Perpendicular(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pb_Math_Perpendicular_m480704590 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___a0, Vector2_t4282066565  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Perpendicular(UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pb_Math_Perpendicular_m4084728794 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::ReflectPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pb_Math_ReflectPoint_m3452934659 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___point0, Vector2_t4282066565  ___a1, Vector2_t4282066565  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::DistancePointLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float pb_Math_DistancePointLineSegment_m1279455009 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___p0, Vector2_t4282066565  ___v1, Vector2_t4282066565  ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::GetLineSegmentIntersect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  bool pb_Math_GetLineSegmentIntersect_m3801673011 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___p00, Vector2_t4282066565  ___p11, Vector2_t4282066565  ___p22, Vector2_t4282066565  ___p33, Vector2_t4282066565 * ___intersect4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::GetLineSegmentIntersect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool pb_Math_GetLineSegmentIntersect_m1113192645 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___p00, Vector2_t4282066565  ___p11, Vector2_t4282066565  ___p22, Vector2_t4282066565  ___p33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::PointInPolygon(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  bool pb_Math_PointInPolygon_m2257599264 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___polygon0, Vector2_t4282066565  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::RayIntersectsTriangle(UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&)
extern "C"  bool pb_Math_RayIntersectsTriangle_m3084699504 (Il2CppObject * __this /* static, unused */, Ray_t3134616544  ___InRay0, Vector3_t4282066566  ___InTriangleA1, Vector3_t4282066566  ___InTriangleB2, Vector3_t4282066566  ___InTriangleC3, float* ___OutDistance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  pb_Math_Normal_m1909923405 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(pb_Object,ProBuilder2.Common.pb_Face)
extern "C"  Vector3_t4282066566  pb_Math_Normal_m4266691041 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, pb_Face_t882335176 * ___face1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Math.pb_Math::NormalTangentBitangent(pb_Object,ProBuilder2.Common.pb_Face,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void pb_Math_NormalTangentBitangent_m3770709337 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, pb_Face_t882335176 * ___face1, Vector3_t4282066566 * ___normal2, Vector3_t4282066566 * ___tangent3, Vector3_t4282066566 * ___bitangent4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(UnityEngine.Vector3[])
extern "C"  Vector3_t4282066566  pb_Math_Normal_m1101317893 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  Vector3_t4282066566  pb_Math_Normal_m4160225327 (Il2CppObject * __this /* static, unused */, List_1_t1355284822 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::LargestValue(UnityEngine.Vector3)
extern "C"  float pb_Math_LargestValue_m403284231 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::LargestValue(UnityEngine.Vector2)
extern "C"  float pb_Math_LargestValue_m403284200 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::SmallestVector2(UnityEngine.Vector2[])
extern "C"  Vector2_t4282066565  pb_Math_SmallestVector2_m2163057650 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::LargestVector2(UnityEngine.Vector2[])
extern "C"  Vector2_t4282066565  pb_Math_LargestVector2_m1764511545 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::BoundsCenter(UnityEngine.Vector3[])
extern "C"  Vector3_t4282066566  pb_Math_BoundsCenter_m2506054818 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Average(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  Vector3_t4282066566  pb_Math_Average_m2456804881 (Il2CppObject * __this /* static, unused */, List_1_t1355284822 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Average(UnityEngine.Vector3[])
extern "C"  Vector3_t4282066566  pb_Math_Average_m1327996131 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Average(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  Vector2_t4282066565  pb_Math_Average_m3427094927 (Il2CppObject * __this /* static, unused */, List_1_t1355284821 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Average(UnityEngine.Vector2[])
extern "C"  Vector2_t4282066565  pb_Math_Average_m3258585445 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 ProBuilder2.Math.pb_Math::Average(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  Vector4_t4282066567  pb_Math_Average_m1486514835 (Il2CppObject * __this /* static, unused */, List_1_t1355284823 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 ProBuilder2.Math.pb_Math::Average(UnityEngine.Vector4[])
extern "C"  Vector4_t4282066567  pb_Math_Average_m3692374113 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t701588350* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ProBuilder2.Math.pb_Math::Average(UnityEngine.Color[])
extern "C"  Color_t4194546905  pb_Math_Average_m1331015101 (Il2CppObject * __this /* static, unused */, ColorU5BU5D_t2441545636* ___Array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::Approx(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool pb_Math_Approx_m830321424 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v0, Vector3_t4282066566  ___b1, float ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::Approx(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  bool pb_Math_Approx_m412662058 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___a0, Color_t4194546905  ___b1, float ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Math.pb_Math::PlanarProject(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  Vector2U5BU5D_t4024180168* pb_Math_PlanarProject_m922897971 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___verts0, Vector3_t4282066566  ___planeNormal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Math.pb_Math::PlanarProject(UnityEngine.Vector3[],UnityEngine.Vector3,ProBuilder2.Common.ProjectionAxis)
extern "C"  Vector2U5BU5D_t4024180168* pb_Math_PlanarProject_m3872886230 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___verts0, Vector3_t4282066566  ___planeNormal1, int32_t ___projectionAxis2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::ProjectionAxisToVector(ProBuilder2.Common.ProjectionAxis)
extern "C"  Vector3_t4282066566  pb_Math_ProjectionAxisToVector_m3956757168 (Il2CppObject * __this /* static, unused */, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.ProjectionAxis ProBuilder2.Math.pb_Math::VectorToProjectionAxis(UnityEngine.Vector3)
extern "C"  int32_t pb_Math_VectorToProjectionAxis_m2425537296 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___plane0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
