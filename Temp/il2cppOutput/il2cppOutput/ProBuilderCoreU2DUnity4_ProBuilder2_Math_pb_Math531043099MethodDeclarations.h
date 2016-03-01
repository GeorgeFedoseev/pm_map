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
struct Vector2U5BU5D_t2741383957;
// pb_Object
struct pb_Object_t3489221196;
// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t27321463;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t3713759435;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_Project3001086759.h"

// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::PointInCircumference(System.Single,System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  pb_Math_PointInCircumference_m2349024030 (Object_t * __this /* static, unused */, float ___radius, float ___angleInDegrees, Vector2_t3525329788  ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::PointInSphere(System.Single,System.Single,System.Single)
extern "C"  Vector3_t3525329789  pb_Math_PointInSphere_m3189871836 (Object_t * __this /* static, unused */, float ___radius, float ___latitudeAngle, float ___longitudeAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::TriangleArea(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float pb_Math_TriangleArea_m505619181 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, Vector3_t3525329789  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::RotateAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  pb_Math_RotateAroundPoint_m4159906869 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___v, Vector2_t3525329788  ___origin, float ___theta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::ScaleAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  pb_Math_ScaleAroundPoint_m4116526589 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___v, Vector2_t3525329788  ___origin, Vector2_t3525329788  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Perpendicular(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  pb_Math_Perpendicular_m480704590 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Perpendicular(UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  pb_Math_Perpendicular_m4084728794 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::ReflectPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  pb_Math_ReflectPoint_m3452934659 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___point, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::DistancePointLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float pb_Math_DistancePointLineSegment_m1279455009 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___p, Vector2_t3525329788  ___v, Vector2_t3525329788  ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::GetLineSegmentIntersect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  bool pb_Math_GetLineSegmentIntersect_m3801673011 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___p0, Vector2_t3525329788  ___p1, Vector2_t3525329788  ___p2, Vector2_t3525329788  ___p3, Vector2_t3525329788 * ___intersect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::GetLineSegmentIntersect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool pb_Math_GetLineSegmentIntersect_m1113192645 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___p0, Vector2_t3525329788  ___p1, Vector2_t3525329788  ___p2, Vector2_t3525329788  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::PointInPolygon(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  bool pb_Math_PointInPolygon_m2257599264 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___polygon, Vector2_t3525329788  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::RayIntersectsTriangle(UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&)
extern "C"  bool pb_Math_RayIntersectsTriangle_m3084699504 (Object_t * __this /* static, unused */, Ray_t1522967639  ___InRay, Vector3_t3525329789  ___InTriangleA, Vector3_t3525329789  ___InTriangleB, Vector3_t3525329789  ___InTriangleC, float* ___OutDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  pb_Math_Normal_m1909923405 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___p0, Vector3_t3525329789  ___p1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(pb_Object,ProBuilder2.Common.pb_Face)
extern "C"  Vector3_t3525329789  pb_Math_Normal_m4266691041 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Math.pb_Math::NormalTangentBitangent(pb_Object,ProBuilder2.Common.pb_Face,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void pb_Math_NormalTangentBitangent_m3770709337 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, pb_Face_t2085788961 * ___face, Vector3_t3525329789 * ___normal, Vector3_t3525329789 * ___tangent, Vector3_t3525329789 * ___bitangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(UnityEngine.Vector3[])
extern "C"  Vector3_t3525329789  pb_Math_Normal_m1101317893 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Normal(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  Vector3_t3525329789  pb_Math_Normal_m4160225327 (Object_t * __this /* static, unused */, List_1_t27321462 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::LargestValue(UnityEngine.Vector3)
extern "C"  float pb_Math_LargestValue_m403284231 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Math.pb_Math::LargestValue(UnityEngine.Vector2)
extern "C"  float pb_Math_LargestValue_m403284200 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::SmallestVector2(UnityEngine.Vector2[])
extern "C"  Vector2_t3525329788  pb_Math_SmallestVector2_m2163057650 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::LargestVector2(UnityEngine.Vector2[])
extern "C"  Vector2_t3525329788  pb_Math_LargestVector2_m1764511545 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::BoundsCenter(UnityEngine.Vector3[])
extern "C"  Vector3_t3525329789  pb_Math_BoundsCenter_m2506054818 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Average(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  Vector3_t3525329789  pb_Math_Average_m2456804881 (Object_t * __this /* static, unused */, List_1_t27321462 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::Average(UnityEngine.Vector3[])
extern "C"  Vector3_t3525329789  pb_Math_Average_m1327996131 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Average(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  Vector2_t3525329788  pb_Math_Average_m3427094927 (Object_t * __this /* static, unused */, List_1_t27321461 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Math.pb_Math::Average(UnityEngine.Vector2[])
extern "C"  Vector2_t3525329788  pb_Math_Average_m3258585445 (Object_t * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 ProBuilder2.Math.pb_Math::Average(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  Vector4_t3525329790  pb_Math_Average_m1486514835 (Object_t * __this /* static, unused */, List_1_t27321463 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 ProBuilder2.Math.pb_Math::Average(UnityEngine.Vector4[])
extern "C"  Vector4_t3525329790  pb_Math_Average_m3692374113 (Object_t * __this /* static, unused */, Vector4U5BU5D_t3713759435* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ProBuilder2.Math.pb_Math::Average(UnityEngine.Color[])
extern "C"  Color_t1588175760  pb_Math_Average_m1331015101 (Object_t * __this /* static, unused */, ColorU5BU5D_t3477081137* ___Array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::Approx(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool pb_Math_Approx_m830321424 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___v, Vector3_t3525329789  ___b, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Math.pb_Math::Approx(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  bool pb_Math_Approx_m412662058 (Object_t * __this /* static, unused */, Color_t1588175760  ___a, Color_t1588175760  ___b, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Math.pb_Math::PlanarProject(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  Vector2U5BU5D_t2741383957* pb_Math_PlanarProject_m922897971 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___verts, Vector3_t3525329789  ___planeNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder2.Math.pb_Math::PlanarProject(UnityEngine.Vector3[],UnityEngine.Vector3,ProBuilder2.Common.ProjectionAxis)
extern "C"  Vector2U5BU5D_t2741383957* pb_Math_PlanarProject_m3872886230 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___verts, Vector3_t3525329789  ___planeNormal, int32_t ___projectionAxis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProBuilder2.Math.pb_Math::ProjectionAxisToVector(ProBuilder2.Common.ProjectionAxis)
extern "C"  Vector3_t3525329789  pb_Math_ProjectionAxisToVector_m3956757168 (Object_t * __this /* static, unused */, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.ProjectionAxis ProBuilder2.Math.pb_Math::VectorToProjectionAxis(UnityEngine.Vector3)
extern "C"  int32_t pb_Math_VectorToProjectionAxis_m2425537296 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
