#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CenterPanelScript
struct CenterPanelScript_t1133230138;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1596995480;
// AppScript
struct AppScript_t3488119340;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CenterPanelPageScript
struct  CenterPanelPageScript_t675237929  : public MonoBehaviour_t667441552
{
public:
	// CenterPanelScript CenterPanelPageScript::centerPanel
	CenterPanelScript_t1133230138 * ___centerPanel_2;
	// UnityEngine.Vector2 CenterPanelPageScript::oldSize
	Vector2_t4282066565  ___oldSize_3;
	// UnityEngine.UI.LayoutElement CenterPanelPageScript::layoutElem
	LayoutElement_t1596995480 * ___layoutElem_4;
	// AppScript CenterPanelPageScript::app
	AppScript_t3488119340 * ___app_5;

public:
	inline static int32_t get_offset_of_centerPanel_2() { return static_cast<int32_t>(offsetof(CenterPanelPageScript_t675237929, ___centerPanel_2)); }
	inline CenterPanelScript_t1133230138 * get_centerPanel_2() const { return ___centerPanel_2; }
	inline CenterPanelScript_t1133230138 ** get_address_of_centerPanel_2() { return &___centerPanel_2; }
	inline void set_centerPanel_2(CenterPanelScript_t1133230138 * value)
	{
		___centerPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___centerPanel_2, value);
	}

	inline static int32_t get_offset_of_oldSize_3() { return static_cast<int32_t>(offsetof(CenterPanelPageScript_t675237929, ___oldSize_3)); }
	inline Vector2_t4282066565  get_oldSize_3() const { return ___oldSize_3; }
	inline Vector2_t4282066565 * get_address_of_oldSize_3() { return &___oldSize_3; }
	inline void set_oldSize_3(Vector2_t4282066565  value)
	{
		___oldSize_3 = value;
	}

	inline static int32_t get_offset_of_layoutElem_4() { return static_cast<int32_t>(offsetof(CenterPanelPageScript_t675237929, ___layoutElem_4)); }
	inline LayoutElement_t1596995480 * get_layoutElem_4() const { return ___layoutElem_4; }
	inline LayoutElement_t1596995480 ** get_address_of_layoutElem_4() { return &___layoutElem_4; }
	inline void set_layoutElem_4(LayoutElement_t1596995480 * value)
	{
		___layoutElem_4 = value;
		Il2CppCodeGenWriteBarrier(&___layoutElem_4, value);
	}

	inline static int32_t get_offset_of_app_5() { return static_cast<int32_t>(offsetof(CenterPanelPageScript_t675237929, ___app_5)); }
	inline AppScript_t3488119340 * get_app_5() const { return ___app_5; }
	inline AppScript_t3488119340 ** get_address_of_app_5() { return &___app_5; }
	inline void set_app_5(AppScript_t3488119340 * value)
	{
		___app_5 = value;
		Il2CppCodeGenWriteBarrier(&___app_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
