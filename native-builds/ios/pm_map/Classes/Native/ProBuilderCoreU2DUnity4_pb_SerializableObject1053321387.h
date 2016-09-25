#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t1009109529;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t1820556512;
// System.Converter`2<UnityEngine.Vector3,pb_Vector3>
struct Converter_2_t1440652964;
// System.Converter`2<UnityEngine.Vector2,pb_Vector2>
struct Converter_2_t954465224;
// System.Converter`2<UnityEngine.Color,pb_Color>
struct Converter_2_t2365019768;
// System.Converter`2<pb_Vector3,UnityEngine.Vector3>
struct Converter_2_t324879830;
// System.Converter`2<pb_Vector2,UnityEngine.Vector2>
struct Converter_2_t4133659386;
// System.Converter`2<pb_Color,UnityEngine.Color>
struct Converter_2_t116514474;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pb_SerializableObject
struct  pb_SerializableObject_t1053321387  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] pb_SerializableObject::vertices
	Vector3U5BU5D_t215400611* ___vertices_0;
	// UnityEngine.Vector2[] pb_SerializableObject::uv
	Vector2U5BU5D_t4024180168* ___uv_1;
	// UnityEngine.Color[] pb_SerializableObject::color
	ColorU5BU5D_t2441545636* ___color_2;
	// ProBuilder2.Common.pb_Face[] pb_SerializableObject::faces
	pb_FaceU5BU5D_t1009109529* ___faces_3;
	// System.Int32[][] pb_SerializableObject::sharedIndices
	Int32U5BU5DU5BU5D_t1820556512* ___sharedIndices_4;
	// System.Int32[][] pb_SerializableObject::sharedIndicesUV
	Int32U5BU5DU5BU5D_t1820556512* ___sharedIndicesUV_5;
	// UnityEngine.Vector3 pb_SerializableObject::t_position
	Vector3_t4282066566  ___t_position_6;
	// UnityEngine.Quaternion pb_SerializableObject::t_rotation
	Quaternion_t1553702882  ___t_rotation_7;
	// UnityEngine.Vector3 pb_SerializableObject::t_scale
	Vector3_t4282066566  ___t_scale_8;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___vertices_0)); }
	inline Vector3U5BU5D_t215400611* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t215400611** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t215400611* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___uv_1)); }
	inline Vector2U5BU5D_t4024180168* get_uv_1() const { return ___uv_1; }
	inline Vector2U5BU5D_t4024180168** get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2U5BU5D_t4024180168* value)
	{
		___uv_1 = value;
		Il2CppCodeGenWriteBarrier(&___uv_1, value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___color_2)); }
	inline ColorU5BU5D_t2441545636* get_color_2() const { return ___color_2; }
	inline ColorU5BU5D_t2441545636** get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(ColorU5BU5D_t2441545636* value)
	{
		___color_2 = value;
		Il2CppCodeGenWriteBarrier(&___color_2, value);
	}

	inline static int32_t get_offset_of_faces_3() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___faces_3)); }
	inline pb_FaceU5BU5D_t1009109529* get_faces_3() const { return ___faces_3; }
	inline pb_FaceU5BU5D_t1009109529** get_address_of_faces_3() { return &___faces_3; }
	inline void set_faces_3(pb_FaceU5BU5D_t1009109529* value)
	{
		___faces_3 = value;
		Il2CppCodeGenWriteBarrier(&___faces_3, value);
	}

	inline static int32_t get_offset_of_sharedIndices_4() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___sharedIndices_4)); }
	inline Int32U5BU5DU5BU5D_t1820556512* get_sharedIndices_4() const { return ___sharedIndices_4; }
	inline Int32U5BU5DU5BU5D_t1820556512** get_address_of_sharedIndices_4() { return &___sharedIndices_4; }
	inline void set_sharedIndices_4(Int32U5BU5DU5BU5D_t1820556512* value)
	{
		___sharedIndices_4 = value;
		Il2CppCodeGenWriteBarrier(&___sharedIndices_4, value);
	}

	inline static int32_t get_offset_of_sharedIndicesUV_5() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___sharedIndicesUV_5)); }
	inline Int32U5BU5DU5BU5D_t1820556512* get_sharedIndicesUV_5() const { return ___sharedIndicesUV_5; }
	inline Int32U5BU5DU5BU5D_t1820556512** get_address_of_sharedIndicesUV_5() { return &___sharedIndicesUV_5; }
	inline void set_sharedIndicesUV_5(Int32U5BU5DU5BU5D_t1820556512* value)
	{
		___sharedIndicesUV_5 = value;
		Il2CppCodeGenWriteBarrier(&___sharedIndicesUV_5, value);
	}

	inline static int32_t get_offset_of_t_position_6() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___t_position_6)); }
	inline Vector3_t4282066566  get_t_position_6() const { return ___t_position_6; }
	inline Vector3_t4282066566 * get_address_of_t_position_6() { return &___t_position_6; }
	inline void set_t_position_6(Vector3_t4282066566  value)
	{
		___t_position_6 = value;
	}

	inline static int32_t get_offset_of_t_rotation_7() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___t_rotation_7)); }
	inline Quaternion_t1553702882  get_t_rotation_7() const { return ___t_rotation_7; }
	inline Quaternion_t1553702882 * get_address_of_t_rotation_7() { return &___t_rotation_7; }
	inline void set_t_rotation_7(Quaternion_t1553702882  value)
	{
		___t_rotation_7 = value;
	}

	inline static int32_t get_offset_of_t_scale_8() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387, ___t_scale_8)); }
	inline Vector3_t4282066566  get_t_scale_8() const { return ___t_scale_8; }
	inline Vector3_t4282066566 * get_address_of_t_scale_8() { return &___t_scale_8; }
	inline void set_t_scale_8(Vector3_t4282066566  value)
	{
		___t_scale_8 = value;
	}
};

struct pb_SerializableObject_t1053321387_StaticFields
{
public:
	// System.Converter`2<UnityEngine.Vector3,pb_Vector3> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate3
	Converter_2_t1440652964 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9;
	// System.Converter`2<UnityEngine.Vector2,pb_Vector2> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate4
	Converter_2_t954465224 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10;
	// System.Converter`2<UnityEngine.Color,pb_Color> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate5
	Converter_2_t2365019768 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11;
	// System.Converter`2<pb_Vector3,UnityEngine.Vector3> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate9
	Converter_2_t324879830 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12;
	// System.Converter`2<pb_Vector2,UnityEngine.Vector2> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegatea
	Converter_2_t4133659386 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13;
	// System.Converter`2<pb_Color,UnityEngine.Color> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegateb
	Converter_2_t116514474 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9)); }
	inline Converter_2_t1440652964 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9; }
	inline Converter_2_t1440652964 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9(Converter_2_t1440652964 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10)); }
	inline Converter_2_t954465224 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10; }
	inline Converter_2_t954465224 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10(Converter_2_t954465224 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11)); }
	inline Converter_2_t2365019768 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11; }
	inline Converter_2_t2365019768 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11(Converter_2_t2365019768 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12)); }
	inline Converter_2_t324879830 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12; }
	inline Converter_2_t324879830 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12(Converter_2_t324879830 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13)); }
	inline Converter_2_t4133659386 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13; }
	inline Converter_2_t4133659386 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13(Converter_2_t4133659386 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14() { return static_cast<int32_t>(offsetof(pb_SerializableObject_t1053321387_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14)); }
	inline Converter_2_t116514474 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14; }
	inline Converter_2_t116514474 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14(Converter_2_t116514474 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
