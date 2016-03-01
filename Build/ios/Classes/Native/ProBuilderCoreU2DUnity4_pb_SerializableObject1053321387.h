#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t2958380348;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;
// System.Converter`2<UnityEngine.Vector3,pb_Vector3>
struct Converter_2_t987084846;
// System.Converter`2<UnityEngine.Vector2,pb_Vector2>
struct Converter_2_t500897106;
// System.Converter`2<UnityEngine.Color,pb_Color>
struct Converter_2_t4229783362;
// System.Converter`2<pb_Vector3,UnityEngine.Vector3>
struct Converter_2_t397371146;
// System.Converter`2<pb_Vector2,UnityEngine.Vector2>
struct Converter_2_t4206150702;
// System.Converter`2<pb_Color,UnityEngine.Color>
struct Converter_2_t2634338718;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// pb_SerializableObject
struct  pb_SerializableObject_t1053321387  : public Object_t
{
	// UnityEngine.Vector3[] pb_SerializableObject::vertices
	Vector3U5BU5D_t3227571696* ___vertices_0;
	// UnityEngine.Vector2[] pb_SerializableObject::uv
	Vector2U5BU5D_t2741383957* ___uv_1;
	// UnityEngine.Color[] pb_SerializableObject::color
	ColorU5BU5D_t3477081137* ___color_2;
	// ProBuilder2.Common.pb_Face[] pb_SerializableObject::faces
	pb_FaceU5BU5D_t2958380348* ___faces_3;
	// System.Int32[][] pb_SerializableObject::sharedIndices
	Int32U5BU5DU5BU5D_t158556903* ___sharedIndices_4;
	// System.Int32[][] pb_SerializableObject::sharedIndicesUV
	Int32U5BU5DU5BU5D_t158556903* ___sharedIndicesUV_5;
	// UnityEngine.Vector3 pb_SerializableObject::t_position
	Vector3_t3525329789  ___t_position_6;
	// UnityEngine.Quaternion pb_SerializableObject::t_rotation
	Quaternion_t1891715979  ___t_rotation_7;
	// UnityEngine.Vector3 pb_SerializableObject::t_scale
	Vector3_t3525329789  ___t_scale_8;
};
struct pb_SerializableObject_t1053321387_StaticFields{
	// System.Converter`2<UnityEngine.Vector3,pb_Vector3> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate3
	Converter_2_t987084846 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_9;
	// System.Converter`2<UnityEngine.Vector2,pb_Vector2> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate4
	Converter_2_t500897106 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_10;
	// System.Converter`2<UnityEngine.Color,pb_Color> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate5
	Converter_2_t4229783362 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_11;
	// System.Converter`2<pb_Vector3,UnityEngine.Vector3> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegate9
	Converter_2_t397371146 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_12;
	// System.Converter`2<pb_Vector2,UnityEngine.Vector2> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegatea
	Converter_2_t4206150702 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_13;
	// System.Converter`2<pb_Color,UnityEngine.Color> pb_SerializableObject::CS$<>9__CachedAnonymousMethodDelegateb
	Converter_2_t2634338718 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_14;
};
