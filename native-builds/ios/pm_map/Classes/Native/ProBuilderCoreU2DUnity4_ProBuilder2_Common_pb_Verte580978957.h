#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_VertexConnection
struct  pb_VertexConnection_t580978957  : public Il2CppObject
{
public:
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::face
	pb_Face_t882335176 * ___face_0;
	// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::indices
	List_1_t2522024052 * ___indices_1;

public:
	inline static int32_t get_offset_of_face_0() { return static_cast<int32_t>(offsetof(pb_VertexConnection_t580978957, ___face_0)); }
	inline pb_Face_t882335176 * get_face_0() const { return ___face_0; }
	inline pb_Face_t882335176 ** get_address_of_face_0() { return &___face_0; }
	inline void set_face_0(pb_Face_t882335176 * value)
	{
		___face_0 = value;
		Il2CppCodeGenWriteBarrier(&___face_0, value);
	}

	inline static int32_t get_offset_of_indices_1() { return static_cast<int32_t>(offsetof(pb_VertexConnection_t580978957, ___indices_1)); }
	inline List_1_t2522024052 * get_indices_1() const { return ___indices_1; }
	inline List_1_t2522024052 ** get_address_of_indices_1() { return &___indices_1; }
	inline void set_indices_1(List_1_t2522024052 * value)
	{
		___indices_1 = value;
		Il2CppCodeGenWriteBarrier(&___indices_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
