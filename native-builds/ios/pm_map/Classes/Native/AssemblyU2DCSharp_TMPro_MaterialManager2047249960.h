#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TMPro.MaterialManager/MaskingMaterial>
struct List_1_t4008287050;
// UnityEngine.UI.Mask[]
struct MaskU5BU5D_t3939063017;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialManager
struct  MaterialManager_t2047249960  : public Il2CppObject
{
public:

public:
};

struct MaterialManager_t2047249960_StaticFields
{
public:
	// System.Collections.Generic.List`1<TMPro.MaterialManager/MaskingMaterial> TMPro.MaterialManager::m_materialList
	List_1_t4008287050 * ___m_materialList_0;
	// UnityEngine.UI.Mask[] TMPro.MaterialManager::m_maskComponents
	MaskU5BU5D_t3939063017* ___m_maskComponents_1;

public:
	inline static int32_t get_offset_of_m_materialList_0() { return static_cast<int32_t>(offsetof(MaterialManager_t2047249960_StaticFields, ___m_materialList_0)); }
	inline List_1_t4008287050 * get_m_materialList_0() const { return ___m_materialList_0; }
	inline List_1_t4008287050 ** get_address_of_m_materialList_0() { return &___m_materialList_0; }
	inline void set_m_materialList_0(List_1_t4008287050 * value)
	{
		___m_materialList_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialList_0, value);
	}

	inline static int32_t get_offset_of_m_maskComponents_1() { return static_cast<int32_t>(offsetof(MaterialManager_t2047249960_StaticFields, ___m_maskComponents_1)); }
	inline MaskU5BU5D_t3939063017* get_m_maskComponents_1() const { return ___m_maskComponents_1; }
	inline MaskU5BU5D_t3939063017** get_address_of_m_maskComponents_1() { return &___m_maskComponents_1; }
	inline void set_m_maskComponents_1(MaskU5BU5D_t3939063017* value)
	{
		___m_maskComponents_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_maskComponents_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
