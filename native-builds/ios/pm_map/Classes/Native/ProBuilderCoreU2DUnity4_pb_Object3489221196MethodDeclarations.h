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

// pb_Object
struct pb_Object_t3489221196;
// pb_SerializableObject
struct pb_SerializableObject_t1053321387;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t1009109529;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t1297549625;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material
struct Material_t3870600107;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;
// System.String
struct String_t;
// ProBuilder2.Common.pb_Edge
struct pb_Edge_t882308392;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// pb_UV
struct pb_UV_t106447886;
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t1903561241;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "ProBuilderCoreU2DUnity4_pb_SerializableObject1053321387.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"
#include "mscorlib_System_String7231557.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge882308392.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "ProBuilderCoreU2DUnity4_pb_UV106447886.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "ProBuilderCoreU2DUnity4_pb_Object_MeshRebuildReaso3715945519.h"

// System.Void pb_Object::Start()
extern "C"  void pb_Object_Start_m612402894 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::OnValidate()
extern "C"  void pb_Object_OnValidate_m1513766091 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::InitWithObject(pb_Object)
extern "C"  pb_Object_t3489221196 * pb_Object_InitWithObject_m2552822914 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::InitWithSerializableObject(pb_SerializableObject)
extern "C"  pb_Object_t3489221196 * pb_Object_InitWithSerializableObject_m554277828 (Il2CppObject * __this /* static, unused */, pb_SerializableObject_t1053321387 * ___serialized0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::CreateInstanceWithPoints(UnityEngine.Vector3[])
extern "C"  pb_Object_t3489221196 * pb_Object_CreateInstanceWithPoints_m2145483950 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___vertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::CreateInstanceWithVerticesFaces(UnityEngine.Vector3[],ProBuilder2.Common.pb_Face[])
extern "C"  pb_Object_t3489221196 * pb_Object_CreateInstanceWithVerticesFaces_m187637813 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___v0, pb_FaceU5BU5D_t1009109529* ___f1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::CreateInstanceWithElements(UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color[],ProBuilder2.Common.pb_Face[],ProBuilder2.Common.pb_IntArray[],ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_Object_t3489221196 * pb_Object_CreateInstanceWithElements_m3668675785 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___v0, Vector2U5BU5D_t4024180168* ___u1, ColorU5BU5D_t2441545636* ___c2, pb_FaceU5BU5D_t1009109529* ___f3, pb_IntArrayU5BU5D_t3984225016* ___si4, pb_IntArrayU5BU5D_t3984225016* ___si_uv5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get__faces()
extern "C"  pb_FaceU5BU5D_t1009109529* pb_Object_get__faces_m1713013226 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get_SelectedFaces()
extern "C"  pb_FaceU5BU5D_t1009109529* pb_Object_get_SelectedFaces_m1019478986 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_SelectedFaceCount()
extern "C"  int32_t pb_Object_get_SelectedFaceCount_m558577450 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] pb_Object::get_SelectedFaceIndices()
extern "C"  Int32U5BU5D_t3230847821* pb_Object_get_SelectedFaceIndices_m1489334624 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] pb_Object::get_SelectedTriangles()
extern "C"  Int32U5BU5D_t3230847821* pb_Object_get_SelectedTriangles_m115272513 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_SelectedTriangleCount()
extern "C"  int32_t pb_Object_get_SelectedTriangleCount_m3480406431 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] pb_Object::get_SelectedEdges()
extern "C"  pb_EdgeU5BU5D_t1297549625* pb_Object_get_SelectedEdges_m4054680842 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh pb_Object::get_msh()
extern "C"  Mesh_t4241756145 * pb_Object_get_msh_m1647262144 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::set_msh(UnityEngine.Mesh)
extern "C"  void pb_Object_set_msh_m1916058125 (pb_Object_t3489221196 * __this, Mesh_t4241756145 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get_faces()
extern "C"  pb_FaceU5BU5D_t1009109529* pb_Object_get_faces_m3078514949 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get_quads()
extern "C"  pb_FaceU5BU5D_t1009109529* pb_Object_get_quads_m526859739 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::get_sharedIndices()
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_Object_get_sharedIndices_m1068468516 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::get_sharedIndicesUV()
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_Object_get_sharedIndicesUV_m302445253 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_id()
extern "C"  int32_t pb_Object_get_id_m3823914474 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::get_vertices()
extern "C"  Vector3U5BU5D_t215400611* pb_Object_get_vertices_m3642473152 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] pb_Object::get_uv()
extern "C"  Vector2U5BU5D_t4024180168* pb_Object_get_uv_m3690379943 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] pb_Object::get_colors()
extern "C"  ColorU5BU5D_t2441545636* pb_Object_get_colors_m1496373770 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_faceCount()
extern "C"  int32_t pb_Object_get_faceCount_m1312271077 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_vertexCount()
extern "C"  int32_t pb_Object_get_vertexCount_m3029417278 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::TriangleCount()
extern "C"  int32_t pb_Object_TriangleCount_m2184850467 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material pb_Object::GetMaterial(ProBuilder2.Common.pb_Face)
extern "C"  Material_t3870600107 * pb_Object_GetMaterial_m3036318009 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::GetSharedIndices()
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_Object_GetSharedIndices_m1440449699 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::GetSharedIndicesUV()
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_Object_GetSharedIndicesUV_m1294076548 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::AddToFaceSelection(System.Int32)
extern "C"  void pb_Object_AddToFaceSelection_m3967181338 (pb_Object_t3489221196 * __this, int32_t ___indx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedFaces(ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_SetSelectedFaces_m2472166268 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t1009109529* ___faces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedFaces(System.Int32[])
extern "C"  void pb_Object_SetSelectedFaces_m2140670078 (pb_Object_t3489221196 * __this, Int32U5BU5D_t3230847821* ___t_faces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedEdges(ProBuilder2.Common.pb_Edge[])
extern "C"  void pb_Object_SetSelectedEdges_m2880466108 (pb_Object_t3489221196 * __this, pb_EdgeU5BU5D_t1297549625* ___edges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedTriangles(System.Int32[])
extern "C"  void pb_Object_SetSelectedTriangles_m4258190387 (pb_Object_t3489221196 * __this, Int32U5BU5D_t3230847821* ___tris0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RemoveFromFaceSelectionAtIndex(System.Int32)
extern "C"  void pb_Object_RemoveFromFaceSelectionAtIndex_m3151517285 (pb_Object_t3489221196 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RemoveFromFaceSelection(ProBuilder2.Common.pb_Face)
extern "C"  void pb_Object_RemoveFromFaceSelection_m1893089724 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::ClearSelection()
extern "C"  void pb_Object_ClearSelection_m3062062453 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetName(System.String)
extern "C"  void pb_Object_SetName_m3278806185 (pb_Object_t3489221196 * __this, String_t* _____name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetVertices(UnityEngine.Vector3[])
extern "C"  void pb_Object_SetVertices_m3032772784 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t215400611* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUV(UnityEngine.Vector2[])
extern "C"  void pb_Object_SetUV_m147853065 (pb_Object_t3489221196 * __this, Vector2U5BU5D_t4024180168* ___uvs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaces(ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_SetFaces_m2892295959 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t1009109529* ____qds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSharedIndices(ProBuilder2.Common.pb_IntArray[])
extern "C"  void pb_Object_SetSharedIndices_m3094900726 (pb_Object_t3489221196 * __this, pb_IntArrayU5BU5D_t3984225016* ___si0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSharedIndicesUV(ProBuilder2.Common.pb_IntArray[])
extern "C"  void pb_Object_SetSharedIndicesUV_m2260830487 (pb_Object_t3489221196 * __this, pb_IntArrayU5BU5D_t3984225016* ___si0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::GeometryWithPoints(UnityEngine.Vector3[])
extern "C"  void pb_Object_GeometryWithPoints_m1262185414 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t215400611* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::GeometryWithVerticesFaces(UnityEngine.Vector3[],ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_GeometryWithVerticesFaces_m1681482573 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t215400611* ___v0, pb_FaceU5BU5D_t1009109529* ___f1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::GeometryWithVerticesFacesIndices(UnityEngine.Vector3[],ProBuilder2.Common.pb_Face[],ProBuilder2.Common.pb_IntArray[])
extern "C"  void pb_Object_GeometryWithVerticesFacesIndices_m1674334482 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t215400611* ___v0, pb_FaceU5BU5D_t1009109529* ___f1, pb_IntArrayU5BU5D_t3984225016* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean pb_Object::ReconstructMesh()
extern "C"  bool pb_Object_ReconstructMesh_m420626803 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetVertices(ProBuilder2.Common.pb_Face)
extern "C"  Vector3U5BU5D_t215400611* pb_Object_GetVertices_m667944898 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetNormals(ProBuilder2.Common.pb_Face)
extern "C"  Vector3U5BU5D_t215400611* pb_Object_GetNormals_m1621425059 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetVertices(System.Int32[])
extern "C"  Vector3U5BU5D_t215400611* pb_Object_GetVertices_m2116471394 (pb_Object_t3489221196 * __this, Int32U5BU5D_t3230847821* ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] pb_Object::GetUVs(System.Int32[])
extern "C"  Vector2U5BU5D_t4024180168* pb_Object_GetUVs_m3485128040 (pb_Object_t3489221196 * __this, Int32U5BU5D_t3230847821* ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetVertices(ProBuilder2.Common.pb_Edge)
extern "C"  Vector3U5BU5D_t215400611* pb_Object_GetVertices_m667114594 (pb_Object_t3489221196 * __this, pb_Edge_t882308392 * ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> pb_Object::GetVertices(System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t1355284822 * pb_Object_GetVertices_m2451955466 (pb_Object_t3489221196 * __this, List_1_t2522024052 * ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::ToMesh()
extern "C"  void pb_Object_ToMesh_m2820322686 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::MakeUnique()
extern "C"  void pb_Object_MakeUnique_m3540003221 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::Refresh()
extern "C"  void pb_Object_Refresh_m1674759239 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::UnusedTextureGroup(System.Int32)
extern "C"  int32_t pb_Object_UnusedTextureGroup_m3931884241 (pb_Object_t3489221196 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::UnusedElementGroup(System.Int32)
extern "C"  int32_t pb_Object_UnusedElementGroup_m2822064976 (pb_Object_t3489221196 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::UnusedTextureGroup()
extern "C"  int32_t pb_Object_UnusedTextureGroup_m874665344 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshUV()
extern "C"  void pb_Object_RefreshUV_m3127245096 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshUV(ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_RefreshUV_m1185286805 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t1009109529* ___faces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceMaterial(ProBuilder2.Common.pb_Face,UnityEngine.Material)
extern "C"  void pb_Object_SetFaceMaterial_m1895552935 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___quad0, Material_t3870600107 * ___mat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceMaterial(ProBuilder2.Common.pb_Face[],UnityEngine.Material)
extern "C"  void pb_Object_SetFaceMaterial_m277183369 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t1009109529* ___quad0, Material_t3870600107 * ___mat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceUV(ProBuilder2.Common.pb_Face,pb_UV)
extern "C"  void pb_Object_SetFaceUV_m2935283865 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, pb_UV_t106447886 * ___uvParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUVs(ProBuilder2.Common.pb_Face,UnityEngine.Vector2[])
extern "C"  void pb_Object_SetUVs_m4542247 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, Vector2U5BU5D_t4024180168* ___uvs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUVs(ProBuilder2.Common.pb_Face[],UnityEngine.Vector2[][])
extern "C"  void pb_Object_SetUVs_m3202708579 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t1009109529* ___quad0, Vector2U5BU5DU5BU5D_t1903561241* ___uvs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUV2(UnityEngine.Vector2[])
extern "C"  void pb_Object_SetUV2_m3518138035 (pb_Object_t3489221196 * __this, Vector2U5BU5D_t4024180168* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetColors(UnityEngine.Color[])
extern "C"  void pb_Object_SetColors_m338678182 (pb_Object_t3489221196 * __this, ColorU5BU5D_t2441545636* ___InColors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceColor(ProBuilder2.Common.pb_Face,UnityEngine.Color)
extern "C"  void pb_Object_SetFaceColor_m1534616617 (pb_Object_t3489221196 * __this, pb_Face_t882335176 * ___face0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshColor()
extern "C"  void pb_Object_RefreshColor_m3608564734 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshTangent()
extern "C"  void pb_Object_RefreshTangent_m4036732896 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshNormals()
extern "C"  void pb_Object_RefreshNormals_m49166407 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SmoothPerGroups()
extern "C"  void pb_Object_SmoothPerGroups_m1212088239 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::OnDestroy()
extern "C"  void pb_Object_OnDestroy_m2175544263 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String pb_Object::ToString()
extern "C"  String_t* pb_Object_ToString_m1689420831 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String pb_Object::ToStringDetailed()
extern "C"  String_t* pb_Object_ToStringDetailed_m517819119 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RebuildFaceCaches()
extern "C"  void pb_Object_RebuildFaceCaches_m198423701 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object/MeshRebuildReason pb_Object::Verify()
extern "C"  int32_t pb_Object_Verify_m1273576171 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::.ctor()
extern "C"  void pb_Object__ctor_m1665265102 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_UV pb_Object::<ToStringDetailed>b__7(ProBuilder2.Common.pb_Face)
extern "C"  pb_UV_t106447886 * pb_Object_U3CToStringDetailedU3Eb__7_m2114350363 (Il2CppObject * __this /* static, unused */, pb_Face_t882335176 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
