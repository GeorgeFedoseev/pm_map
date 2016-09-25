#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MegaGrab
struct MegaGrab_t3536580094;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "mscorlib_System_String7231557.h"

// System.Void MegaGrab::.ctor()
extern "C"  void MegaGrab__ctor_m2293083741 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::CalcDOFInfo(UnityEngine.Camera)
extern "C"  void MegaGrab_CalcDOFInfo_m834576979 (MegaGrab_t3536580094 * __this, Camera_t2727095145 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::ChangeDOFPos(System.Int32)
extern "C"  void MegaGrab_ChangeDOFPos_m209467201 (MegaGrab_t3536580094 * __this, int32_t ___segment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 MegaGrab::PerspectiveOffCenter(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t1651859333  MegaGrab_PerspectiveOffCenter_m3613116794 (Il2CppObject * __this /* static, unused */, float ___left0, float ___right1, float ___bottom2, float ___top3, float ___near4, float ___far5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 MegaGrab::CalcProjectionMatrix(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t1651859333  MegaGrab_CalcProjectionMatrix_m2349329799 (MegaGrab_t3536580094 * __this, float ___left0, float ___right1, float ___bottom2, float ___top3, float ___near4, float ___far5, float ___xoff6, float ___yoff7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::Cleanup()
extern "C"  void MegaGrab_Cleanup_m3004013215 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MegaGrab::InitGrab(System.Int32,System.Int32,System.Int32)
extern "C"  bool MegaGrab_InitGrab_m445475752 (MegaGrab_t3536580094 * __this, int32_t ___width0, int32_t ___height1, int32_t ___aasamples2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MegaGrab::GrabImage(System.Int32,System.Single,System.Single)
extern "C"  Texture2D_t3884108195 * MegaGrab_GrabImage_m992642024 (MegaGrab_t3536580094 * __this, int32_t ___samples0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::GrabAA(System.Single,System.Single)
extern "C"  void MegaGrab_GrabAA_m2451845949 (MegaGrab_t3536580094 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MegaGrab::GrabImageDOF(System.Int32,System.Single,System.Single)
extern "C"  Texture2D_t3884108195 * MegaGrab_GrabImageDOF_m1889955243 (MegaGrab_t3536580094 * __this, int32_t ___samples0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::DoGrabTGA()
extern "C"  void MegaGrab_DoGrabTGA_m1277705234 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::DoGrabJPG()
extern "C"  void MegaGrab_DoGrabJPG_m1268743909 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::SaveJPG(System.String,System.Int32,System.Int32,UnityEngine.Color[])
extern "C"  void MegaGrab_SaveJPG_m2666328545 (MegaGrab_t3536580094 * __this, String_t* ___filename0, int32_t ___width1, int32_t ___height2, ColorU5BU5D_t2441545636* ___pixels3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::UploadJPG(System.String,System.Int32,System.Int32,UnityEngine.Color[])
extern "C"  void MegaGrab_UploadJPG_m3085649125 (MegaGrab_t3536580094 * __this, String_t* ___filename0, int32_t ___width1, int32_t ___height2, ColorU5BU5D_t2441545636* ___pixels3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::SaveTGA(System.String,System.Int32,System.Int32,System.Byte[])
extern "C"  void MegaGrab_SaveTGA_m3286585497 (MegaGrab_t3536580094 * __this, String_t* ___filename0, int32_t ___width1, int32_t ___height2, ByteU5BU5D_t4260760469* ___pixels3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::CalcUpscale()
extern "C"  void MegaGrab_CalcUpscale_m305561845 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::CalcEstimate()
extern "C"  void MegaGrab_CalcEstimate_m1711096996 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MegaGrab::GrabCoroutine()
extern "C"  Il2CppObject * MegaGrab_GrabCoroutine_m1607728927 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::LateUpdate()
extern "C"  void MegaGrab_LateUpdate_m3728150038 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::OnDrawGizmos()
extern "C"  void MegaGrab_OnDrawGizmos_m2081026083 (MegaGrab_t3536580094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MegaGrab::UploadFileCo(System.Byte[],System.String,System.String)
extern "C"  Il2CppObject * MegaGrab_UploadFileCo_m2068406537 (MegaGrab_t3536580094 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___uploadURL1, String_t* ___filename2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MegaGrab::UploadFile(System.Byte[],System.String,System.String)
extern "C"  void MegaGrab_UploadFile_m2607724957 (MegaGrab_t3536580094 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___uploadURL1, String_t* ___filename2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MegaGrab::UploadLevel(System.Byte[],System.String,System.String)
extern "C"  Il2CppObject * MegaGrab_UploadLevel_m3658467979 (MegaGrab_t3536580094 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___uploadURL1, String_t* ___filename2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
