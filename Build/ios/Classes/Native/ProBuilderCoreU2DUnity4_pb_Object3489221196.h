#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t2958380348;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3927813275;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t3246820444;
// System.String
struct String_t;
// System.Func`2<ProBuilder2.Common.pb_Face,pb_UV>
struct Func_2_t57014097;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// pb_Object
struct  pb_Object_t3489221196  : public MonoBehaviour_t3012272455
{
	// ProBuilder2.Common.pb_Face[] pb_Object::_quads
	pb_FaceU5BU5D_t2958380348* ____quads_2;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndices
	pb_IntArrayU5BU5D_t3927813275* ____sharedIndices_3;
	// UnityEngine.Vector3[] pb_Object::_vertices
	Vector3U5BU5D_t3227571696* ____vertices_4;
	// UnityEngine.Vector2[] pb_Object::_uv
	Vector2U5BU5D_t2741383957* ____uv_5;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndicesUV
	pb_IntArrayU5BU5D_t3927813275* ____sharedIndicesUV_6;
	// System.Int32[] pb_Object::_submeshTriangleCount
	Int32U5BU5D_t1809983122* ____submeshTriangleCount_7;
	// UnityEngine.Color[] pb_Object::_colors
	ColorU5BU5D_t3477081137* ____colors_8;
	// System.Single pb_Object::angleError
	float ___angleError_9;
	// System.Single pb_Object::areaError
	float ___areaError_10;
	// System.Single pb_Object::hardAngle
	float ___hardAngle_11;
	// System.Single pb_Object::packMargin
	float ___packMargin_12;
	// System.Int32[] pb_Object::m_selectedFaces
	Int32U5BU5D_t1809983122* ___m_selectedFaces_13;
	// ProBuilder2.Common.pb_Edge[] pb_Object::m_SelectedEdges
	pb_EdgeU5BU5D_t3246820444* ___m_SelectedEdges_14;
	// System.Int32[] pb_Object::m_selectedTriangles
	Int32U5BU5D_t1809983122* ___m_selectedTriangles_15;
	// UnityEngine.Vector3 pb_Object::previousTransform
	Vector3_t3525329789  ___previousTransform_16;
	// System.Boolean pb_Object::userCollisions
	bool ___userCollisions_17;
	// System.Boolean pb_Object::isSelectable
	bool ___isSelectable_18;
	// System.String pb_Object::_name
	String_t* ____name_19;
	// System.Boolean pb_Object::dontDestroyMeshOnDelete
	bool ___dontDestroyMeshOnDelete_20;
};
struct pb_Object_t3489221196_StaticFields{
	// System.Func`2<ProBuilder2.Common.pb_Face,pb_UV> pb_Object::CS$<>9__CachedAnonymousMethodDelegate8
	Func_2_t57014097 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21;
};
