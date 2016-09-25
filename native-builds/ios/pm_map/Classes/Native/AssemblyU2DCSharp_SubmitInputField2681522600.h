#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SubmitInputField/KeyboardDoneEvent
struct KeyboardDoneEvent_t534500170;
// SubmitInputField/KeyboardCancelEvent
struct KeyboardCancelEvent_t1635804882;

#include "UnityEngine_UI_UnityEngine_UI_InputField609046876.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SubmitInputField
struct  SubmitInputField_t2681522600  : public InputField_t609046876
{
public:
	// SubmitInputField/KeyboardDoneEvent SubmitInputField::m_keyboardDone
	KeyboardDoneEvent_t534500170 * ___m_keyboardDone_64;
	// SubmitInputField/KeyboardCancelEvent SubmitInputField::m_keyboardCancel
	KeyboardCancelEvent_t1635804882 * ___m_keyboardCancel_65;

public:
	inline static int32_t get_offset_of_m_keyboardDone_64() { return static_cast<int32_t>(offsetof(SubmitInputField_t2681522600, ___m_keyboardDone_64)); }
	inline KeyboardDoneEvent_t534500170 * get_m_keyboardDone_64() const { return ___m_keyboardDone_64; }
	inline KeyboardDoneEvent_t534500170 ** get_address_of_m_keyboardDone_64() { return &___m_keyboardDone_64; }
	inline void set_m_keyboardDone_64(KeyboardDoneEvent_t534500170 * value)
	{
		___m_keyboardDone_64 = value;
		Il2CppCodeGenWriteBarrier(&___m_keyboardDone_64, value);
	}

	inline static int32_t get_offset_of_m_keyboardCancel_65() { return static_cast<int32_t>(offsetof(SubmitInputField_t2681522600, ___m_keyboardCancel_65)); }
	inline KeyboardCancelEvent_t1635804882 * get_m_keyboardCancel_65() const { return ___m_keyboardCancel_65; }
	inline KeyboardCancelEvent_t1635804882 ** get_address_of_m_keyboardCancel_65() { return &___m_keyboardCancel_65; }
	inline void set_m_keyboardCancel_65(KeyboardCancelEvent_t1635804882 * value)
	{
		___m_keyboardCancel_65 = value;
		Il2CppCodeGenWriteBarrier(&___m_keyboardCancel_65, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
