#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// pb_Object
struct pb_Object_t3489221196;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RuntimeEdit/pb_Selection
struct  pb_Selection_t845870700  : public Il2CppObject
{
public:
	// pb_Object RuntimeEdit/pb_Selection::pb
	pb_Object_t3489221196 * ___pb_0;
	// ProBuilder2.Common.pb_Face RuntimeEdit/pb_Selection::face
	pb_Face_t882335176 * ___face_1;

public:
	inline static int32_t get_offset_of_pb_0() { return static_cast<int32_t>(offsetof(pb_Selection_t845870700, ___pb_0)); }
	inline pb_Object_t3489221196 * get_pb_0() const { return ___pb_0; }
	inline pb_Object_t3489221196 ** get_address_of_pb_0() { return &___pb_0; }
	inline void set_pb_0(pb_Object_t3489221196 * value)
	{
		___pb_0 = value;
		Il2CppCodeGenWriteBarrier(&___pb_0, value);
	}

	inline static int32_t get_offset_of_face_1() { return static_cast<int32_t>(offsetof(pb_Selection_t845870700, ___face_1)); }
	inline pb_Face_t882335176 * get_face_1() const { return ___face_1; }
	inline pb_Face_t882335176 ** get_address_of_face_1() { return &___face_1; }
	inline void set_face_1(pb_Face_t882335176 * value)
	{
		___face_1 = value;
		Il2CppCodeGenWriteBarrier(&___face_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
