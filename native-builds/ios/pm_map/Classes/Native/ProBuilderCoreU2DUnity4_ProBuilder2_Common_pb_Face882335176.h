#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t1297549625;
// pb_UV
struct pb_UV_t106447886;
// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Face
struct  pb_Face_t882335176  : public Il2CppObject
{
public:
	// System.Int32[] ProBuilder2.Common.pb_Face::_indices
	Int32U5BU5D_t3230847821* ____indices_0;
	// System.Int32[] ProBuilder2.Common.pb_Face::_distinctIndices
	Int32U5BU5D_t3230847821* ____distinctIndices_1;
	// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::_edges
	pb_EdgeU5BU5D_t1297549625* ____edges_2;
	// System.Int32 ProBuilder2.Common.pb_Face::_smoothingGroup
	int32_t ____smoothingGroup_3;
	// pb_UV ProBuilder2.Common.pb_Face::_uv
	pb_UV_t106447886 * ____uv_4;
	// UnityEngine.Material ProBuilder2.Common.pb_Face::_mat
	Material_t3870600107 * ____mat_5;
	// System.Boolean ProBuilder2.Common.pb_Face::manualUV
	bool ___manualUV_6;
	// System.Int32 ProBuilder2.Common.pb_Face::elementGroup
	int32_t ___elementGroup_7;
	// System.Int32 ProBuilder2.Common.pb_Face::textureGroup
	int32_t ___textureGroup_8;

public:
	inline static int32_t get_offset_of__indices_0() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ____indices_0)); }
	inline Int32U5BU5D_t3230847821* get__indices_0() const { return ____indices_0; }
	inline Int32U5BU5D_t3230847821** get_address_of__indices_0() { return &____indices_0; }
	inline void set__indices_0(Int32U5BU5D_t3230847821* value)
	{
		____indices_0 = value;
		Il2CppCodeGenWriteBarrier(&____indices_0, value);
	}

	inline static int32_t get_offset_of__distinctIndices_1() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ____distinctIndices_1)); }
	inline Int32U5BU5D_t3230847821* get__distinctIndices_1() const { return ____distinctIndices_1; }
	inline Int32U5BU5D_t3230847821** get_address_of__distinctIndices_1() { return &____distinctIndices_1; }
	inline void set__distinctIndices_1(Int32U5BU5D_t3230847821* value)
	{
		____distinctIndices_1 = value;
		Il2CppCodeGenWriteBarrier(&____distinctIndices_1, value);
	}

	inline static int32_t get_offset_of__edges_2() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ____edges_2)); }
	inline pb_EdgeU5BU5D_t1297549625* get__edges_2() const { return ____edges_2; }
	inline pb_EdgeU5BU5D_t1297549625** get_address_of__edges_2() { return &____edges_2; }
	inline void set__edges_2(pb_EdgeU5BU5D_t1297549625* value)
	{
		____edges_2 = value;
		Il2CppCodeGenWriteBarrier(&____edges_2, value);
	}

	inline static int32_t get_offset_of__smoothingGroup_3() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ____smoothingGroup_3)); }
	inline int32_t get__smoothingGroup_3() const { return ____smoothingGroup_3; }
	inline int32_t* get_address_of__smoothingGroup_3() { return &____smoothingGroup_3; }
	inline void set__smoothingGroup_3(int32_t value)
	{
		____smoothingGroup_3 = value;
	}

	inline static int32_t get_offset_of__uv_4() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ____uv_4)); }
	inline pb_UV_t106447886 * get__uv_4() const { return ____uv_4; }
	inline pb_UV_t106447886 ** get_address_of__uv_4() { return &____uv_4; }
	inline void set__uv_4(pb_UV_t106447886 * value)
	{
		____uv_4 = value;
		Il2CppCodeGenWriteBarrier(&____uv_4, value);
	}

	inline static int32_t get_offset_of__mat_5() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ____mat_5)); }
	inline Material_t3870600107 * get__mat_5() const { return ____mat_5; }
	inline Material_t3870600107 ** get_address_of__mat_5() { return &____mat_5; }
	inline void set__mat_5(Material_t3870600107 * value)
	{
		____mat_5 = value;
		Il2CppCodeGenWriteBarrier(&____mat_5, value);
	}

	inline static int32_t get_offset_of_manualUV_6() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ___manualUV_6)); }
	inline bool get_manualUV_6() const { return ___manualUV_6; }
	inline bool* get_address_of_manualUV_6() { return &___manualUV_6; }
	inline void set_manualUV_6(bool value)
	{
		___manualUV_6 = value;
	}

	inline static int32_t get_offset_of_elementGroup_7() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ___elementGroup_7)); }
	inline int32_t get_elementGroup_7() const { return ___elementGroup_7; }
	inline int32_t* get_address_of_elementGroup_7() { return &___elementGroup_7; }
	inline void set_elementGroup_7(int32_t value)
	{
		___elementGroup_7 = value;
	}

	inline static int32_t get_offset_of_textureGroup_8() { return static_cast<int32_t>(offsetof(pb_Face_t882335176, ___textureGroup_8)); }
	inline int32_t get_textureGroup_8() const { return ___textureGroup_8; }
	inline int32_t* get_address_of_textureGroup_8() { return &___textureGroup_8; }
	inline void set_textureGroup_8(int32_t value)
	{
		___textureGroup_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
