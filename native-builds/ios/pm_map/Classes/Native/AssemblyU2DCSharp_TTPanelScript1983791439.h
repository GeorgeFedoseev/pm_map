#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TTWeekScript
struct TTWeekScript_t2426821759;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "AssemblyU2DCSharp_CenterPanelScript1133230138.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTPanelScript
struct  TTPanelScript_t1983791439  : public CenterPanelScript_t1133230138
{
public:
	// TTWeekScript TTPanelScript::currentWeek
	TTWeekScript_t2426821759 * ___currentWeek_9;
	// TTWeekScript TTPanelScript::nextWeek
	TTWeekScript_t2426821759 * ___nextWeek_10;
	// UnityEngine.GameObject TTPanelScript::no_pairs_label_currentWeek
	GameObject_t3674682005 * ___no_pairs_label_currentWeek_11;
	// UnityEngine.GameObject TTPanelScript::no_pairs_label_nextWeek
	GameObject_t3674682005 * ___no_pairs_label_nextWeek_12;
	// UnityEngine.UI.Button TTPanelScript::editButton
	Button_t3896396478 * ___editButton_13;
	// UnityEngine.UI.Button TTPanelScript::doneButton
	Button_t3896396478 * ___doneButton_14;
	// UnityEngine.UI.Button TTPanelScript::downloadButton
	Button_t3896396478 * ___downloadButton_15;
	// UnityEngine.UI.Button TTPanelScript::undoButton
	Button_t3896396478 * ___undoButton_16;
	// UnityEngine.UI.Button TTPanelScript::updateTimetableButton
	Button_t3896396478 * ___updateTimetableButton_17;
	// UnityEngine.UI.Toggle TTPanelScript::switchWeekToggle
	Toggle_t110812896 * ___switchWeekToggle_18;
	// UnityEngine.GameObject TTPanelScript::loadingOverlay
	GameObject_t3674682005 * ___loadingOverlay_19;
	// System.Boolean TTPanelScript::loading
	bool ___loading_20;
	// System.Boolean TTPanelScript::firstLoadDone
	bool ___firstLoadDone_21;
	// System.Boolean TTPanelScript::_editMode
	bool ____editMode_22;
	// System.Boolean TTPanelScript::_currentWeek
	bool ____currentWeek_23;
	// System.Single TTPanelScript::lastCurrentWeekScrollPos
	float ___lastCurrentWeekScrollPos_24;
	// System.Single TTPanelScript::lastNextWeekScrollPos
	float ___lastNextWeekScrollPos_25;
	// System.Boolean TTPanelScript::_subscribed_to_time_updates
	bool ____subscribed_to_time_updates_26;

public:
	inline static int32_t get_offset_of_currentWeek_9() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___currentWeek_9)); }
	inline TTWeekScript_t2426821759 * get_currentWeek_9() const { return ___currentWeek_9; }
	inline TTWeekScript_t2426821759 ** get_address_of_currentWeek_9() { return &___currentWeek_9; }
	inline void set_currentWeek_9(TTWeekScript_t2426821759 * value)
	{
		___currentWeek_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentWeek_9, value);
	}

	inline static int32_t get_offset_of_nextWeek_10() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___nextWeek_10)); }
	inline TTWeekScript_t2426821759 * get_nextWeek_10() const { return ___nextWeek_10; }
	inline TTWeekScript_t2426821759 ** get_address_of_nextWeek_10() { return &___nextWeek_10; }
	inline void set_nextWeek_10(TTWeekScript_t2426821759 * value)
	{
		___nextWeek_10 = value;
		Il2CppCodeGenWriteBarrier(&___nextWeek_10, value);
	}

	inline static int32_t get_offset_of_no_pairs_label_currentWeek_11() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___no_pairs_label_currentWeek_11)); }
	inline GameObject_t3674682005 * get_no_pairs_label_currentWeek_11() const { return ___no_pairs_label_currentWeek_11; }
	inline GameObject_t3674682005 ** get_address_of_no_pairs_label_currentWeek_11() { return &___no_pairs_label_currentWeek_11; }
	inline void set_no_pairs_label_currentWeek_11(GameObject_t3674682005 * value)
	{
		___no_pairs_label_currentWeek_11 = value;
		Il2CppCodeGenWriteBarrier(&___no_pairs_label_currentWeek_11, value);
	}

	inline static int32_t get_offset_of_no_pairs_label_nextWeek_12() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___no_pairs_label_nextWeek_12)); }
	inline GameObject_t3674682005 * get_no_pairs_label_nextWeek_12() const { return ___no_pairs_label_nextWeek_12; }
	inline GameObject_t3674682005 ** get_address_of_no_pairs_label_nextWeek_12() { return &___no_pairs_label_nextWeek_12; }
	inline void set_no_pairs_label_nextWeek_12(GameObject_t3674682005 * value)
	{
		___no_pairs_label_nextWeek_12 = value;
		Il2CppCodeGenWriteBarrier(&___no_pairs_label_nextWeek_12, value);
	}

	inline static int32_t get_offset_of_editButton_13() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___editButton_13)); }
	inline Button_t3896396478 * get_editButton_13() const { return ___editButton_13; }
	inline Button_t3896396478 ** get_address_of_editButton_13() { return &___editButton_13; }
	inline void set_editButton_13(Button_t3896396478 * value)
	{
		___editButton_13 = value;
		Il2CppCodeGenWriteBarrier(&___editButton_13, value);
	}

	inline static int32_t get_offset_of_doneButton_14() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___doneButton_14)); }
	inline Button_t3896396478 * get_doneButton_14() const { return ___doneButton_14; }
	inline Button_t3896396478 ** get_address_of_doneButton_14() { return &___doneButton_14; }
	inline void set_doneButton_14(Button_t3896396478 * value)
	{
		___doneButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___doneButton_14, value);
	}

	inline static int32_t get_offset_of_downloadButton_15() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___downloadButton_15)); }
	inline Button_t3896396478 * get_downloadButton_15() const { return ___downloadButton_15; }
	inline Button_t3896396478 ** get_address_of_downloadButton_15() { return &___downloadButton_15; }
	inline void set_downloadButton_15(Button_t3896396478 * value)
	{
		___downloadButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___downloadButton_15, value);
	}

	inline static int32_t get_offset_of_undoButton_16() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___undoButton_16)); }
	inline Button_t3896396478 * get_undoButton_16() const { return ___undoButton_16; }
	inline Button_t3896396478 ** get_address_of_undoButton_16() { return &___undoButton_16; }
	inline void set_undoButton_16(Button_t3896396478 * value)
	{
		___undoButton_16 = value;
		Il2CppCodeGenWriteBarrier(&___undoButton_16, value);
	}

	inline static int32_t get_offset_of_updateTimetableButton_17() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___updateTimetableButton_17)); }
	inline Button_t3896396478 * get_updateTimetableButton_17() const { return ___updateTimetableButton_17; }
	inline Button_t3896396478 ** get_address_of_updateTimetableButton_17() { return &___updateTimetableButton_17; }
	inline void set_updateTimetableButton_17(Button_t3896396478 * value)
	{
		___updateTimetableButton_17 = value;
		Il2CppCodeGenWriteBarrier(&___updateTimetableButton_17, value);
	}

	inline static int32_t get_offset_of_switchWeekToggle_18() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___switchWeekToggle_18)); }
	inline Toggle_t110812896 * get_switchWeekToggle_18() const { return ___switchWeekToggle_18; }
	inline Toggle_t110812896 ** get_address_of_switchWeekToggle_18() { return &___switchWeekToggle_18; }
	inline void set_switchWeekToggle_18(Toggle_t110812896 * value)
	{
		___switchWeekToggle_18 = value;
		Il2CppCodeGenWriteBarrier(&___switchWeekToggle_18, value);
	}

	inline static int32_t get_offset_of_loadingOverlay_19() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___loadingOverlay_19)); }
	inline GameObject_t3674682005 * get_loadingOverlay_19() const { return ___loadingOverlay_19; }
	inline GameObject_t3674682005 ** get_address_of_loadingOverlay_19() { return &___loadingOverlay_19; }
	inline void set_loadingOverlay_19(GameObject_t3674682005 * value)
	{
		___loadingOverlay_19 = value;
		Il2CppCodeGenWriteBarrier(&___loadingOverlay_19, value);
	}

	inline static int32_t get_offset_of_loading_20() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___loading_20)); }
	inline bool get_loading_20() const { return ___loading_20; }
	inline bool* get_address_of_loading_20() { return &___loading_20; }
	inline void set_loading_20(bool value)
	{
		___loading_20 = value;
	}

	inline static int32_t get_offset_of_firstLoadDone_21() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___firstLoadDone_21)); }
	inline bool get_firstLoadDone_21() const { return ___firstLoadDone_21; }
	inline bool* get_address_of_firstLoadDone_21() { return &___firstLoadDone_21; }
	inline void set_firstLoadDone_21(bool value)
	{
		___firstLoadDone_21 = value;
	}

	inline static int32_t get_offset_of__editMode_22() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ____editMode_22)); }
	inline bool get__editMode_22() const { return ____editMode_22; }
	inline bool* get_address_of__editMode_22() { return &____editMode_22; }
	inline void set__editMode_22(bool value)
	{
		____editMode_22 = value;
	}

	inline static int32_t get_offset_of__currentWeek_23() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ____currentWeek_23)); }
	inline bool get__currentWeek_23() const { return ____currentWeek_23; }
	inline bool* get_address_of__currentWeek_23() { return &____currentWeek_23; }
	inline void set__currentWeek_23(bool value)
	{
		____currentWeek_23 = value;
	}

	inline static int32_t get_offset_of_lastCurrentWeekScrollPos_24() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___lastCurrentWeekScrollPos_24)); }
	inline float get_lastCurrentWeekScrollPos_24() const { return ___lastCurrentWeekScrollPos_24; }
	inline float* get_address_of_lastCurrentWeekScrollPos_24() { return &___lastCurrentWeekScrollPos_24; }
	inline void set_lastCurrentWeekScrollPos_24(float value)
	{
		___lastCurrentWeekScrollPos_24 = value;
	}

	inline static int32_t get_offset_of_lastNextWeekScrollPos_25() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ___lastNextWeekScrollPos_25)); }
	inline float get_lastNextWeekScrollPos_25() const { return ___lastNextWeekScrollPos_25; }
	inline float* get_address_of_lastNextWeekScrollPos_25() { return &___lastNextWeekScrollPos_25; }
	inline void set_lastNextWeekScrollPos_25(float value)
	{
		___lastNextWeekScrollPos_25 = value;
	}

	inline static int32_t get_offset_of__subscribed_to_time_updates_26() { return static_cast<int32_t>(offsetof(TTPanelScript_t1983791439, ____subscribed_to_time_updates_26)); }
	inline bool get__subscribed_to_time_updates_26() const { return ____subscribed_to_time_updates_26; }
	inline bool* get_address_of__subscribed_to_time_updates_26() { return &____subscribed_to_time_updates_26; }
	inline void set__subscribed_to_time_updates_26(bool value)
	{
		____subscribed_to_time_updates_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
