#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// System.String
struct String_t;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t2441545637;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// MGBlendTable
struct MGBlendTable_t2313184055;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_AnisotropicFiltering503731965.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "AssemblyU2DCSharp_IMGFormat2950527354.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MegaGrab
struct  MegaGrab_t3536580094  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera MegaGrab::SrcCamera
	Camera_t2727095145 * ___SrcCamera_2;
	// UnityEngine.KeyCode MegaGrab::GrabKey
	int32_t ___GrabKey_3;
	// System.Int32 MegaGrab::ResUpscale
	int32_t ___ResUpscale_4;
	// System.Single MegaGrab::Blur
	float ___Blur_5;
	// System.Int32 MegaGrab::AASamples
	int32_t ___AASamples_6;
	// UnityEngine.AnisotropicFiltering MegaGrab::FilterMode
	int32_t ___FilterMode_7;
	// System.Boolean MegaGrab::UseJitter
	bool ___UseJitter_8;
	// System.String MegaGrab::SaveName
	String_t* ___SaveName_9;
	// System.String MegaGrab::Format
	String_t* ___Format_10;
	// System.String MegaGrab::Enviro
	String_t* ___Enviro_11;
	// System.String MegaGrab::Path
	String_t* ___Path_12;
	// System.Boolean MegaGrab::UseDOF
	bool ___UseDOF_13;
	// System.Single MegaGrab::focalDistance
	float ___focalDistance_14;
	// System.Int32 MegaGrab::totalSegments
	int32_t ___totalSegments_15;
	// System.Single MegaGrab::sampleRadius
	float ___sampleRadius_16;
	// System.Boolean MegaGrab::CalcFromSize
	bool ___CalcFromSize_17;
	// System.Int32 MegaGrab::Dpi
	int32_t ___Dpi_18;
	// System.Single MegaGrab::Width
	float ___Width_19;
	// System.Int32 MegaGrab::NumberOfGrabs
	int32_t ___NumberOfGrabs_20;
	// System.Single MegaGrab::EstimatedTime
	float ___EstimatedTime_21;
	// System.Int32 MegaGrab::GrabWidthWillBe
	int32_t ___GrabWidthWillBe_22;
	// System.Int32 MegaGrab::GrabHeightWillBe
	int32_t ___GrabHeightWillBe_23;
	// System.Boolean MegaGrab::UseCoroutine
	bool ___UseCoroutine_24;
	// System.Single MegaGrab::mleft
	float ___mleft_25;
	// System.Single MegaGrab::mright
	float ___mright_26;
	// System.Single MegaGrab::mtop
	float ___mtop_27;
	// System.Single MegaGrab::mbottom
	float ___mbottom_28;
	// System.Int32 MegaGrab::sampcount
	int32_t ___sampcount_29;
	// UnityEngine.Vector2[] MegaGrab::poisson
	Vector2U5BU5D_t4024180168* ___poisson_30;
	// UnityEngine.Texture2D MegaGrab::grabtex
	Texture2D_t3884108195 * ___grabtex_31;
	// UnityEngine.Color[,] MegaGrab::accbuf
	ColorU5BU2CU5D_t2441545637* ___accbuf_32;
	// UnityEngine.Color[,] MegaGrab::blendbuf
	ColorU5BU2CU5D_t2441545637* ___blendbuf_33;
	// System.Byte[] MegaGrab::output1
	ByteU5BU5D_t4260760469* ___output1_34;
	// UnityEngine.Color[] MegaGrab::outputjpg
	ColorU5BU5D_t2441545636* ___outputjpg_35;
	// UnityEngine.AnisotropicFiltering MegaGrab::filtering
	int32_t ___filtering_36;
	// MGBlendTable MegaGrab::blendtable
	MGBlendTable_t2313184055 * ___blendtable_37;
	// System.Int32 MegaGrab::DOFSamples
	int32_t ___DOFSamples_38;
	// UnityEngine.Vector3 MegaGrab::camfor
	Vector3_t4282066566  ___camfor_39;
	// UnityEngine.Vector3 MegaGrab::campos
	Vector3_t4282066566  ___campos_40;
	// UnityEngine.Matrix4x4 MegaGrab::camtm
	Matrix4x4_t1651859333  ___camtm_41;
	// IMGFormat MegaGrab::OutputFormat
	int32_t ___OutputFormat_42;
	// System.Single MegaGrab::Quality
	float ___Quality_43;
	// System.Boolean MegaGrab::uploadGrabs
	bool ___uploadGrabs_44;
	// System.String MegaGrab::m_URL
	String_t* ___m_URL_45;

public:
	inline static int32_t get_offset_of_SrcCamera_2() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___SrcCamera_2)); }
	inline Camera_t2727095145 * get_SrcCamera_2() const { return ___SrcCamera_2; }
	inline Camera_t2727095145 ** get_address_of_SrcCamera_2() { return &___SrcCamera_2; }
	inline void set_SrcCamera_2(Camera_t2727095145 * value)
	{
		___SrcCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___SrcCamera_2, value);
	}

	inline static int32_t get_offset_of_GrabKey_3() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___GrabKey_3)); }
	inline int32_t get_GrabKey_3() const { return ___GrabKey_3; }
	inline int32_t* get_address_of_GrabKey_3() { return &___GrabKey_3; }
	inline void set_GrabKey_3(int32_t value)
	{
		___GrabKey_3 = value;
	}

	inline static int32_t get_offset_of_ResUpscale_4() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___ResUpscale_4)); }
	inline int32_t get_ResUpscale_4() const { return ___ResUpscale_4; }
	inline int32_t* get_address_of_ResUpscale_4() { return &___ResUpscale_4; }
	inline void set_ResUpscale_4(int32_t value)
	{
		___ResUpscale_4 = value;
	}

	inline static int32_t get_offset_of_Blur_5() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Blur_5)); }
	inline float get_Blur_5() const { return ___Blur_5; }
	inline float* get_address_of_Blur_5() { return &___Blur_5; }
	inline void set_Blur_5(float value)
	{
		___Blur_5 = value;
	}

	inline static int32_t get_offset_of_AASamples_6() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___AASamples_6)); }
	inline int32_t get_AASamples_6() const { return ___AASamples_6; }
	inline int32_t* get_address_of_AASamples_6() { return &___AASamples_6; }
	inline void set_AASamples_6(int32_t value)
	{
		___AASamples_6 = value;
	}

	inline static int32_t get_offset_of_FilterMode_7() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___FilterMode_7)); }
	inline int32_t get_FilterMode_7() const { return ___FilterMode_7; }
	inline int32_t* get_address_of_FilterMode_7() { return &___FilterMode_7; }
	inline void set_FilterMode_7(int32_t value)
	{
		___FilterMode_7 = value;
	}

	inline static int32_t get_offset_of_UseJitter_8() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___UseJitter_8)); }
	inline bool get_UseJitter_8() const { return ___UseJitter_8; }
	inline bool* get_address_of_UseJitter_8() { return &___UseJitter_8; }
	inline void set_UseJitter_8(bool value)
	{
		___UseJitter_8 = value;
	}

	inline static int32_t get_offset_of_SaveName_9() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___SaveName_9)); }
	inline String_t* get_SaveName_9() const { return ___SaveName_9; }
	inline String_t** get_address_of_SaveName_9() { return &___SaveName_9; }
	inline void set_SaveName_9(String_t* value)
	{
		___SaveName_9 = value;
		Il2CppCodeGenWriteBarrier(&___SaveName_9, value);
	}

	inline static int32_t get_offset_of_Format_10() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Format_10)); }
	inline String_t* get_Format_10() const { return ___Format_10; }
	inline String_t** get_address_of_Format_10() { return &___Format_10; }
	inline void set_Format_10(String_t* value)
	{
		___Format_10 = value;
		Il2CppCodeGenWriteBarrier(&___Format_10, value);
	}

	inline static int32_t get_offset_of_Enviro_11() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Enviro_11)); }
	inline String_t* get_Enviro_11() const { return ___Enviro_11; }
	inline String_t** get_address_of_Enviro_11() { return &___Enviro_11; }
	inline void set_Enviro_11(String_t* value)
	{
		___Enviro_11 = value;
		Il2CppCodeGenWriteBarrier(&___Enviro_11, value);
	}

	inline static int32_t get_offset_of_Path_12() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Path_12)); }
	inline String_t* get_Path_12() const { return ___Path_12; }
	inline String_t** get_address_of_Path_12() { return &___Path_12; }
	inline void set_Path_12(String_t* value)
	{
		___Path_12 = value;
		Il2CppCodeGenWriteBarrier(&___Path_12, value);
	}

	inline static int32_t get_offset_of_UseDOF_13() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___UseDOF_13)); }
	inline bool get_UseDOF_13() const { return ___UseDOF_13; }
	inline bool* get_address_of_UseDOF_13() { return &___UseDOF_13; }
	inline void set_UseDOF_13(bool value)
	{
		___UseDOF_13 = value;
	}

	inline static int32_t get_offset_of_focalDistance_14() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___focalDistance_14)); }
	inline float get_focalDistance_14() const { return ___focalDistance_14; }
	inline float* get_address_of_focalDistance_14() { return &___focalDistance_14; }
	inline void set_focalDistance_14(float value)
	{
		___focalDistance_14 = value;
	}

	inline static int32_t get_offset_of_totalSegments_15() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___totalSegments_15)); }
	inline int32_t get_totalSegments_15() const { return ___totalSegments_15; }
	inline int32_t* get_address_of_totalSegments_15() { return &___totalSegments_15; }
	inline void set_totalSegments_15(int32_t value)
	{
		___totalSegments_15 = value;
	}

	inline static int32_t get_offset_of_sampleRadius_16() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___sampleRadius_16)); }
	inline float get_sampleRadius_16() const { return ___sampleRadius_16; }
	inline float* get_address_of_sampleRadius_16() { return &___sampleRadius_16; }
	inline void set_sampleRadius_16(float value)
	{
		___sampleRadius_16 = value;
	}

	inline static int32_t get_offset_of_CalcFromSize_17() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___CalcFromSize_17)); }
	inline bool get_CalcFromSize_17() const { return ___CalcFromSize_17; }
	inline bool* get_address_of_CalcFromSize_17() { return &___CalcFromSize_17; }
	inline void set_CalcFromSize_17(bool value)
	{
		___CalcFromSize_17 = value;
	}

	inline static int32_t get_offset_of_Dpi_18() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Dpi_18)); }
	inline int32_t get_Dpi_18() const { return ___Dpi_18; }
	inline int32_t* get_address_of_Dpi_18() { return &___Dpi_18; }
	inline void set_Dpi_18(int32_t value)
	{
		___Dpi_18 = value;
	}

	inline static int32_t get_offset_of_Width_19() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Width_19)); }
	inline float get_Width_19() const { return ___Width_19; }
	inline float* get_address_of_Width_19() { return &___Width_19; }
	inline void set_Width_19(float value)
	{
		___Width_19 = value;
	}

	inline static int32_t get_offset_of_NumberOfGrabs_20() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___NumberOfGrabs_20)); }
	inline int32_t get_NumberOfGrabs_20() const { return ___NumberOfGrabs_20; }
	inline int32_t* get_address_of_NumberOfGrabs_20() { return &___NumberOfGrabs_20; }
	inline void set_NumberOfGrabs_20(int32_t value)
	{
		___NumberOfGrabs_20 = value;
	}

	inline static int32_t get_offset_of_EstimatedTime_21() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___EstimatedTime_21)); }
	inline float get_EstimatedTime_21() const { return ___EstimatedTime_21; }
	inline float* get_address_of_EstimatedTime_21() { return &___EstimatedTime_21; }
	inline void set_EstimatedTime_21(float value)
	{
		___EstimatedTime_21 = value;
	}

	inline static int32_t get_offset_of_GrabWidthWillBe_22() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___GrabWidthWillBe_22)); }
	inline int32_t get_GrabWidthWillBe_22() const { return ___GrabWidthWillBe_22; }
	inline int32_t* get_address_of_GrabWidthWillBe_22() { return &___GrabWidthWillBe_22; }
	inline void set_GrabWidthWillBe_22(int32_t value)
	{
		___GrabWidthWillBe_22 = value;
	}

	inline static int32_t get_offset_of_GrabHeightWillBe_23() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___GrabHeightWillBe_23)); }
	inline int32_t get_GrabHeightWillBe_23() const { return ___GrabHeightWillBe_23; }
	inline int32_t* get_address_of_GrabHeightWillBe_23() { return &___GrabHeightWillBe_23; }
	inline void set_GrabHeightWillBe_23(int32_t value)
	{
		___GrabHeightWillBe_23 = value;
	}

	inline static int32_t get_offset_of_UseCoroutine_24() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___UseCoroutine_24)); }
	inline bool get_UseCoroutine_24() const { return ___UseCoroutine_24; }
	inline bool* get_address_of_UseCoroutine_24() { return &___UseCoroutine_24; }
	inline void set_UseCoroutine_24(bool value)
	{
		___UseCoroutine_24 = value;
	}

	inline static int32_t get_offset_of_mleft_25() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___mleft_25)); }
	inline float get_mleft_25() const { return ___mleft_25; }
	inline float* get_address_of_mleft_25() { return &___mleft_25; }
	inline void set_mleft_25(float value)
	{
		___mleft_25 = value;
	}

	inline static int32_t get_offset_of_mright_26() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___mright_26)); }
	inline float get_mright_26() const { return ___mright_26; }
	inline float* get_address_of_mright_26() { return &___mright_26; }
	inline void set_mright_26(float value)
	{
		___mright_26 = value;
	}

	inline static int32_t get_offset_of_mtop_27() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___mtop_27)); }
	inline float get_mtop_27() const { return ___mtop_27; }
	inline float* get_address_of_mtop_27() { return &___mtop_27; }
	inline void set_mtop_27(float value)
	{
		___mtop_27 = value;
	}

	inline static int32_t get_offset_of_mbottom_28() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___mbottom_28)); }
	inline float get_mbottom_28() const { return ___mbottom_28; }
	inline float* get_address_of_mbottom_28() { return &___mbottom_28; }
	inline void set_mbottom_28(float value)
	{
		___mbottom_28 = value;
	}

	inline static int32_t get_offset_of_sampcount_29() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___sampcount_29)); }
	inline int32_t get_sampcount_29() const { return ___sampcount_29; }
	inline int32_t* get_address_of_sampcount_29() { return &___sampcount_29; }
	inline void set_sampcount_29(int32_t value)
	{
		___sampcount_29 = value;
	}

	inline static int32_t get_offset_of_poisson_30() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___poisson_30)); }
	inline Vector2U5BU5D_t4024180168* get_poisson_30() const { return ___poisson_30; }
	inline Vector2U5BU5D_t4024180168** get_address_of_poisson_30() { return &___poisson_30; }
	inline void set_poisson_30(Vector2U5BU5D_t4024180168* value)
	{
		___poisson_30 = value;
		Il2CppCodeGenWriteBarrier(&___poisson_30, value);
	}

	inline static int32_t get_offset_of_grabtex_31() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___grabtex_31)); }
	inline Texture2D_t3884108195 * get_grabtex_31() const { return ___grabtex_31; }
	inline Texture2D_t3884108195 ** get_address_of_grabtex_31() { return &___grabtex_31; }
	inline void set_grabtex_31(Texture2D_t3884108195 * value)
	{
		___grabtex_31 = value;
		Il2CppCodeGenWriteBarrier(&___grabtex_31, value);
	}

	inline static int32_t get_offset_of_accbuf_32() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___accbuf_32)); }
	inline ColorU5BU2CU5D_t2441545637* get_accbuf_32() const { return ___accbuf_32; }
	inline ColorU5BU2CU5D_t2441545637** get_address_of_accbuf_32() { return &___accbuf_32; }
	inline void set_accbuf_32(ColorU5BU2CU5D_t2441545637* value)
	{
		___accbuf_32 = value;
		Il2CppCodeGenWriteBarrier(&___accbuf_32, value);
	}

	inline static int32_t get_offset_of_blendbuf_33() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___blendbuf_33)); }
	inline ColorU5BU2CU5D_t2441545637* get_blendbuf_33() const { return ___blendbuf_33; }
	inline ColorU5BU2CU5D_t2441545637** get_address_of_blendbuf_33() { return &___blendbuf_33; }
	inline void set_blendbuf_33(ColorU5BU2CU5D_t2441545637* value)
	{
		___blendbuf_33 = value;
		Il2CppCodeGenWriteBarrier(&___blendbuf_33, value);
	}

	inline static int32_t get_offset_of_output1_34() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___output1_34)); }
	inline ByteU5BU5D_t4260760469* get_output1_34() const { return ___output1_34; }
	inline ByteU5BU5D_t4260760469** get_address_of_output1_34() { return &___output1_34; }
	inline void set_output1_34(ByteU5BU5D_t4260760469* value)
	{
		___output1_34 = value;
		Il2CppCodeGenWriteBarrier(&___output1_34, value);
	}

	inline static int32_t get_offset_of_outputjpg_35() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___outputjpg_35)); }
	inline ColorU5BU5D_t2441545636* get_outputjpg_35() const { return ___outputjpg_35; }
	inline ColorU5BU5D_t2441545636** get_address_of_outputjpg_35() { return &___outputjpg_35; }
	inline void set_outputjpg_35(ColorU5BU5D_t2441545636* value)
	{
		___outputjpg_35 = value;
		Il2CppCodeGenWriteBarrier(&___outputjpg_35, value);
	}

	inline static int32_t get_offset_of_filtering_36() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___filtering_36)); }
	inline int32_t get_filtering_36() const { return ___filtering_36; }
	inline int32_t* get_address_of_filtering_36() { return &___filtering_36; }
	inline void set_filtering_36(int32_t value)
	{
		___filtering_36 = value;
	}

	inline static int32_t get_offset_of_blendtable_37() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___blendtable_37)); }
	inline MGBlendTable_t2313184055 * get_blendtable_37() const { return ___blendtable_37; }
	inline MGBlendTable_t2313184055 ** get_address_of_blendtable_37() { return &___blendtable_37; }
	inline void set_blendtable_37(MGBlendTable_t2313184055 * value)
	{
		___blendtable_37 = value;
		Il2CppCodeGenWriteBarrier(&___blendtable_37, value);
	}

	inline static int32_t get_offset_of_DOFSamples_38() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___DOFSamples_38)); }
	inline int32_t get_DOFSamples_38() const { return ___DOFSamples_38; }
	inline int32_t* get_address_of_DOFSamples_38() { return &___DOFSamples_38; }
	inline void set_DOFSamples_38(int32_t value)
	{
		___DOFSamples_38 = value;
	}

	inline static int32_t get_offset_of_camfor_39() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___camfor_39)); }
	inline Vector3_t4282066566  get_camfor_39() const { return ___camfor_39; }
	inline Vector3_t4282066566 * get_address_of_camfor_39() { return &___camfor_39; }
	inline void set_camfor_39(Vector3_t4282066566  value)
	{
		___camfor_39 = value;
	}

	inline static int32_t get_offset_of_campos_40() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___campos_40)); }
	inline Vector3_t4282066566  get_campos_40() const { return ___campos_40; }
	inline Vector3_t4282066566 * get_address_of_campos_40() { return &___campos_40; }
	inline void set_campos_40(Vector3_t4282066566  value)
	{
		___campos_40 = value;
	}

	inline static int32_t get_offset_of_camtm_41() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___camtm_41)); }
	inline Matrix4x4_t1651859333  get_camtm_41() const { return ___camtm_41; }
	inline Matrix4x4_t1651859333 * get_address_of_camtm_41() { return &___camtm_41; }
	inline void set_camtm_41(Matrix4x4_t1651859333  value)
	{
		___camtm_41 = value;
	}

	inline static int32_t get_offset_of_OutputFormat_42() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___OutputFormat_42)); }
	inline int32_t get_OutputFormat_42() const { return ___OutputFormat_42; }
	inline int32_t* get_address_of_OutputFormat_42() { return &___OutputFormat_42; }
	inline void set_OutputFormat_42(int32_t value)
	{
		___OutputFormat_42 = value;
	}

	inline static int32_t get_offset_of_Quality_43() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___Quality_43)); }
	inline float get_Quality_43() const { return ___Quality_43; }
	inline float* get_address_of_Quality_43() { return &___Quality_43; }
	inline void set_Quality_43(float value)
	{
		___Quality_43 = value;
	}

	inline static int32_t get_offset_of_uploadGrabs_44() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___uploadGrabs_44)); }
	inline bool get_uploadGrabs_44() const { return ___uploadGrabs_44; }
	inline bool* get_address_of_uploadGrabs_44() { return &___uploadGrabs_44; }
	inline void set_uploadGrabs_44(bool value)
	{
		___uploadGrabs_44 = value;
	}

	inline static int32_t get_offset_of_m_URL_45() { return static_cast<int32_t>(offsetof(MegaGrab_t3536580094, ___m_URL_45)); }
	inline String_t* get_m_URL_45() const { return ___m_URL_45; }
	inline String_t** get_address_of_m_URL_45() { return &___m_URL_45; }
	inline void set_m_URL_45(String_t* value)
	{
		___m_URL_45 = value;
		Il2CppCodeGenWriteBarrier(&___m_URL_45, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
