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
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_t2250493944;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_EdgeConnection
struct  pb_EdgeConnection_t2908481254  : public Il2CppObject
{
public:
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_EdgeConnection::face
	pb_Face_t882335176 * ___face_0;
	// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_EdgeConnection::edges
	List_1_t2250493944 * ___edges_1;

public:
	inline static int32_t get_offset_of_face_0() { return static_cast<int32_t>(offsetof(pb_EdgeConnection_t2908481254, ___face_0)); }
	inline pb_Face_t882335176 * get_face_0() const { return ___face_0; }
	inline pb_Face_t882335176 ** get_address_of_face_0() { return &___face_0; }
	inline void set_face_0(pb_Face_t882335176 * value)
	{
		___face_0 = value;
		Il2CppCodeGenWriteBarrier(&___face_0, value);
	}

	inline static int32_t get_offset_of_edges_1() { return static_cast<int32_t>(offsetof(pb_EdgeConnection_t2908481254, ___edges_1)); }
	inline List_1_t2250493944 * get_edges_1() const { return ___edges_1; }
	inline List_1_t2250493944 ** get_address_of_edges_1() { return &___edges_1; }
	inline void set_edges_1(List_1_t2250493944 * value)
	{
		___edges_1 = value;
		Il2CppCodeGenWriteBarrier(&___edges_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
