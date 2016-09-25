#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ButtonInteractableControl
struct  ButtonInteractableControl_t2107228929  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.CanvasGroup MaterialUI.ButtonInteractableControl::canvasGroup
	CanvasGroup_t3702418109 * ___canvasGroup_2;
	// UnityEngine.UI.Button MaterialUI.ButtonInteractableControl::button
	Button_t3896396478 * ___button_3;
	// System.Boolean MaterialUI.ButtonInteractableControl::lastInteractableState
	bool ___lastInteractableState_4;
	// UnityEngine.CanvasGroup MaterialUI.ButtonInteractableControl::shadows
	CanvasGroup_t3702418109 * ___shadows_5;

public:
	inline static int32_t get_offset_of_canvasGroup_2() { return static_cast<int32_t>(offsetof(ButtonInteractableControl_t2107228929, ___canvasGroup_2)); }
	inline CanvasGroup_t3702418109 * get_canvasGroup_2() const { return ___canvasGroup_2; }
	inline CanvasGroup_t3702418109 ** get_address_of_canvasGroup_2() { return &___canvasGroup_2; }
	inline void set_canvasGroup_2(CanvasGroup_t3702418109 * value)
	{
		___canvasGroup_2 = value;
		Il2CppCodeGenWriteBarrier(&___canvasGroup_2, value);
	}

	inline static int32_t get_offset_of_button_3() { return static_cast<int32_t>(offsetof(ButtonInteractableControl_t2107228929, ___button_3)); }
	inline Button_t3896396478 * get_button_3() const { return ___button_3; }
	inline Button_t3896396478 ** get_address_of_button_3() { return &___button_3; }
	inline void set_button_3(Button_t3896396478 * value)
	{
		___button_3 = value;
		Il2CppCodeGenWriteBarrier(&___button_3, value);
	}

	inline static int32_t get_offset_of_lastInteractableState_4() { return static_cast<int32_t>(offsetof(ButtonInteractableControl_t2107228929, ___lastInteractableState_4)); }
	inline bool get_lastInteractableState_4() const { return ___lastInteractableState_4; }
	inline bool* get_address_of_lastInteractableState_4() { return &___lastInteractableState_4; }
	inline void set_lastInteractableState_4(bool value)
	{
		___lastInteractableState_4 = value;
	}

	inline static int32_t get_offset_of_shadows_5() { return static_cast<int32_t>(offsetof(ButtonInteractableControl_t2107228929, ___shadows_5)); }
	inline CanvasGroup_t3702418109 * get_shadows_5() const { return ___shadows_5; }
	inline CanvasGroup_t3702418109 ** get_address_of_shadows_5() { return &___shadows_5; }
	inline void set_shadows_5(CanvasGroup_t3702418109 * value)
	{
		___shadows_5 = value;
		Il2CppCodeGenWriteBarrier(&___shadows_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
