#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t1009109529;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t1297549625;
// System.String
struct String_t;
// System.Func`2<ProBuilder2.Common.pb_Face,pb_UV>
struct Func_2_t315615883;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pb_Object
struct  pb_Object_t3489221196  : public MonoBehaviour_t667441552
{
public:
	// ProBuilder2.Common.pb_Face[] pb_Object::_quads
	pb_FaceU5BU5D_t1009109529* ____quads_2;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndices
	pb_IntArrayU5BU5D_t3984225016* ____sharedIndices_3;
	// UnityEngine.Vector3[] pb_Object::_vertices
	Vector3U5BU5D_t215400611* ____vertices_4;
	// UnityEngine.Vector2[] pb_Object::_uv
	Vector2U5BU5D_t4024180168* ____uv_5;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndicesUV
	pb_IntArrayU5BU5D_t3984225016* ____sharedIndicesUV_6;
	// System.Int32[] pb_Object::_submeshTriangleCount
	Int32U5BU5D_t3230847821* ____submeshTriangleCount_7;
	// UnityEngine.Color[] pb_Object::_colors
	ColorU5BU5D_t2441545636* ____colors_8;
	// System.Single pb_Object::angleError
	float ___angleError_9;
	// System.Single pb_Object::areaError
	float ___areaError_10;
	// System.Single pb_Object::hardAngle
	float ___hardAngle_11;
	// System.Single pb_Object::packMargin
	float ___packMargin_12;
	// System.Int32[] pb_Object::m_selectedFaces
	Int32U5BU5D_t3230847821* ___m_selectedFaces_13;
	// ProBuilder2.Common.pb_Edge[] pb_Object::m_SelectedEdges
	pb_EdgeU5BU5D_t1297549625* ___m_SelectedEdges_14;
	// System.Int32[] pb_Object::m_selectedTriangles
	Int32U5BU5D_t3230847821* ___m_selectedTriangles_15;
	// UnityEngine.Vector3 pb_Object::previousTransform
	Vector3_t4282066566  ___previousTransform_16;
	// System.Boolean pb_Object::userCollisions
	bool ___userCollisions_17;
	// System.Boolean pb_Object::isSelectable
	bool ___isSelectable_18;
	// System.String pb_Object::_name
	String_t* ____name_19;
	// System.Boolean pb_Object::dontDestroyMeshOnDelete
	bool ___dontDestroyMeshOnDelete_20;

public:
	inline static int32_t get_offset_of__quads_2() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____quads_2)); }
	inline pb_FaceU5BU5D_t1009109529* get__quads_2() const { return ____quads_2; }
	inline pb_FaceU5BU5D_t1009109529** get_address_of__quads_2() { return &____quads_2; }
	inline void set__quads_2(pb_FaceU5BU5D_t1009109529* value)
	{
		____quads_2 = value;
		Il2CppCodeGenWriteBarrier(&____quads_2, value);
	}

	inline static int32_t get_offset_of__sharedIndices_3() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____sharedIndices_3)); }
	inline pb_IntArrayU5BU5D_t3984225016* get__sharedIndices_3() const { return ____sharedIndices_3; }
	inline pb_IntArrayU5BU5D_t3984225016** get_address_of__sharedIndices_3() { return &____sharedIndices_3; }
	inline void set__sharedIndices_3(pb_IntArrayU5BU5D_t3984225016* value)
	{
		____sharedIndices_3 = value;
		Il2CppCodeGenWriteBarrier(&____sharedIndices_3, value);
	}

	inline static int32_t get_offset_of__vertices_4() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____vertices_4)); }
	inline Vector3U5BU5D_t215400611* get__vertices_4() const { return ____vertices_4; }
	inline Vector3U5BU5D_t215400611** get_address_of__vertices_4() { return &____vertices_4; }
	inline void set__vertices_4(Vector3U5BU5D_t215400611* value)
	{
		____vertices_4 = value;
		Il2CppCodeGenWriteBarrier(&____vertices_4, value);
	}

	inline static int32_t get_offset_of__uv_5() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____uv_5)); }
	inline Vector2U5BU5D_t4024180168* get__uv_5() const { return ____uv_5; }
	inline Vector2U5BU5D_t4024180168** get_address_of__uv_5() { return &____uv_5; }
	inline void set__uv_5(Vector2U5BU5D_t4024180168* value)
	{
		____uv_5 = value;
		Il2CppCodeGenWriteBarrier(&____uv_5, value);
	}

	inline static int32_t get_offset_of__sharedIndicesUV_6() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____sharedIndicesUV_6)); }
	inline pb_IntArrayU5BU5D_t3984225016* get__sharedIndicesUV_6() const { return ____sharedIndicesUV_6; }
	inline pb_IntArrayU5BU5D_t3984225016** get_address_of__sharedIndicesUV_6() { return &____sharedIndicesUV_6; }
	inline void set__sharedIndicesUV_6(pb_IntArrayU5BU5D_t3984225016* value)
	{
		____sharedIndicesUV_6 = value;
		Il2CppCodeGenWriteBarrier(&____sharedIndicesUV_6, value);
	}

	inline static int32_t get_offset_of__submeshTriangleCount_7() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____submeshTriangleCount_7)); }
	inline Int32U5BU5D_t3230847821* get__submeshTriangleCount_7() const { return ____submeshTriangleCount_7; }
	inline Int32U5BU5D_t3230847821** get_address_of__submeshTriangleCount_7() { return &____submeshTriangleCount_7; }
	inline void set__submeshTriangleCount_7(Int32U5BU5D_t3230847821* value)
	{
		____submeshTriangleCount_7 = value;
		Il2CppCodeGenWriteBarrier(&____submeshTriangleCount_7, value);
	}

	inline static int32_t get_offset_of__colors_8() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____colors_8)); }
	inline ColorU5BU5D_t2441545636* get__colors_8() const { return ____colors_8; }
	inline ColorU5BU5D_t2441545636** get_address_of__colors_8() { return &____colors_8; }
	inline void set__colors_8(ColorU5BU5D_t2441545636* value)
	{
		____colors_8 = value;
		Il2CppCodeGenWriteBarrier(&____colors_8, value);
	}

	inline static int32_t get_offset_of_angleError_9() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___angleError_9)); }
	inline float get_angleError_9() const { return ___angleError_9; }
	inline float* get_address_of_angleError_9() { return &___angleError_9; }
	inline void set_angleError_9(float value)
	{
		___angleError_9 = value;
	}

	inline static int32_t get_offset_of_areaError_10() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___areaError_10)); }
	inline float get_areaError_10() const { return ___areaError_10; }
	inline float* get_address_of_areaError_10() { return &___areaError_10; }
	inline void set_areaError_10(float value)
	{
		___areaError_10 = value;
	}

	inline static int32_t get_offset_of_hardAngle_11() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___hardAngle_11)); }
	inline float get_hardAngle_11() const { return ___hardAngle_11; }
	inline float* get_address_of_hardAngle_11() { return &___hardAngle_11; }
	inline void set_hardAngle_11(float value)
	{
		___hardAngle_11 = value;
	}

	inline static int32_t get_offset_of_packMargin_12() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___packMargin_12)); }
	inline float get_packMargin_12() const { return ___packMargin_12; }
	inline float* get_address_of_packMargin_12() { return &___packMargin_12; }
	inline void set_packMargin_12(float value)
	{
		___packMargin_12 = value;
	}

	inline static int32_t get_offset_of_m_selectedFaces_13() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___m_selectedFaces_13)); }
	inline Int32U5BU5D_t3230847821* get_m_selectedFaces_13() const { return ___m_selectedFaces_13; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_selectedFaces_13() { return &___m_selectedFaces_13; }
	inline void set_m_selectedFaces_13(Int32U5BU5D_t3230847821* value)
	{
		___m_selectedFaces_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_selectedFaces_13, value);
	}

	inline static int32_t get_offset_of_m_SelectedEdges_14() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___m_SelectedEdges_14)); }
	inline pb_EdgeU5BU5D_t1297549625* get_m_SelectedEdges_14() const { return ___m_SelectedEdges_14; }
	inline pb_EdgeU5BU5D_t1297549625** get_address_of_m_SelectedEdges_14() { return &___m_SelectedEdges_14; }
	inline void set_m_SelectedEdges_14(pb_EdgeU5BU5D_t1297549625* value)
	{
		___m_SelectedEdges_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectedEdges_14, value);
	}

	inline static int32_t get_offset_of_m_selectedTriangles_15() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___m_selectedTriangles_15)); }
	inline Int32U5BU5D_t3230847821* get_m_selectedTriangles_15() const { return ___m_selectedTriangles_15; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_selectedTriangles_15() { return &___m_selectedTriangles_15; }
	inline void set_m_selectedTriangles_15(Int32U5BU5D_t3230847821* value)
	{
		___m_selectedTriangles_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_selectedTriangles_15, value);
	}

	inline static int32_t get_offset_of_previousTransform_16() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___previousTransform_16)); }
	inline Vector3_t4282066566  get_previousTransform_16() const { return ___previousTransform_16; }
	inline Vector3_t4282066566 * get_address_of_previousTransform_16() { return &___previousTransform_16; }
	inline void set_previousTransform_16(Vector3_t4282066566  value)
	{
		___previousTransform_16 = value;
	}

	inline static int32_t get_offset_of_userCollisions_17() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___userCollisions_17)); }
	inline bool get_userCollisions_17() const { return ___userCollisions_17; }
	inline bool* get_address_of_userCollisions_17() { return &___userCollisions_17; }
	inline void set_userCollisions_17(bool value)
	{
		___userCollisions_17 = value;
	}

	inline static int32_t get_offset_of_isSelectable_18() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___isSelectable_18)); }
	inline bool get_isSelectable_18() const { return ___isSelectable_18; }
	inline bool* get_address_of_isSelectable_18() { return &___isSelectable_18; }
	inline void set_isSelectable_18(bool value)
	{
		___isSelectable_18 = value;
	}

	inline static int32_t get_offset_of__name_19() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ____name_19)); }
	inline String_t* get__name_19() const { return ____name_19; }
	inline String_t** get_address_of__name_19() { return &____name_19; }
	inline void set__name_19(String_t* value)
	{
		____name_19 = value;
		Il2CppCodeGenWriteBarrier(&____name_19, value);
	}

	inline static int32_t get_offset_of_dontDestroyMeshOnDelete_20() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196, ___dontDestroyMeshOnDelete_20)); }
	inline bool get_dontDestroyMeshOnDelete_20() const { return ___dontDestroyMeshOnDelete_20; }
	inline bool* get_address_of_dontDestroyMeshOnDelete_20() { return &___dontDestroyMeshOnDelete_20; }
	inline void set_dontDestroyMeshOnDelete_20(bool value)
	{
		___dontDestroyMeshOnDelete_20 = value;
	}
};

struct pb_Object_t3489221196_StaticFields
{
public:
	// System.Func`2<ProBuilder2.Common.pb_Face,pb_UV> pb_Object::CS$<>9__CachedAnonymousMethodDelegate8
	Func_2_t315615883 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21() { return static_cast<int32_t>(offsetof(pb_Object_t3489221196_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21)); }
	inline Func_2_t315615883 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21; }
	inline Func_2_t315615883 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21(Func_2_t315615883 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate8_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
