#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t3103963276;
// System.Collections.Generic.List`1<TMPro.TMP_Style>
struct List_1_t3378763099;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style>
struct Dictionary_2_t2007840786;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_StyleSheet
struct  TMP_StyleSheet_t3103963276  : public ScriptableObject_t2970544072
{
public:
	// System.Collections.Generic.List`1<TMPro.TMP_Style> TMPro.TMP_StyleSheet::m_StyleList
	List_1_t3378763099 * ___m_StyleList_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style> TMPro.TMP_StyleSheet::m_StyleDictionary
	Dictionary_2_t2007840786 * ___m_StyleDictionary_6;

public:
	inline static int32_t get_offset_of_m_StyleList_5() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t3103963276, ___m_StyleList_5)); }
	inline List_1_t3378763099 * get_m_StyleList_5() const { return ___m_StyleList_5; }
	inline List_1_t3378763099 ** get_address_of_m_StyleList_5() { return &___m_StyleList_5; }
	inline void set_m_StyleList_5(List_1_t3378763099 * value)
	{
		___m_StyleList_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_StyleList_5, value);
	}

	inline static int32_t get_offset_of_m_StyleDictionary_6() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t3103963276, ___m_StyleDictionary_6)); }
	inline Dictionary_2_t2007840786 * get_m_StyleDictionary_6() const { return ___m_StyleDictionary_6; }
	inline Dictionary_2_t2007840786 ** get_address_of_m_StyleDictionary_6() { return &___m_StyleDictionary_6; }
	inline void set_m_StyleDictionary_6(Dictionary_2_t2007840786 * value)
	{
		___m_StyleDictionary_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_StyleDictionary_6, value);
	}
};

struct TMP_StyleSheet_t3103963276_StaticFields
{
public:
	// TMPro.TMP_StyleSheet TMPro.TMP_StyleSheet::Instance
	TMP_StyleSheet_t3103963276 * ___Instance_2;
	// System.Boolean TMPro.TMP_StyleSheet::m_isInitialized
	bool ___m_isInitialized_3;
	// System.Boolean TMPro.TMP_StyleSheet::m_isDictionaryLoaded
	bool ___m_isDictionaryLoaded_4;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t3103963276_StaticFields, ___Instance_2)); }
	inline TMP_StyleSheet_t3103963276 * get_Instance_2() const { return ___Instance_2; }
	inline TMP_StyleSheet_t3103963276 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(TMP_StyleSheet_t3103963276 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}

	inline static int32_t get_offset_of_m_isInitialized_3() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t3103963276_StaticFields, ___m_isInitialized_3)); }
	inline bool get_m_isInitialized_3() const { return ___m_isInitialized_3; }
	inline bool* get_address_of_m_isInitialized_3() { return &___m_isInitialized_3; }
	inline void set_m_isInitialized_3(bool value)
	{
		___m_isInitialized_3 = value;
	}

	inline static int32_t get_offset_of_m_isDictionaryLoaded_4() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t3103963276_StaticFields, ___m_isDictionaryLoaded_4)); }
	inline bool get_m_isDictionaryLoaded_4() const { return ___m_isDictionaryLoaded_4; }
	inline bool* get_address_of_m_isDictionaryLoaded_4() { return &___m_isDictionaryLoaded_4; }
	inline void set_m_isDictionaryLoaded_4(bool value)
	{
		___m_isDictionaryLoaded_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
