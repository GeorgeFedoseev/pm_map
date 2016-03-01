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
struct Vector3U5BU5D_t3227571696;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t2958380348;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3927813275;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t3246820444;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Material
struct Material_t1886596500;
// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// System.String
struct String_t;
// ProBuilder2.Common.pb_Edge
struct pb_Edge_t2085762177;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// pb_UV
struct pb_UV_t106447886;
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t2739076344;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "ProBuilderCoreU2DUnity4_pb_SerializableObject1053321387.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"
#include "mscorlib_System_String968488902.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge2085762177.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "ProBuilderCoreU2DUnity4_pb_UV106447886.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "ProBuilderCoreU2DUnity4_pb_Object_MeshRebuildReaso1411678514.h"

// System.Void pb_Object::Start()
extern "C"  void pb_Object_Start_m612402894 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::OnValidate()
extern "C"  void pb_Object_OnValidate_m1513766091 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::InitWithObject(pb_Object)
extern "C"  pb_Object_t3489221196 * pb_Object_InitWithObject_m2552822914 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::InitWithSerializableObject(pb_SerializableObject)
extern "C"  pb_Object_t3489221196 * pb_Object_InitWithSerializableObject_m554277828 (Object_t * __this /* static, unused */, pb_SerializableObject_t1053321387 * ___serialized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::CreateInstanceWithPoints(UnityEngine.Vector3[])
extern "C"  pb_Object_t3489221196 * pb_Object_CreateInstanceWithPoints_m2145483950 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::CreateInstanceWithVerticesFaces(UnityEngine.Vector3[],ProBuilder2.Common.pb_Face[])
extern "C"  pb_Object_t3489221196 * pb_Object_CreateInstanceWithVerticesFaces_m187637813 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___v, pb_FaceU5BU5D_t2958380348* ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Object::CreateInstanceWithElements(UnityEngine.Vector3[],UnityEngine.Vector2[],UnityEngine.Color[],ProBuilder2.Common.pb_Face[],ProBuilder2.Common.pb_IntArray[],ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_Object_t3489221196 * pb_Object_CreateInstanceWithElements_m3668675785 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___v, Vector2U5BU5D_t2741383957* ___u, ColorU5BU5D_t3477081137* ___c, pb_FaceU5BU5D_t2958380348* ___f, pb_IntArrayU5BU5D_t3927813275* ___si, pb_IntArrayU5BU5D_t3927813275* ___si_uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get__faces()
extern "C"  pb_FaceU5BU5D_t2958380348* pb_Object_get__faces_m1713013226 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get_SelectedFaces()
extern "C"  pb_FaceU5BU5D_t2958380348* pb_Object_get_SelectedFaces_m1019478986 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_SelectedFaceCount()
extern "C"  int32_t pb_Object_get_SelectedFaceCount_m558577450 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] pb_Object::get_SelectedFaceIndices()
extern "C"  Int32U5BU5D_t1809983122* pb_Object_get_SelectedFaceIndices_m1489334624 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] pb_Object::get_SelectedTriangles()
extern "C"  Int32U5BU5D_t1809983122* pb_Object_get_SelectedTriangles_m115272513 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_SelectedTriangleCount()
extern "C"  int32_t pb_Object_get_SelectedTriangleCount_m3480406431 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] pb_Object::get_SelectedEdges()
extern "C"  pb_EdgeU5BU5D_t3246820444* pb_Object_get_SelectedEdges_m4054680842 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh pb_Object::get_msh()
extern "C"  Mesh_t1525280346 * pb_Object_get_msh_m1647262144 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::set_msh(UnityEngine.Mesh)
extern "C"  void pb_Object_set_msh_m1916058125 (pb_Object_t3489221196 * __this, Mesh_t1525280346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get_faces()
extern "C"  pb_FaceU5BU5D_t2958380348* pb_Object_get_faces_m3078514949 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face[] pb_Object::get_quads()
extern "C"  pb_FaceU5BU5D_t2958380348* pb_Object_get_quads_m526859739 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::get_sharedIndices()
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_Object_get_sharedIndices_m1068468516 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::get_sharedIndicesUV()
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_Object_get_sharedIndicesUV_m302445253 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_id()
extern "C"  int32_t pb_Object_get_id_m3823914474 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::get_vertices()
extern "C"  Vector3U5BU5D_t3227571696* pb_Object_get_vertices_m3642473152 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] pb_Object::get_uv()
extern "C"  Vector2U5BU5D_t2741383957* pb_Object_get_uv_m3690379943 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] pb_Object::get_colors()
extern "C"  ColorU5BU5D_t3477081137* pb_Object_get_colors_m1496373770 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_faceCount()
extern "C"  int32_t pb_Object_get_faceCount_m1312271077 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_vertexCount()
extern "C"  int32_t pb_Object_get_vertexCount_m3029417278 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::TriangleCount()
extern "C"  int32_t pb_Object_TriangleCount_m2184850467 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material pb_Object::GetMaterial(ProBuilder2.Common.pb_Face)
extern "C"  Material_t1886596500 * pb_Object_GetMaterial_m3036318009 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::GetSharedIndices()
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_Object_GetSharedIndices_m1440449699 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::GetSharedIndicesUV()
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_Object_GetSharedIndicesUV_m1294076548 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::AddToFaceSelection(System.Int32)
extern "C"  void pb_Object_AddToFaceSelection_m3967181338 (pb_Object_t3489221196 * __this, int32_t ___indx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedFaces(ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_SetSelectedFaces_m2472166268 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t2958380348* ___faces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedFaces(System.Int32[])
extern "C"  void pb_Object_SetSelectedFaces_m2140670078 (pb_Object_t3489221196 * __this, Int32U5BU5D_t1809983122* ___t_faces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedEdges(ProBuilder2.Common.pb_Edge[])
extern "C"  void pb_Object_SetSelectedEdges_m2880466108 (pb_Object_t3489221196 * __this, pb_EdgeU5BU5D_t3246820444* ___edges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSelectedTriangles(System.Int32[])
extern "C"  void pb_Object_SetSelectedTriangles_m4258190387 (pb_Object_t3489221196 * __this, Int32U5BU5D_t1809983122* ___tris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RemoveFromFaceSelectionAtIndex(System.Int32)
extern "C"  void pb_Object_RemoveFromFaceSelectionAtIndex_m3151517285 (pb_Object_t3489221196 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RemoveFromFaceSelection(ProBuilder2.Common.pb_Face)
extern "C"  void pb_Object_RemoveFromFaceSelection_m1893089724 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::ClearSelection()
extern "C"  void pb_Object_ClearSelection_m3062062453 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetName(System.String)
extern "C"  void pb_Object_SetName_m3278806185 (pb_Object_t3489221196 * __this, String_t* _____name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetVertices(UnityEngine.Vector3[])
extern "C"  void pb_Object_SetVertices_m3032772784 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t3227571696* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUV(UnityEngine.Vector2[])
extern "C"  void pb_Object_SetUV_m147853065 (pb_Object_t3489221196 * __this, Vector2U5BU5D_t2741383957* ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaces(ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_SetFaces_m2892295959 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t2958380348* ____qds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSharedIndices(ProBuilder2.Common.pb_IntArray[])
extern "C"  void pb_Object_SetSharedIndices_m3094900726 (pb_Object_t3489221196 * __this, pb_IntArrayU5BU5D_t3927813275* ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetSharedIndicesUV(ProBuilder2.Common.pb_IntArray[])
extern "C"  void pb_Object_SetSharedIndicesUV_m2260830487 (pb_Object_t3489221196 * __this, pb_IntArrayU5BU5D_t3927813275* ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::GeometryWithPoints(UnityEngine.Vector3[])
extern "C"  void pb_Object_GeometryWithPoints_m1262185414 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t3227571696* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::GeometryWithVerticesFaces(UnityEngine.Vector3[],ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_GeometryWithVerticesFaces_m1681482573 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t3227571696* ___v, pb_FaceU5BU5D_t2958380348* ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::GeometryWithVerticesFacesIndices(UnityEngine.Vector3[],ProBuilder2.Common.pb_Face[],ProBuilder2.Common.pb_IntArray[])
extern "C"  void pb_Object_GeometryWithVerticesFacesIndices_m1674334482 (pb_Object_t3489221196 * __this, Vector3U5BU5D_t3227571696* ___v, pb_FaceU5BU5D_t2958380348* ___f, pb_IntArrayU5BU5D_t3927813275* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean pb_Object::ReconstructMesh()
extern "C"  bool pb_Object_ReconstructMesh_m420626803 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetVertices(ProBuilder2.Common.pb_Face)
extern "C"  Vector3U5BU5D_t3227571696* pb_Object_GetVertices_m667944898 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetNormals(ProBuilder2.Common.pb_Face)
extern "C"  Vector3U5BU5D_t3227571696* pb_Object_GetNormals_m1621425059 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetVertices(System.Int32[])
extern "C"  Vector3U5BU5D_t3227571696* pb_Object_GetVertices_m2116471394 (pb_Object_t3489221196 * __this, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] pb_Object::GetUVs(System.Int32[])
extern "C"  Vector2U5BU5D_t2741383957* pb_Object_GetUVs_m3485128040 (pb_Object_t3489221196 * __this, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::GetVertices(ProBuilder2.Common.pb_Edge)
extern "C"  Vector3U5BU5D_t3227571696* pb_Object_GetVertices_m667114594 (pb_Object_t3489221196 * __this, pb_Edge_t2085762177 * ___edge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> pb_Object::GetVertices(System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t27321462 * pb_Object_GetVertices_m2451955466 (pb_Object_t3489221196 * __this, List_1_t3644373756 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::ToMesh()
extern "C"  void pb_Object_ToMesh_m2820322686 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::MakeUnique()
extern "C"  void pb_Object_MakeUnique_m3540003221 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::Refresh()
extern "C"  void pb_Object_Refresh_m1674759239 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::UnusedTextureGroup(System.Int32)
extern "C"  int32_t pb_Object_UnusedTextureGroup_m3931884241 (pb_Object_t3489221196 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::UnusedElementGroup(System.Int32)
extern "C"  int32_t pb_Object_UnusedElementGroup_m2822064976 (pb_Object_t3489221196 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::UnusedTextureGroup()
extern "C"  int32_t pb_Object_UnusedTextureGroup_m874665344 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshUV()
extern "C"  void pb_Object_RefreshUV_m3127245096 (pb_Object_t3489221196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::RefreshUV(ProBuilder2.Common.pb_Face[])
extern "C"  void pb_Object_RefreshUV_m1185286805 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t2958380348* ___faces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceMaterial(ProBuilder2.Common.pb_Face,UnityEngine.Material)
extern "C"  void pb_Object_SetFaceMaterial_m1895552935 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___quad, Material_t1886596500 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceMaterial(ProBuilder2.Common.pb_Face[],UnityEngine.Material)
extern "C"  void pb_Object_SetFaceMaterial_m277183369 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t2958380348* ___quad, Material_t1886596500 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceUV(ProBuilder2.Common.pb_Face,pb_UV)
extern "C"  void pb_Object_SetFaceUV_m2935283865 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, pb_UV_t106447886 * ___uvParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUVs(ProBuilder2.Common.pb_Face,UnityEngine.Vector2[])
extern "C"  void pb_Object_SetUVs_m4542247 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, Vector2U5BU5D_t2741383957* ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUVs(ProBuilder2.Common.pb_Face[],UnityEngine.Vector2[][])
extern "C"  void pb_Object_SetUVs_m3202708579 (pb_Object_t3489221196 * __this, pb_FaceU5BU5D_t2958380348* ___quad, Vector2U5BU5DU5BU5D_t2739076344* ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetUV2(UnityEngine.Vector2[])
extern "C"  void pb_Object_SetUV2_m3518138035 (pb_Object_t3489221196 * __this, Vector2U5BU5D_t2741383957* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetColors(UnityEngine.Color[])
extern "C"  void pb_Object_SetColors_m338678182 (pb_Object_t3489221196 * __this, ColorU5BU5D_t3477081137* ___InColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void pb_Object::SetFaceColor(ProBuilder2.Common.pb_Face,UnityEngine.Color)
extern "C"  void pb_Object_SetFaceColor_m1534616617 (pb_Object_t3489221196 * __this, pb_Face_t2085788961 * ___face, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
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
extern "C"  pb_UV_t106447886 * pb_Object_U3CToStringDetailedU3Eb__7_m2114350363 (Object_t * __this /* static, unused */, pb_Face_t2085788961 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
