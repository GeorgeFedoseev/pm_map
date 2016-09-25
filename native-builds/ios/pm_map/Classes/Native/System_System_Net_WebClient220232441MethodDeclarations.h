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

// System.Net.WebClient
struct WebClient_t220232441;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Net.IWebProxy
struct IWebProxy_t354717117;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Uri
struct Uri_t1116831938;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t1561764144;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t51806901;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t1659668818;
// System.Net.WebResponse
struct WebResponse_t3238378095;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_Net_DownloadProgressChangedEventArgs1659668818.h"
#include "System_System_Net_WebRequest51806901.h"

// System.Void System.Net.WebClient::.ctor()
extern "C"  void WebClient__ctor_m2477960557 (WebClient_t220232441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::.cctor()
extern "C"  void WebClient__cctor_m3320237024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebClient::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * WebClient_get_Headers_m4159086712 (WebClient_t220232441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_Encoding(System.Text.Encoding)
extern "C"  void WebClient_set_Encoding_m1478904018 (WebClient_t220232441 * __this, Encoding_t2012439129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebClient::get_Proxy()
extern "C"  Il2CppObject * WebClient_get_Proxy_m212112292 (WebClient_t220232441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebClient::get_IsBusy()
extern "C"  bool WebClient_get_IsBusy_m2414763289 (WebClient_t220232441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CheckBusy()
extern "C"  void WebClient_CheckBusy_m581754988 (WebClient_t220232441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::SetBusy()
extern "C"  void WebClient_SetBusy_m1659299526 (WebClient_t220232441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadData(System.Uri)
extern "C"  ByteU5BU5D_t4260760469* WebClient_DownloadData_m2315567654 (WebClient_t220232441 * __this, Uri_t1116831938 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadDataCore(System.Uri,System.Object)
extern "C"  ByteU5BU5D_t4260760469* WebClient_DownloadDataCore_m2361543795 (WebClient_t220232441 * __this, Uri_t1116831938 * ___address0, Il2CppObject * ___userToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenRead(System.String)
extern "C"  Stream_t1561764144 * WebClient_OpenRead_m3296615413 (WebClient_t220232441 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenRead(System.Uri)
extern "C"  Stream_t1561764144 * WebClient_OpenRead_m2405355424 (WebClient_t220232441 * __this, Uri_t1116831938 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::DownloadString(System.String)
extern "C"  String_t* WebClient_DownloadString_m2198465167 (WebClient_t220232441 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::CreateUri(System.String)
extern "C"  Uri_t1116831938 * WebClient_CreateUri_m3126770009 (WebClient_t220232441 * __this, String_t* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::GetQueryString(System.Boolean)
extern "C"  String_t* WebClient_GetQueryString_m3086610068 (WebClient_t220232441 * __this, bool ___add_qmark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::MakeUri(System.String)
extern "C"  Uri_t1116831938 * WebClient_MakeUri_m1674872779 (WebClient_t220232441 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::SetupRequest(System.Uri)
extern "C"  WebRequest_t51806901 * WebClient_SetupRequest_m931338404 (WebClient_t220232441 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::ReadAll(System.IO.Stream,System.Int32,System.Object)
extern "C"  ByteU5BU5D_t4260760469* WebClient_ReadAll_m1240881634 (WebClient_t220232441 * __this, Stream_t1561764144 * ___stream0, int32_t ___length1, Il2CppObject * ___userToken2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UrlEncode(System.String)
extern "C"  String_t* WebClient_UrlEncode_m1541238133 (WebClient_t220232441 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadProgressChanged(System.Net.DownloadProgressChangedEventArgs)
extern "C"  void WebClient_OnDownloadProgressChanged_m2326155103 (WebClient_t220232441 * __this, DownloadProgressChangedEventArgs_t1659668818 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::GetWebRequest(System.Uri)
extern "C"  WebRequest_t51806901 * WebClient_GetWebRequest_m2859966311 (WebClient_t220232441 * __this, Uri_t1116831938 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebClient::GetWebResponse(System.Net.WebRequest)
extern "C"  WebResponse_t3238378095 * WebClient_GetWebResponse_m242843735 (WebClient_t220232441 * __this, WebRequest_t51806901 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
