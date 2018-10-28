#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// SenseEngineUnityPlugin.CHumanEventPacketPool
struct CHumanEventPacketPool_t4236893195;
// SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>
struct CPool_1_t3675659507;
// SenseEngineUnityPlugin.CHumanEventResultPool
struct CHumanEventResultPool_t270739256;
// SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>
struct CPool_1_t761353041;
// SenseEngineUnityPlugin.CSenseEngine
struct CSenseEngine_t3384788086;
// SenseEngineUnityPlugin.OnHumanEnterDelegate
struct OnHumanEnterDelegate_t240558909;
// System.Delegate
struct Delegate_t1188392813;
// SenseEngineUnityPlugin.OnHumanStayDelegate
struct OnHumanStayDelegate_t3931784964;
// SenseEngineUnityPlugin.OnHumanExitDelegate
struct OnHumanExitDelegate_t2852278738;
// SenseEngineUnityPlugin.OnRawParticlesDelegate
struct OnRawParticlesDelegate_t79072485;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// SenseEngineUnityPlugin.SPosition[]
struct SPositionU5BU5D_t2124893968;
// System.Type
struct Type_t;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Net.Sockets.UdpClient
struct UdpClient_t967282006;
// System.String[]
struct StringU5BU5D_t1281789340;
// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>
struct ConcurrentQueue_1_t3212134643;
// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]>
struct ConcurrentQueue_1_t4106758557;
// SenseEngineUnityPlugin.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t767003457;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// SenseEngineUnityPlugin.Logger
struct Logger_t894154007;
// SenseEngineUnityPlugin.OnNonHumanParticlesDelegate
struct OnNonHumanParticlesDelegate_t4246801237;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// SenseEngineUnityPlugin.ConcurrentQueue`1/Node<SenseEngineUnityPlugin.SHumanEventResult>
struct Node_t883518289;
// System.Char[]
struct CharU5BU5D_t3528271667;
// SenseEngineUnityPlugin.ConcurrentQueue`1/Node<SenseEngineUnityPlugin.SPosition[]>
struct Node_t1778142203;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.Queue`1<SenseEngineUnityPlugin.SHumanEventResult>
struct Queue_1_t1076529548;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.Generic.Queue`1<SenseEngineUnityPlugin.SHumanPacket>
struct Queue_1_t3990836014;
// System.Void
struct Void_t1185182177;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;

extern const RuntimeMethod* CPool_1__ctor_m497429737_RuntimeMethod_var;
extern const uint32_t CHumanEventPacketPool__ctor_m2273421908_MetadataUsageId;
extern const RuntimeMethod* CPool_1__ctor_m2951116350_RuntimeMethod_var;
extern const uint32_t CHumanEventResultPool__ctor_m2868342503_MetadataUsageId;
extern RuntimeClass* OnHumanEnterDelegate_t240558909_il2cpp_TypeInfo_var;
extern const uint32_t CSenseEngine_add_OnHumanEnter_m204865810_MetadataUsageId;
extern const uint32_t CSenseEngine_remove_OnHumanEnter_m2817276709_MetadataUsageId;
extern RuntimeClass* OnHumanStayDelegate_t3931784964_il2cpp_TypeInfo_var;
extern const uint32_t CSenseEngine_add_OnHumanStay_m1553587800_MetadataUsageId;
extern const uint32_t CSenseEngine_remove_OnHumanStay_m3356247978_MetadataUsageId;
extern RuntimeClass* OnHumanExitDelegate_t2852278738_il2cpp_TypeInfo_var;
extern const uint32_t CSenseEngine_add_OnHumanExit_m2606071700_MetadataUsageId;
extern const uint32_t CSenseEngine_remove_OnHumanExit_m3519074465_MetadataUsageId;
extern RuntimeClass* OnRawParticlesDelegate_t79072485_il2cpp_TypeInfo_var;
extern const uint32_t CSenseEngine_add_OnRawParticles_m1519457411_MetadataUsageId;
extern const uint32_t CSenseEngine_remove_OnRawParticles_m3853643022_MetadataUsageId;
extern const RuntimeType* SPosition_t764125_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CSenseEngine_ByteArrayToPositionArray_m1458804841_RuntimeMethod_var;
extern String_t* _stringLiteral1219827101;
extern const uint32_t CSenseEngine_ByteArrayToPositionArray_m1458804841_MetadataUsageId;
extern const RuntimeType* SHumanPacket_t4144576520_0_0_0_var;
extern const RuntimeType* SRawParticlesPacket_t564541380_0_0_0_var;
extern const RuntimeType* SNonHumanParticlesPacket_t125939772_0_0_0_var;
extern RuntimeClass* IPAddress_t241777590_il2cpp_TypeInfo_var;
extern RuntimeClass* IPEndPoint_t3791887218_il2cpp_TypeInfo_var;
extern RuntimeClass* Logger_t894154007_il2cpp_TypeInfo_var;
extern RuntimeClass* SPositionU5BU5D_t2124893968_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CSenseEngine_ByteArrayToStructure_TisSPacketHeader_t1947517642_m3813042819_RuntimeMethod_var;
extern const RuntimeMethod* CPool_1_Obtain_m440268997_RuntimeMethod_var;
extern const RuntimeMethod* CSenseEngine_ByteArrayToStructure_TisSHumanPacket_t4144576520_m4100854157_RuntimeMethod_var;
extern const RuntimeMethod* CPool_1_Obtain_m3190329471_RuntimeMethod_var;
extern const RuntimeMethod* ConcurrentQueue_1_Enqueue_m3093795119_RuntimeMethod_var;
extern const RuntimeMethod* CSenseEngine_ByteArrayToStructure_TisSRawParticlesPacket_t564541380_m3232834802_RuntimeMethod_var;
extern const RuntimeMethod* ConcurrentQueue_1_Enqueue_m822006977_RuntimeMethod_var;
extern const RuntimeMethod* CSenseEngine_ByteArrayToStructure_TisSNonHumanParticlesPacket_t125939772_m4158229944_RuntimeMethod_var;
extern const RuntimeMethod* CSenseEngine_onReceivePacket_m999933735_RuntimeMethod_var;
extern String_t* _stringLiteral3127255335;
extern String_t* _stringLiteral1054727619;
extern String_t* _stringLiteral1410056321;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral4011720098;
extern String_t* _stringLiteral1470515767;
extern const uint32_t CSenseEngine_onReceivePacket_m999933735_MetadataUsageId;
extern RuntimeClass* ConcurrentQueue_1_t3212134643_il2cpp_TypeInfo_var;
extern RuntimeClass* ConcurrentQueue_1_t4106758557_il2cpp_TypeInfo_var;
extern RuntimeClass* CHumanEventPacketPool_t4236893195_il2cpp_TypeInfo_var;
extern RuntimeClass* CHumanEventResultPool_t270739256_il2cpp_TypeInfo_var;
extern RuntimeClass* UdpClient_t967282006_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConcurrentQueue_1__ctor_m164483968_RuntimeMethod_var;
extern const RuntimeMethod* ConcurrentQueue_1__ctor_m520030090_RuntimeMethod_var;
extern const uint32_t CSenseEngine__ctor_m2218837759_MetadataUsageId;
extern String_t* _stringLiteral3197055874;
extern const uint32_t CSenseEngine_Start_m3457766427_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m2077850534_RuntimeMethod_var;
extern const RuntimeMethod* CPool_1_Free_m2887872382_RuntimeMethod_var;
extern const RuntimeMethod* CPool_1_Free_m1304239724_RuntimeMethod_var;
extern const RuntimeMethod* ConcurrentQueue_1_get_Count_m4142606748_RuntimeMethod_var;
extern const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m546868922_RuntimeMethod_var;
extern const RuntimeMethod* ConcurrentQueue_1_get_Count_m3996068592_RuntimeMethod_var;
extern String_t* _stringLiteral2768191473;
extern String_t* _stringLiteral1732046573;
extern String_t* _stringLiteral367740585;
extern String_t* _stringLiteral1583474231;
extern String_t* _stringLiteral884249691;
extern const uint32_t CSenseEngine_Update_m270325699_MetadataUsageId;
extern RuntimeClass* IAsyncResult_t767004451_il2cpp_TypeInfo_var;
extern const uint32_t CSenseEngine_Stop_m2143479435_MetadataUsageId;
extern String_t* _stringLiteral95342995;
extern const uint32_t Logger_CreateErrorLog_m2299457989_MetadataUsageId;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral843515249;
extern String_t* _stringLiteral4145767372;
extern const uint32_t Logger__ctor_m4251129197_MetadataUsageId;
extern const uint32_t Logger_LogError_m583124990_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4034612726;
extern const uint32_t Logger_Log_m771409156_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t OnHumanEnterDelegate_BeginInvoke_m2948529209_MetadataUsageId;
extern const uint32_t OnHumanExitDelegate_BeginInvoke_m3469607018_MetadataUsageId;
extern const uint32_t OnHumanStayDelegate_BeginInvoke_m2084804469_MetadataUsageId;
struct SPosition_t764125 ;

struct ByteU5BU5D_t4116647657;
struct SPositionU5BU5D_t2124893968;
struct StringU5BU5D_t1281789340;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745551_H
#define U3CMODULEU3E_T692745551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745551 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745551_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef CONCURRENTQUEUE_1_T3212134643_H
#define CONCURRENTQUEUE_1_T3212134643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>
struct  ConcurrentQueue_1_t3212134643  : public RuntimeObject
{
public:
	// SenseEngineUnityPlugin.ConcurrentQueue`1/Node<T> SenseEngineUnityPlugin.ConcurrentQueue`1::head
	Node_t883518289 * ___head_0;
	// SenseEngineUnityPlugin.ConcurrentQueue`1/Node<T> SenseEngineUnityPlugin.ConcurrentQueue`1::tail
	Node_t883518289 * ___tail_1;
	// System.Int32 SenseEngineUnityPlugin.ConcurrentQueue`1::count
	int32_t ___count_2;
	// System.Object SenseEngineUnityPlugin.ConcurrentQueue`1::syncRoot
	RuntimeObject * ___syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3212134643, ___head_0)); }
	inline Node_t883518289 * get_head_0() const { return ___head_0; }
	inline Node_t883518289 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t883518289 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3212134643, ___tail_1)); }
	inline Node_t883518289 * get_tail_1() const { return ___tail_1; }
	inline Node_t883518289 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t883518289 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3212134643, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_syncRoot_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t3212134643, ___syncRoot_3)); }
	inline RuntimeObject * get_syncRoot_3() const { return ___syncRoot_3; }
	inline RuntimeObject ** get_address_of_syncRoot_3() { return &___syncRoot_3; }
	inline void set_syncRoot_3(RuntimeObject * value)
	{
		___syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONCURRENTQUEUE_1_T3212134643_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CONCURRENTQUEUE_1_T4106758557_H
#define CONCURRENTQUEUE_1_T4106758557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]>
struct  ConcurrentQueue_1_t4106758557  : public RuntimeObject
{
public:
	// SenseEngineUnityPlugin.ConcurrentQueue`1/Node<T> SenseEngineUnityPlugin.ConcurrentQueue`1::head
	Node_t1778142203 * ___head_0;
	// SenseEngineUnityPlugin.ConcurrentQueue`1/Node<T> SenseEngineUnityPlugin.ConcurrentQueue`1::tail
	Node_t1778142203 * ___tail_1;
	// System.Int32 SenseEngineUnityPlugin.ConcurrentQueue`1::count
	int32_t ___count_2;
	// System.Object SenseEngineUnityPlugin.ConcurrentQueue`1::syncRoot
	RuntimeObject * ___syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t4106758557, ___head_0)); }
	inline Node_t1778142203 * get_head_0() const { return ___head_0; }
	inline Node_t1778142203 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t1778142203 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t4106758557, ___tail_1)); }
	inline Node_t1778142203 * get_tail_1() const { return ___tail_1; }
	inline Node_t1778142203 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t1778142203 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t4106758557, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_syncRoot_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t4106758557, ___syncRoot_3)); }
	inline RuntimeObject * get_syncRoot_3() const { return ___syncRoot_3; }
	inline RuntimeObject ** get_address_of_syncRoot_3() { return &___syncRoot_3; }
	inline void set_syncRoot_3(RuntimeObject * value)
	{
		___syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONCURRENTQUEUE_1_T4106758557_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef LOGGER_T894154007_H
#define LOGGER_T894154007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.Logger
struct  Logger_t894154007  : public RuntimeObject
{
public:
	// System.IO.FileStream SenseEngineUnityPlugin.Logger::m_LogStream
	FileStream_t4292183065 * ___m_LogStream_1;

public:
	inline static int32_t get_offset_of_m_LogStream_1() { return static_cast<int32_t>(offsetof(Logger_t894154007, ___m_LogStream_1)); }
	inline FileStream_t4292183065 * get_m_LogStream_1() const { return ___m_LogStream_1; }
	inline FileStream_t4292183065 ** get_address_of_m_LogStream_1() { return &___m_LogStream_1; }
	inline void set_m_LogStream_1(FileStream_t4292183065 * value)
	{
		___m_LogStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LogStream_1), value);
	}
};

struct Logger_t894154007_StaticFields
{
public:
	// SenseEngineUnityPlugin.Logger SenseEngineUnityPlugin.Logger::m_ErrorLog
	Logger_t894154007 * ___m_ErrorLog_0;

public:
	inline static int32_t get_offset_of_m_ErrorLog_0() { return static_cast<int32_t>(offsetof(Logger_t894154007_StaticFields, ___m_ErrorLog_0)); }
	inline Logger_t894154007 * get_m_ErrorLog_0() const { return ___m_ErrorLog_0; }
	inline Logger_t894154007 ** get_address_of_m_ErrorLog_0() { return &___m_ErrorLog_0; }
	inline void set_m_ErrorLog_0(Logger_t894154007 * value)
	{
		___m_ErrorLog_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ErrorLog_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T894154007_H
#ifndef CPOOL_1_T761353041_H
#define CPOOL_1_T761353041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>
struct  CPool_1_t761353041  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> SenseEngineUnityPlugin.CPool`1::m_FreeObjects
	Queue_1_t1076529548 * ___m_FreeObjects_0;

public:
	inline static int32_t get_offset_of_m_FreeObjects_0() { return static_cast<int32_t>(offsetof(CPool_1_t761353041, ___m_FreeObjects_0)); }
	inline Queue_1_t1076529548 * get_m_FreeObjects_0() const { return ___m_FreeObjects_0; }
	inline Queue_1_t1076529548 ** get_address_of_m_FreeObjects_0() { return &___m_FreeObjects_0; }
	inline void set_m_FreeObjects_0(Queue_1_t1076529548 * value)
	{
		___m_FreeObjects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_FreeObjects_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CPOOL_1_T761353041_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef CPOOL_1_T3675659507_H
#define CPOOL_1_T3675659507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>
struct  CPool_1_t3675659507  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> SenseEngineUnityPlugin.CPool`1::m_FreeObjects
	Queue_1_t3990836014 * ___m_FreeObjects_0;

public:
	inline static int32_t get_offset_of_m_FreeObjects_0() { return static_cast<int32_t>(offsetof(CPool_1_t3675659507, ___m_FreeObjects_0)); }
	inline Queue_1_t3990836014 * get_m_FreeObjects_0() const { return ___m_FreeObjects_0; }
	inline Queue_1_t3990836014 ** get_address_of_m_FreeObjects_0() { return &___m_FreeObjects_0; }
	inline void set_m_FreeObjects_0(Queue_1_t3990836014 * value)
	{
		___m_FreeObjects_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_FreeObjects_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CPOOL_1_T3675659507_H
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef IPENDPOINT_T3791887218_H
#define IPENDPOINT_T3791887218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_t3791887218  : public EndPoint_t982345378
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t241777590 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___address_0)); }
	inline IPAddress_t241777590 * get_address_0() const { return ___address_0; }
	inline IPAddress_t241777590 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t241777590 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPENDPOINT_T3791887218_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef CHUMANEVENTPACKETPOOL_T4236893195_H
#define CHUMANEVENTPACKETPOOL_T4236893195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.CHumanEventPacketPool
struct  CHumanEventPacketPool_t4236893195  : public CPool_1_t3675659507
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHUMANEVENTPACKETPOOL_T4236893195_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SVERSION_T3562683668_H
#define SVERSION_T3562683668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SVersion
#pragma pack(push, tp, 4)
struct  SVersion_t3562683668 
{
public:
	// System.Byte SenseEngineUnityPlugin.SVersion::m_RevolutionVersion
	uint8_t ___m_RevolutionVersion_0;
	// System.Byte SenseEngineUnityPlugin.SVersion::m_MajorVersion
	uint8_t ___m_MajorVersion_1;
	// System.Byte SenseEngineUnityPlugin.SVersion::m_MinorVersion
	uint8_t ___m_MinorVersion_2;
	// System.Byte SenseEngineUnityPlugin.SVersion::m_BuildVersion
	uint8_t ___m_BuildVersion_3;

public:
	inline static int32_t get_offset_of_m_RevolutionVersion_0() { return static_cast<int32_t>(offsetof(SVersion_t3562683668, ___m_RevolutionVersion_0)); }
	inline uint8_t get_m_RevolutionVersion_0() const { return ___m_RevolutionVersion_0; }
	inline uint8_t* get_address_of_m_RevolutionVersion_0() { return &___m_RevolutionVersion_0; }
	inline void set_m_RevolutionVersion_0(uint8_t value)
	{
		___m_RevolutionVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_MajorVersion_1() { return static_cast<int32_t>(offsetof(SVersion_t3562683668, ___m_MajorVersion_1)); }
	inline uint8_t get_m_MajorVersion_1() const { return ___m_MajorVersion_1; }
	inline uint8_t* get_address_of_m_MajorVersion_1() { return &___m_MajorVersion_1; }
	inline void set_m_MajorVersion_1(uint8_t value)
	{
		___m_MajorVersion_1 = value;
	}

	inline static int32_t get_offset_of_m_MinorVersion_2() { return static_cast<int32_t>(offsetof(SVersion_t3562683668, ___m_MinorVersion_2)); }
	inline uint8_t get_m_MinorVersion_2() const { return ___m_MinorVersion_2; }
	inline uint8_t* get_address_of_m_MinorVersion_2() { return &___m_MinorVersion_2; }
	inline void set_m_MinorVersion_2(uint8_t value)
	{
		___m_MinorVersion_2 = value;
	}

	inline static int32_t get_offset_of_m_BuildVersion_3() { return static_cast<int32_t>(offsetof(SVersion_t3562683668, ___m_BuildVersion_3)); }
	inline uint8_t get_m_BuildVersion_3() const { return ___m_BuildVersion_3; }
	inline uint8_t* get_address_of_m_BuildVersion_3() { return &___m_BuildVersion_3; }
	inline void set_m_BuildVersion_3(uint8_t value)
	{
		___m_BuildVersion_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SVERSION_T3562683668_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef CHUMANEVENTRESULTPOOL_T270739256_H
#define CHUMANEVENTRESULTPOOL_T270739256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.CHumanEventResultPool
struct  CHumanEventResultPool_t270739256  : public CPool_1_t761353041
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHUMANEVENTRESULTPOOL_T270739256_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SPOSITION_T764125_H
#define SPOSITION_T764125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SPosition
#pragma pack(push, tp, 4)
struct  SPosition_t764125 
{
public:
	// System.Single SenseEngineUnityPlugin.SPosition::m_X
	float ___m_X_0;
	// System.Single SenseEngineUnityPlugin.SPosition::m_Y
	float ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(SPosition_t764125, ___m_X_0)); }
	inline float get_m_X_0() const { return ___m_X_0; }
	inline float* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(float value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(SPosition_t764125, ___m_Y_1)); }
	inline float get_m_Y_1() const { return ___m_Y_1; }
	inline float* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(float value)
	{
		___m_Y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPOSITION_T764125_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEMODE_T1183438340_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SPACKETHEADER_T1947517642_H
#define SPACKETHEADER_T1947517642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SPacketHeader
#pragma pack(push, tp, 4)
struct  SPacketHeader_t1947517642 
{
public:
	// SenseEngineUnityPlugin.SVersion SenseEngineUnityPlugin.SPacketHeader::m_SDKVersion
	SVersion_t3562683668  ___m_SDKVersion_0;
	// System.UInt32 SenseEngineUnityPlugin.SPacketHeader::m_PacketSize
	uint32_t ___m_PacketSize_1;
	// System.Byte SenseEngineUnityPlugin.SPacketHeader::m_PacketType
	uint8_t ___m_PacketType_2;
	// System.Byte SenseEngineUnityPlugin.SPacketHeader::m_Padding0
	uint8_t ___m_Padding0_3;
	// System.UInt16 SenseEngineUnityPlugin.SPacketHeader::m_Padding1
	uint16_t ___m_Padding1_4;

public:
	inline static int32_t get_offset_of_m_SDKVersion_0() { return static_cast<int32_t>(offsetof(SPacketHeader_t1947517642, ___m_SDKVersion_0)); }
	inline SVersion_t3562683668  get_m_SDKVersion_0() const { return ___m_SDKVersion_0; }
	inline SVersion_t3562683668 * get_address_of_m_SDKVersion_0() { return &___m_SDKVersion_0; }
	inline void set_m_SDKVersion_0(SVersion_t3562683668  value)
	{
		___m_SDKVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_PacketSize_1() { return static_cast<int32_t>(offsetof(SPacketHeader_t1947517642, ___m_PacketSize_1)); }
	inline uint32_t get_m_PacketSize_1() const { return ___m_PacketSize_1; }
	inline uint32_t* get_address_of_m_PacketSize_1() { return &___m_PacketSize_1; }
	inline void set_m_PacketSize_1(uint32_t value)
	{
		___m_PacketSize_1 = value;
	}

	inline static int32_t get_offset_of_m_PacketType_2() { return static_cast<int32_t>(offsetof(SPacketHeader_t1947517642, ___m_PacketType_2)); }
	inline uint8_t get_m_PacketType_2() const { return ___m_PacketType_2; }
	inline uint8_t* get_address_of_m_PacketType_2() { return &___m_PacketType_2; }
	inline void set_m_PacketType_2(uint8_t value)
	{
		___m_PacketType_2 = value;
	}

	inline static int32_t get_offset_of_m_Padding0_3() { return static_cast<int32_t>(offsetof(SPacketHeader_t1947517642, ___m_Padding0_3)); }
	inline uint8_t get_m_Padding0_3() const { return ___m_Padding0_3; }
	inline uint8_t* get_address_of_m_Padding0_3() { return &___m_Padding0_3; }
	inline void set_m_Padding0_3(uint8_t value)
	{
		___m_Padding0_3 = value;
	}

	inline static int32_t get_offset_of_m_Padding1_4() { return static_cast<int32_t>(offsetof(SPacketHeader_t1947517642, ___m_Padding1_4)); }
	inline uint16_t get_m_Padding1_4() const { return ___m_Padding1_4; }
	inline uint16_t* get_address_of_m_Padding1_4() { return &___m_Padding1_4; }
	inline void set_m_Padding1_4(uint16_t value)
	{
		___m_Padding1_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACKETHEADER_T1947517642_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef UDPCLIENT_T967282006_H
#define UDPCLIENT_T967282006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.UdpClient
struct  UdpClient_t967282006  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.UdpClient::disposed
	bool ___disposed_0;
	// System.Boolean System.Net.Sockets.UdpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::socket
	Socket_t1119025450 * ___socket_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::family
	int32_t ___family_3;
	// System.Byte[] System.Net.Sockets.UdpClient::recvbuffer
	ByteU5BU5D_t4116647657* ___recvbuffer_4;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___socket_2)); }
	inline Socket_t1119025450 * get_socket_2() const { return ___socket_2; }
	inline Socket_t1119025450 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t1119025450 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_family_3() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___family_3)); }
	inline int32_t get_family_3() const { return ___family_3; }
	inline int32_t* get_address_of_family_3() { return &___family_3; }
	inline void set_family_3(int32_t value)
	{
		___family_3 = value;
	}

	inline static int32_t get_offset_of_recvbuffer_4() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___recvbuffer_4)); }
	inline ByteU5BU5D_t4116647657* get_recvbuffer_4() const { return ___recvbuffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_recvbuffer_4() { return &___recvbuffer_4; }
	inline void set_recvbuffer_4(ByteU5BU5D_t4116647657* value)
	{
		___recvbuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___recvbuffer_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDPCLIENT_T967282006_H
#ifndef SHUMANPACKET_T4144576520_H
#define SHUMANPACKET_T4144576520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SHumanPacket
#pragma pack(push, tp, 4)
struct  SHumanPacket_t4144576520 
{
public:
	// SenseEngineUnityPlugin.SPacketHeader SenseEngineUnityPlugin.SHumanPacket::m_Header
	SPacketHeader_t1947517642  ___m_Header_0;
	// System.Byte SenseEngineUnityPlugin.SHumanPacket::m_EventType
	uint8_t ___m_EventType_1;
	// System.Byte SenseEngineUnityPlugin.SHumanPacket::m_HumanId
	uint8_t ___m_HumanId_2;
	// System.UInt16 SenseEngineUnityPlugin.SHumanPacket::m_ParticleCount
	uint16_t ___m_ParticleCount_3;
	// SenseEngineUnityPlugin.SPosition SenseEngineUnityPlugin.SHumanPacket::m_Position
	SPosition_t764125  ___m_Position_4;

public:
	inline static int32_t get_offset_of_m_Header_0() { return static_cast<int32_t>(offsetof(SHumanPacket_t4144576520, ___m_Header_0)); }
	inline SPacketHeader_t1947517642  get_m_Header_0() const { return ___m_Header_0; }
	inline SPacketHeader_t1947517642 * get_address_of_m_Header_0() { return &___m_Header_0; }
	inline void set_m_Header_0(SPacketHeader_t1947517642  value)
	{
		___m_Header_0 = value;
	}

	inline static int32_t get_offset_of_m_EventType_1() { return static_cast<int32_t>(offsetof(SHumanPacket_t4144576520, ___m_EventType_1)); }
	inline uint8_t get_m_EventType_1() const { return ___m_EventType_1; }
	inline uint8_t* get_address_of_m_EventType_1() { return &___m_EventType_1; }
	inline void set_m_EventType_1(uint8_t value)
	{
		___m_EventType_1 = value;
	}

	inline static int32_t get_offset_of_m_HumanId_2() { return static_cast<int32_t>(offsetof(SHumanPacket_t4144576520, ___m_HumanId_2)); }
	inline uint8_t get_m_HumanId_2() const { return ___m_HumanId_2; }
	inline uint8_t* get_address_of_m_HumanId_2() { return &___m_HumanId_2; }
	inline void set_m_HumanId_2(uint8_t value)
	{
		___m_HumanId_2 = value;
	}

	inline static int32_t get_offset_of_m_ParticleCount_3() { return static_cast<int32_t>(offsetof(SHumanPacket_t4144576520, ___m_ParticleCount_3)); }
	inline uint16_t get_m_ParticleCount_3() const { return ___m_ParticleCount_3; }
	inline uint16_t* get_address_of_m_ParticleCount_3() { return &___m_ParticleCount_3; }
	inline void set_m_ParticleCount_3(uint16_t value)
	{
		___m_ParticleCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Position_4() { return static_cast<int32_t>(offsetof(SHumanPacket_t4144576520, ___m_Position_4)); }
	inline SPosition_t764125  get_m_Position_4() const { return ___m_Position_4; }
	inline SPosition_t764125 * get_address_of_m_Position_4() { return &___m_Position_4; }
	inline void set_m_Position_4(SPosition_t764125  value)
	{
		___m_Position_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHUMANPACKET_T4144576520_H
#ifndef SNONHUMANPARTICLESPACKET_T125939772_H
#define SNONHUMANPARTICLESPACKET_T125939772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SNonHumanParticlesPacket
#pragma pack(push, tp, 4)
struct  SNonHumanParticlesPacket_t125939772 
{
public:
	// SenseEngineUnityPlugin.SPacketHeader SenseEngineUnityPlugin.SNonHumanParticlesPacket::m_Header
	SPacketHeader_t1947517642  ___m_Header_0;
	// System.UInt16 SenseEngineUnityPlugin.SNonHumanParticlesPacket::m_ParticleCount
	uint16_t ___m_ParticleCount_1;
	// System.UInt16 SenseEngineUnityPlugin.SNonHumanParticlesPacket::m_Padding0
	uint16_t ___m_Padding0_2;

public:
	inline static int32_t get_offset_of_m_Header_0() { return static_cast<int32_t>(offsetof(SNonHumanParticlesPacket_t125939772, ___m_Header_0)); }
	inline SPacketHeader_t1947517642  get_m_Header_0() const { return ___m_Header_0; }
	inline SPacketHeader_t1947517642 * get_address_of_m_Header_0() { return &___m_Header_0; }
	inline void set_m_Header_0(SPacketHeader_t1947517642  value)
	{
		___m_Header_0 = value;
	}

	inline static int32_t get_offset_of_m_ParticleCount_1() { return static_cast<int32_t>(offsetof(SNonHumanParticlesPacket_t125939772, ___m_ParticleCount_1)); }
	inline uint16_t get_m_ParticleCount_1() const { return ___m_ParticleCount_1; }
	inline uint16_t* get_address_of_m_ParticleCount_1() { return &___m_ParticleCount_1; }
	inline void set_m_ParticleCount_1(uint16_t value)
	{
		___m_ParticleCount_1 = value;
	}

	inline static int32_t get_offset_of_m_Padding0_2() { return static_cast<int32_t>(offsetof(SNonHumanParticlesPacket_t125939772, ___m_Padding0_2)); }
	inline uint16_t get_m_Padding0_2() const { return ___m_Padding0_2; }
	inline uint16_t* get_address_of_m_Padding0_2() { return &___m_Padding0_2; }
	inline void set_m_Padding0_2(uint16_t value)
	{
		___m_Padding0_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SNONHUMANPARTICLESPACKET_T125939772_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef IPADDRESS_T241777590_H
#define IPADDRESS_T241777590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t241777590  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t3326319531* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_11;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t3326319531* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t3326319531** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t3326319531* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_11() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_HashCode_11)); }
	inline int32_t get_m_HashCode_11() const { return ___m_HashCode_11; }
	inline int32_t* get_address_of_m_HashCode_11() { return &___m_HashCode_11; }
	inline void set_m_HashCode_11(int32_t value)
	{
		___m_HashCode_11 = value;
	}
};

struct IPAddress_t241777590_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t241777590 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t241777590 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t241777590 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t241777590 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t241777590 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t241777590 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t241777590 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Any_4)); }
	inline IPAddress_t241777590 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t241777590 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t241777590 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t241777590 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t241777590 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t241777590 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Loopback_6)); }
	inline IPAddress_t241777590 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t241777590 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t241777590 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___None_7)); }
	inline IPAddress_t241777590 * get_None_7() const { return ___None_7; }
	inline IPAddress_t241777590 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t241777590 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t241777590 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t241777590 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t241777590 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t241777590 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t241777590 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t241777590 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t241777590 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T241777590_H
#ifndef SRAWPARTICLESPACKET_T564541380_H
#define SRAWPARTICLESPACKET_T564541380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SRawParticlesPacket
#pragma pack(push, tp, 4)
struct  SRawParticlesPacket_t564541380 
{
public:
	// SenseEngineUnityPlugin.SPacketHeader SenseEngineUnityPlugin.SRawParticlesPacket::m_Header
	SPacketHeader_t1947517642  ___m_Header_0;
	// System.UInt16 SenseEngineUnityPlugin.SRawParticlesPacket::m_ParticleCount
	uint16_t ___m_ParticleCount_1;
	// System.UInt16 SenseEngineUnityPlugin.SRawParticlesPacket::m_Padding0
	uint16_t ___m_Padding0_2;

public:
	inline static int32_t get_offset_of_m_Header_0() { return static_cast<int32_t>(offsetof(SRawParticlesPacket_t564541380, ___m_Header_0)); }
	inline SPacketHeader_t1947517642  get_m_Header_0() const { return ___m_Header_0; }
	inline SPacketHeader_t1947517642 * get_address_of_m_Header_0() { return &___m_Header_0; }
	inline void set_m_Header_0(SPacketHeader_t1947517642  value)
	{
		___m_Header_0 = value;
	}

	inline static int32_t get_offset_of_m_ParticleCount_1() { return static_cast<int32_t>(offsetof(SRawParticlesPacket_t564541380, ___m_ParticleCount_1)); }
	inline uint16_t get_m_ParticleCount_1() const { return ___m_ParticleCount_1; }
	inline uint16_t* get_address_of_m_ParticleCount_1() { return &___m_ParticleCount_1; }
	inline void set_m_ParticleCount_1(uint16_t value)
	{
		___m_ParticleCount_1 = value;
	}

	inline static int32_t get_offset_of_m_Padding0_2() { return static_cast<int32_t>(offsetof(SRawParticlesPacket_t564541380, ___m_Padding0_2)); }
	inline uint16_t get_m_Padding0_2() const { return ___m_Padding0_2; }
	inline uint16_t* get_address_of_m_Padding0_2() { return &___m_Padding0_2; }
	inline void set_m_Padding0_2(uint16_t value)
	{
		___m_Padding0_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SRAWPARTICLESPACKET_T564541380_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef CSENSEENGINE_T3384788086_H
#define CSENSEENGINE_T3384788086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.CSenseEngine
struct  CSenseEngine_t3384788086  : public RuntimeObject
{
public:
	// SenseEngineUnityPlugin.OnHumanEnterDelegate SenseEngineUnityPlugin.CSenseEngine::OnHumanEnter
	OnHumanEnterDelegate_t240558909 * ___OnHumanEnter_0;
	// SenseEngineUnityPlugin.OnHumanStayDelegate SenseEngineUnityPlugin.CSenseEngine::OnHumanStay
	OnHumanStayDelegate_t3931784964 * ___OnHumanStay_1;
	// SenseEngineUnityPlugin.OnHumanExitDelegate SenseEngineUnityPlugin.CSenseEngine::OnHumanExit
	OnHumanExitDelegate_t2852278738 * ___OnHumanExit_2;
	// SenseEngineUnityPlugin.OnRawParticlesDelegate SenseEngineUnityPlugin.CSenseEngine::OnRawParticles
	OnRawParticlesDelegate_t79072485 * ___OnRawParticles_3;
	// SenseEngineUnityPlugin.OnNonHumanParticlesDelegate SenseEngineUnityPlugin.CSenseEngine::OnNonHumanParticles
	OnNonHumanParticlesDelegate_t4246801237 * ___OnNonHumanParticles_4;
	// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult> SenseEngineUnityPlugin.CSenseEngine::m_ReceivedHumanEventPackets
	ConcurrentQueue_1_t3212134643 * ___m_ReceivedHumanEventPackets_5;
	// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]> SenseEngineUnityPlugin.CSenseEngine::m_ReceivedRawParticles
	ConcurrentQueue_1_t4106758557 * ___m_ReceivedRawParticles_6;
	// SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]> SenseEngineUnityPlugin.CSenseEngine::m_NonHumanReceivedParticles
	ConcurrentQueue_1_t4106758557 * ___m_NonHumanReceivedParticles_7;
	// System.Net.Sockets.UdpClient SenseEngineUnityPlugin.CSenseEngine::m_UDP
	UdpClient_t967282006 * ___m_UDP_8;
	// System.IAsyncResult SenseEngineUnityPlugin.CSenseEngine::m_UdpServerTask
	RuntimeObject* ___m_UdpServerTask_9;
	// SenseEngineUnityPlugin.CHumanEventPacketPool SenseEngineUnityPlugin.CSenseEngine::m_HumanEventPacketPool
	CHumanEventPacketPool_t4236893195 * ___m_HumanEventPacketPool_10;
	// SenseEngineUnityPlugin.CHumanEventResultPool SenseEngineUnityPlugin.CSenseEngine::m_HumanEventResultPool
	CHumanEventResultPool_t270739256 * ___m_HumanEventResultPool_11;
	// SenseEngineUnityPlugin.SPacketHeader SenseEngineUnityPlugin.CSenseEngine::m_PacketHeader
	SPacketHeader_t1947517642  ___m_PacketHeader_12;
	// SenseEngineUnityPlugin.SRawParticlesPacket SenseEngineUnityPlugin.CSenseEngine::m_RawParticlesPacketTemp
	SRawParticlesPacket_t564541380  ___m_RawParticlesPacketTemp_13;
	// SenseEngineUnityPlugin.SNonHumanParticlesPacket SenseEngineUnityPlugin.CSenseEngine::m_NonHumanParticlesPacketTemp
	SNonHumanParticlesPacket_t125939772  ___m_NonHumanParticlesPacketTemp_14;

public:
	inline static int32_t get_offset_of_OnHumanEnter_0() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___OnHumanEnter_0)); }
	inline OnHumanEnterDelegate_t240558909 * get_OnHumanEnter_0() const { return ___OnHumanEnter_0; }
	inline OnHumanEnterDelegate_t240558909 ** get_address_of_OnHumanEnter_0() { return &___OnHumanEnter_0; }
	inline void set_OnHumanEnter_0(OnHumanEnterDelegate_t240558909 * value)
	{
		___OnHumanEnter_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnHumanEnter_0), value);
	}

	inline static int32_t get_offset_of_OnHumanStay_1() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___OnHumanStay_1)); }
	inline OnHumanStayDelegate_t3931784964 * get_OnHumanStay_1() const { return ___OnHumanStay_1; }
	inline OnHumanStayDelegate_t3931784964 ** get_address_of_OnHumanStay_1() { return &___OnHumanStay_1; }
	inline void set_OnHumanStay_1(OnHumanStayDelegate_t3931784964 * value)
	{
		___OnHumanStay_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnHumanStay_1), value);
	}

	inline static int32_t get_offset_of_OnHumanExit_2() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___OnHumanExit_2)); }
	inline OnHumanExitDelegate_t2852278738 * get_OnHumanExit_2() const { return ___OnHumanExit_2; }
	inline OnHumanExitDelegate_t2852278738 ** get_address_of_OnHumanExit_2() { return &___OnHumanExit_2; }
	inline void set_OnHumanExit_2(OnHumanExitDelegate_t2852278738 * value)
	{
		___OnHumanExit_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnHumanExit_2), value);
	}

	inline static int32_t get_offset_of_OnRawParticles_3() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___OnRawParticles_3)); }
	inline OnRawParticlesDelegate_t79072485 * get_OnRawParticles_3() const { return ___OnRawParticles_3; }
	inline OnRawParticlesDelegate_t79072485 ** get_address_of_OnRawParticles_3() { return &___OnRawParticles_3; }
	inline void set_OnRawParticles_3(OnRawParticlesDelegate_t79072485 * value)
	{
		___OnRawParticles_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnRawParticles_3), value);
	}

	inline static int32_t get_offset_of_OnNonHumanParticles_4() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___OnNonHumanParticles_4)); }
	inline OnNonHumanParticlesDelegate_t4246801237 * get_OnNonHumanParticles_4() const { return ___OnNonHumanParticles_4; }
	inline OnNonHumanParticlesDelegate_t4246801237 ** get_address_of_OnNonHumanParticles_4() { return &___OnNonHumanParticles_4; }
	inline void set_OnNonHumanParticles_4(OnNonHumanParticlesDelegate_t4246801237 * value)
	{
		___OnNonHumanParticles_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnNonHumanParticles_4), value);
	}

	inline static int32_t get_offset_of_m_ReceivedHumanEventPackets_5() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_ReceivedHumanEventPackets_5)); }
	inline ConcurrentQueue_1_t3212134643 * get_m_ReceivedHumanEventPackets_5() const { return ___m_ReceivedHumanEventPackets_5; }
	inline ConcurrentQueue_1_t3212134643 ** get_address_of_m_ReceivedHumanEventPackets_5() { return &___m_ReceivedHumanEventPackets_5; }
	inline void set_m_ReceivedHumanEventPackets_5(ConcurrentQueue_1_t3212134643 * value)
	{
		___m_ReceivedHumanEventPackets_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReceivedHumanEventPackets_5), value);
	}

	inline static int32_t get_offset_of_m_ReceivedRawParticles_6() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_ReceivedRawParticles_6)); }
	inline ConcurrentQueue_1_t4106758557 * get_m_ReceivedRawParticles_6() const { return ___m_ReceivedRawParticles_6; }
	inline ConcurrentQueue_1_t4106758557 ** get_address_of_m_ReceivedRawParticles_6() { return &___m_ReceivedRawParticles_6; }
	inline void set_m_ReceivedRawParticles_6(ConcurrentQueue_1_t4106758557 * value)
	{
		___m_ReceivedRawParticles_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReceivedRawParticles_6), value);
	}

	inline static int32_t get_offset_of_m_NonHumanReceivedParticles_7() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_NonHumanReceivedParticles_7)); }
	inline ConcurrentQueue_1_t4106758557 * get_m_NonHumanReceivedParticles_7() const { return ___m_NonHumanReceivedParticles_7; }
	inline ConcurrentQueue_1_t4106758557 ** get_address_of_m_NonHumanReceivedParticles_7() { return &___m_NonHumanReceivedParticles_7; }
	inline void set_m_NonHumanReceivedParticles_7(ConcurrentQueue_1_t4106758557 * value)
	{
		___m_NonHumanReceivedParticles_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_NonHumanReceivedParticles_7), value);
	}

	inline static int32_t get_offset_of_m_UDP_8() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_UDP_8)); }
	inline UdpClient_t967282006 * get_m_UDP_8() const { return ___m_UDP_8; }
	inline UdpClient_t967282006 ** get_address_of_m_UDP_8() { return &___m_UDP_8; }
	inline void set_m_UDP_8(UdpClient_t967282006 * value)
	{
		___m_UDP_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_UDP_8), value);
	}

	inline static int32_t get_offset_of_m_UdpServerTask_9() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_UdpServerTask_9)); }
	inline RuntimeObject* get_m_UdpServerTask_9() const { return ___m_UdpServerTask_9; }
	inline RuntimeObject** get_address_of_m_UdpServerTask_9() { return &___m_UdpServerTask_9; }
	inline void set_m_UdpServerTask_9(RuntimeObject* value)
	{
		___m_UdpServerTask_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_UdpServerTask_9), value);
	}

	inline static int32_t get_offset_of_m_HumanEventPacketPool_10() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_HumanEventPacketPool_10)); }
	inline CHumanEventPacketPool_t4236893195 * get_m_HumanEventPacketPool_10() const { return ___m_HumanEventPacketPool_10; }
	inline CHumanEventPacketPool_t4236893195 ** get_address_of_m_HumanEventPacketPool_10() { return &___m_HumanEventPacketPool_10; }
	inline void set_m_HumanEventPacketPool_10(CHumanEventPacketPool_t4236893195 * value)
	{
		___m_HumanEventPacketPool_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanEventPacketPool_10), value);
	}

	inline static int32_t get_offset_of_m_HumanEventResultPool_11() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_HumanEventResultPool_11)); }
	inline CHumanEventResultPool_t270739256 * get_m_HumanEventResultPool_11() const { return ___m_HumanEventResultPool_11; }
	inline CHumanEventResultPool_t270739256 ** get_address_of_m_HumanEventResultPool_11() { return &___m_HumanEventResultPool_11; }
	inline void set_m_HumanEventResultPool_11(CHumanEventResultPool_t270739256 * value)
	{
		___m_HumanEventResultPool_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanEventResultPool_11), value);
	}

	inline static int32_t get_offset_of_m_PacketHeader_12() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_PacketHeader_12)); }
	inline SPacketHeader_t1947517642  get_m_PacketHeader_12() const { return ___m_PacketHeader_12; }
	inline SPacketHeader_t1947517642 * get_address_of_m_PacketHeader_12() { return &___m_PacketHeader_12; }
	inline void set_m_PacketHeader_12(SPacketHeader_t1947517642  value)
	{
		___m_PacketHeader_12 = value;
	}

	inline static int32_t get_offset_of_m_RawParticlesPacketTemp_13() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_RawParticlesPacketTemp_13)); }
	inline SRawParticlesPacket_t564541380  get_m_RawParticlesPacketTemp_13() const { return ___m_RawParticlesPacketTemp_13; }
	inline SRawParticlesPacket_t564541380 * get_address_of_m_RawParticlesPacketTemp_13() { return &___m_RawParticlesPacketTemp_13; }
	inline void set_m_RawParticlesPacketTemp_13(SRawParticlesPacket_t564541380  value)
	{
		___m_RawParticlesPacketTemp_13 = value;
	}

	inline static int32_t get_offset_of_m_NonHumanParticlesPacketTemp_14() { return static_cast<int32_t>(offsetof(CSenseEngine_t3384788086, ___m_NonHumanParticlesPacketTemp_14)); }
	inline SNonHumanParticlesPacket_t125939772  get_m_NonHumanParticlesPacketTemp_14() const { return ___m_NonHumanParticlesPacketTemp_14; }
	inline SNonHumanParticlesPacket_t125939772 * get_address_of_m_NonHumanParticlesPacketTemp_14() { return &___m_NonHumanParticlesPacketTemp_14; }
	inline void set_m_NonHumanParticlesPacketTemp_14(SNonHumanParticlesPacket_t125939772  value)
	{
		___m_NonHumanParticlesPacketTemp_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSENSEENGINE_T3384788086_H
#ifndef SHUMANEVENTRESULT_T1230270054_H
#define SHUMANEVENTRESULT_T1230270054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.SHumanEventResult
struct  SHumanEventResult_t1230270054 
{
public:
	// SenseEngineUnityPlugin.SHumanPacket SenseEngineUnityPlugin.SHumanEventResult::m_Packet
	SHumanPacket_t4144576520  ___m_Packet_0;
	// SenseEngineUnityPlugin.SPosition[] SenseEngineUnityPlugin.SHumanEventResult::m_Particles
	SPositionU5BU5D_t2124893968* ___m_Particles_1;

public:
	inline static int32_t get_offset_of_m_Packet_0() { return static_cast<int32_t>(offsetof(SHumanEventResult_t1230270054, ___m_Packet_0)); }
	inline SHumanPacket_t4144576520  get_m_Packet_0() const { return ___m_Packet_0; }
	inline SHumanPacket_t4144576520 * get_address_of_m_Packet_0() { return &___m_Packet_0; }
	inline void set_m_Packet_0(SHumanPacket_t4144576520  value)
	{
		___m_Packet_0 = value;
	}

	inline static int32_t get_offset_of_m_Particles_1() { return static_cast<int32_t>(offsetof(SHumanEventResult_t1230270054, ___m_Particles_1)); }
	inline SPositionU5BU5D_t2124893968* get_m_Particles_1() const { return ___m_Particles_1; }
	inline SPositionU5BU5D_t2124893968** get_address_of_m_Particles_1() { return &___m_Particles_1; }
	inline void set_m_Particles_1(SPositionU5BU5D_t2124893968* value)
	{
		___m_Particles_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Particles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SenseEngineUnityPlugin.SHumanEventResult
struct SHumanEventResult_t1230270054_marshaled_pinvoke
{
	SHumanPacket_t4144576520  ___m_Packet_0;
	SPosition_t764125 * ___m_Particles_1;
};
// Native definition for COM marshalling of SenseEngineUnityPlugin.SHumanEventResult
struct SHumanEventResult_t1230270054_marshaled_com
{
	SHumanPacket_t4144576520  ___m_Packet_0;
	SPosition_t764125 * ___m_Particles_1;
};
#endif // SHUMANEVENTRESULT_T1230270054_H
#ifndef ONNONHUMANPARTICLESDELEGATE_T4246801237_H
#define ONNONHUMANPARTICLESDELEGATE_T4246801237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.OnNonHumanParticlesDelegate
struct  OnNonHumanParticlesDelegate_t4246801237  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONNONHUMANPARTICLESDELEGATE_T4246801237_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef ONRAWPARTICLESDELEGATE_T79072485_H
#define ONRAWPARTICLESDELEGATE_T79072485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.OnRawParticlesDelegate
struct  OnRawParticlesDelegate_t79072485  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONRAWPARTICLESDELEGATE_T79072485_H
#ifndef ONHUMANEXITDELEGATE_T2852278738_H
#define ONHUMANEXITDELEGATE_T2852278738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.OnHumanExitDelegate
struct  OnHumanExitDelegate_t2852278738  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONHUMANEXITDELEGATE_T2852278738_H
#ifndef ONHUMANENTERDELEGATE_T240558909_H
#define ONHUMANENTERDELEGATE_T240558909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.OnHumanEnterDelegate
struct  OnHumanEnterDelegate_t240558909  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONHUMANENTERDELEGATE_T240558909_H
#ifndef ONHUMANSTAYDELEGATE_T3931784964_H
#define ONHUMANSTAYDELEGATE_T3931784964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SenseEngineUnityPlugin.OnHumanStayDelegate
struct  OnHumanStayDelegate_t3931784964  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONHUMANSTAYDELEGATE_T3931784964_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// SenseEngineUnityPlugin.SPosition[]
struct SPositionU5BU5D_t2124893968  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SPosition_t764125  m_Items[1];

public:
	inline SPosition_t764125  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SPosition_t764125 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SPosition_t764125  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SPosition_t764125  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SPosition_t764125 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SPosition_t764125  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>::.ctor(System.Int32)
extern "C"  void CPool_1__ctor_m497429737_gshared (CPool_1_t3675659507 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>::.ctor(System.Int32)
extern "C"  void CPool_1__ctor_m2951116350_gshared (CPool_1_t761353041 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SPacketHeader>(System.Byte[],T&)
extern "C"  void CSenseEngine_ByteArrayToStructure_TisSPacketHeader_t1947517642_m3813042819_gshared (CSenseEngine_t3384788086 * __this, ByteU5BU5D_t4116647657* ____bytes0, SPacketHeader_t1947517642 * ____stuff1, const RuntimeMethod* method);
// T SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>::Obtain()
extern "C"  SHumanPacket_t4144576520  CPool_1_Obtain_m440268997_gshared (CPool_1_t3675659507 * __this, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SHumanPacket>(System.Byte[],T&)
extern "C"  void CSenseEngine_ByteArrayToStructure_TisSHumanPacket_t4144576520_m4100854157_gshared (CSenseEngine_t3384788086 * __this, ByteU5BU5D_t4116647657* ____bytes0, SHumanPacket_t4144576520 * ____stuff1, const RuntimeMethod* method);
// T SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>::Obtain()
extern "C"  SHumanEventResult_t1230270054  CPool_1_Obtain_m3190329471_gshared (CPool_1_t761353041 * __this, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::Enqueue(T)
extern "C"  void ConcurrentQueue_1_Enqueue_m3093795119_gshared (ConcurrentQueue_1_t3212134643 * __this, SHumanEventResult_t1230270054  p0, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SRawParticlesPacket>(System.Byte[],T&)
extern "C"  void CSenseEngine_ByteArrayToStructure_TisSRawParticlesPacket_t564541380_m3232834802_gshared (CSenseEngine_t3384788086 * __this, ByteU5BU5D_t4116647657* ____bytes0, SRawParticlesPacket_t564541380 * ____stuff1, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<System.Object>::Enqueue(T)
extern "C"  void ConcurrentQueue_1_Enqueue_m2574987687_gshared (ConcurrentQueue_1_t767003457 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SNonHumanParticlesPacket>(System.Byte[],T&)
extern "C"  void CSenseEngine_ByteArrayToStructure_TisSNonHumanParticlesPacket_t125939772_m4158229944_gshared (CSenseEngine_t3384788086 * __this, ByteU5BU5D_t4116647657* ____bytes0, SNonHumanParticlesPacket_t125939772 * ____stuff1, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::.ctor()
extern "C"  void ConcurrentQueue_1__ctor_m164483968_gshared (ConcurrentQueue_1_t3212134643 * __this, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<System.Object>::.ctor()
extern "C"  void ConcurrentQueue_1__ctor_m1150962647_gshared (ConcurrentQueue_1_t767003457 * __this, const RuntimeMethod* method);
// System.Boolean SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::TryDequeue(T&)
extern "C"  bool ConcurrentQueue_1_TryDequeue_m2077850534_gshared (ConcurrentQueue_1_t3212134643 * __this, SHumanEventResult_t1230270054 * p0, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>::Free(T)
extern "C"  void CPool_1_Free_m2887872382_gshared (CPool_1_t3675659507 * __this, SHumanPacket_t4144576520  p0, const RuntimeMethod* method);
// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>::Free(T)
extern "C"  void CPool_1_Free_m1304239724_gshared (CPool_1_t761353041 * __this, SHumanEventResult_t1230270054  p0, const RuntimeMethod* method);
// System.Int32 SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::get_Count()
extern "C"  int32_t ConcurrentQueue_1_get_Count_m4142606748_gshared (ConcurrentQueue_1_t3212134643 * __this, const RuntimeMethod* method);
// System.Boolean SenseEngineUnityPlugin.ConcurrentQueue`1<System.Object>::TryDequeue(T&)
extern "C"  bool ConcurrentQueue_1_TryDequeue_m3270245578_gshared (ConcurrentQueue_1_t767003457 * __this, RuntimeObject ** p0, const RuntimeMethod* method);
// System.Int32 SenseEngineUnityPlugin.ConcurrentQueue`1<System.Object>::get_Count()
extern "C"  int32_t ConcurrentQueue_1_get_Count_m2924994988_gshared (ConcurrentQueue_1_t767003457 * __this, const RuntimeMethod* method);

// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>::.ctor(System.Int32)
#define CPool_1__ctor_m497429737(__this, p0, method) ((  void (*) (CPool_1_t3675659507 *, int32_t, const RuntimeMethod*))CPool_1__ctor_m497429737_gshared)(__this, p0, method)
// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>::.ctor(System.Int32)
#define CPool_1__ctor_m2951116350(__this, p0, method) ((  void (*) (CPool_1_t761353041 *, int32_t, const RuntimeMethod*))CPool_1__ctor_m2951116350_gshared)(__this, p0, method)
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m3069307747 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C"  void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverter_ToSingle_m2597008633 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void IPEndPoint__ctor_m2833647099 (IPEndPoint_t3791887218 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
extern "C"  ByteU5BU5D_t4116647657* UdpClient_EndReceive_m765429616 (UdpClient_t967282006 * __this, RuntimeObject* p0, IPEndPoint_t3791887218 ** p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SPacketHeader>(System.Byte[],T&)
#define CSenseEngine_ByteArrayToStructure_TisSPacketHeader_t1947517642_m3813042819(__this, ____bytes0, ____stuff1, method) ((  void (*) (CSenseEngine_t3384788086 *, ByteU5BU5D_t4116647657*, SPacketHeader_t1947517642 *, const RuntimeMethod*))CSenseEngine_ByteArrayToStructure_TisSPacketHeader_t1947517642_m3813042819_gshared)(__this, ____bytes0, ____stuff1, method)
// System.Void SenseEngineUnityPlugin.Logger::LogError(System.String)
extern "C"  void Logger_LogError_m583124990 (RuntimeObject * __this /* static, unused */, String_t* ____message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>::Obtain()
#define CPool_1_Obtain_m440268997(__this, method) ((  SHumanPacket_t4144576520  (*) (CPool_1_t3675659507 *, const RuntimeMethod*))CPool_1_Obtain_m440268997_gshared)(__this, method)
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SHumanPacket>(System.Byte[],T&)
#define CSenseEngine_ByteArrayToStructure_TisSHumanPacket_t4144576520_m4100854157(__this, ____bytes0, ____stuff1, method) ((  void (*) (CSenseEngine_t3384788086 *, ByteU5BU5D_t4116647657*, SHumanPacket_t4144576520 *, const RuntimeMethod*))CSenseEngine_ByteArrayToStructure_TisSHumanPacket_t4144576520_m4100854157_gshared)(__this, ____bytes0, ____stuff1, method)
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToPositionArray(System.Byte[],SenseEngineUnityPlugin.SPosition[]&,System.Int32,System.Int32)
extern "C"  void CSenseEngine_ByteArrayToPositionArray_m1458804841 (CSenseEngine_t3384788086 * __this, ByteU5BU5D_t4116647657* ____bytes0, SPositionU5BU5D_t2124893968** ____stuff1, int32_t ____count2, int32_t ___skipBytes3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>::Obtain()
#define CPool_1_Obtain_m3190329471(__this, method) ((  SHumanEventResult_t1230270054  (*) (CPool_1_t761353041 *, const RuntimeMethod*))CPool_1_Obtain_m3190329471_gshared)(__this, method)
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::Enqueue(T)
#define ConcurrentQueue_1_Enqueue_m3093795119(__this, p0, method) ((  void (*) (ConcurrentQueue_1_t3212134643 *, SHumanEventResult_t1230270054 , const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m3093795119_gshared)(__this, p0, method)
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SRawParticlesPacket>(System.Byte[],T&)
#define CSenseEngine_ByteArrayToStructure_TisSRawParticlesPacket_t564541380_m3232834802(__this, ____bytes0, ____stuff1, method) ((  void (*) (CSenseEngine_t3384788086 *, ByteU5BU5D_t4116647657*, SRawParticlesPacket_t564541380 *, const RuntimeMethod*))CSenseEngine_ByteArrayToStructure_TisSRawParticlesPacket_t564541380_m3232834802_gshared)(__this, ____bytes0, ____stuff1, method)
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]>::Enqueue(T)
#define ConcurrentQueue_1_Enqueue_m822006977(__this, p0, method) ((  void (*) (ConcurrentQueue_1_t4106758557 *, SPositionU5BU5D_t2124893968*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m2574987687_gshared)(__this, p0, method)
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToStructure<SenseEngineUnityPlugin.SNonHumanParticlesPacket>(System.Byte[],T&)
#define CSenseEngine_ByteArrayToStructure_TisSNonHumanParticlesPacket_t125939772_m4158229944(__this, ____bytes0, ____stuff1, method) ((  void (*) (CSenseEngine_t3384788086 *, ByteU5BU5D_t4116647657*, SNonHumanParticlesPacket_t125939772 *, const RuntimeMethod*))CSenseEngine_ByteArrayToStructure_TisSNonHumanParticlesPacket_t125939772_m4158229944_gshared)(__this, ____bytes0, ____stuff1, method)
// System.Void System.Console::WriteLine(System.String)
extern "C"  void Console_WriteLine_m4182570127 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UdpClient_BeginReceive_m3486162304 (UdpClient_t967282006 * __this, AsyncCallback_t3962456242 * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::.ctor()
#define ConcurrentQueue_1__ctor_m164483968(__this, method) ((  void (*) (ConcurrentQueue_1_t3212134643 *, const RuntimeMethod*))ConcurrentQueue_1__ctor_m164483968_gshared)(__this, method)
// System.Void SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]>::.ctor()
#define ConcurrentQueue_1__ctor_m520030090(__this, method) ((  void (*) (ConcurrentQueue_1_t4106758557 *, const RuntimeMethod*))ConcurrentQueue_1__ctor_m1150962647_gshared)(__this, method)
// System.Void SenseEngineUnityPlugin.CHumanEventPacketPool::.ctor(System.Int32)
extern "C"  void CHumanEventPacketPool__ctor_m2273421908 (CHumanEventPacketPool_t4236893195 * __this, int32_t ____initialObjectsCount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.CHumanEventResultPool::.ctor(System.Int32)
extern "C"  void CHumanEventResultPool__ctor_m2868342503 (CHumanEventResultPool_t270739256 * __this, int32_t ____initialObjectsCount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32,System.Net.Sockets.AddressFamily)
extern "C"  void UdpClient__ctor_m450335381 (UdpClient_t967282006 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_DontFragment(System.Boolean)
extern "C"  void UdpClient_set_DontFragment_m2627012446 (UdpClient_t967282006 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SenseEngineUnityPlugin.Logger SenseEngineUnityPlugin.Logger::CreateErrorLog()
extern "C"  Logger_t894154007 * Logger_CreateErrorLog_m2299457989 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::TryDequeue(T&)
#define ConcurrentQueue_1_TryDequeue_m2077850534(__this, p0, method) ((  bool (*) (ConcurrentQueue_1_t3212134643 *, SHumanEventResult_t1230270054 *, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m2077850534_gshared)(__this, p0, method)
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.OnHumanEnterDelegate::Invoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnHumanEnterDelegate_Invoke_m323739592 (OnHumanEnterDelegate_t240558909 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.OnHumanExitDelegate::Invoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnHumanExitDelegate_Invoke_m1716505070 (OnHumanExitDelegate_t2852278738 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.OnHumanStayDelegate::Invoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnHumanStayDelegate_Invoke_m1926469124 (OnHumanStayDelegate_t3931784964 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanPacket>::Free(T)
#define CPool_1_Free_m2887872382(__this, p0, method) ((  void (*) (CPool_1_t3675659507 *, SHumanPacket_t4144576520 , const RuntimeMethod*))CPool_1_Free_m2887872382_gshared)(__this, p0, method)
// System.Void SenseEngineUnityPlugin.CPool`1<SenseEngineUnityPlugin.SHumanEventResult>::Free(T)
#define CPool_1_Free_m1304239724(__this, p0, method) ((  void (*) (CPool_1_t761353041 *, SHumanEventResult_t1230270054 , const RuntimeMethod*))CPool_1_Free_m1304239724_gshared)(__this, p0, method)
// System.Int32 SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SHumanEventResult>::get_Count()
#define ConcurrentQueue_1_get_Count_m4142606748(__this, method) ((  int32_t (*) (ConcurrentQueue_1_t3212134643 *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_m4142606748_gshared)(__this, method)
// System.Boolean SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]>::TryDequeue(T&)
#define ConcurrentQueue_1_TryDequeue_m546868922(__this, p0, method) ((  bool (*) (ConcurrentQueue_1_t4106758557 *, SPositionU5BU5D_t2124893968**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m3270245578_gshared)(__this, p0, method)
// System.Void SenseEngineUnityPlugin.OnRawParticlesDelegate::Invoke(SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnRawParticlesDelegate_Invoke_m2996221978 (OnRawParticlesDelegate_t79072485 * __this, SPositionU5BU5D_t2124893968* ___particles0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SenseEngineUnityPlugin.ConcurrentQueue`1<SenseEngineUnityPlugin.SPosition[]>::get_Count()
#define ConcurrentQueue_1_get_Count_m3996068592(__this, method) ((  int32_t (*) (ConcurrentQueue_1_t4106758557 *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_m2924994988_gshared)(__this, method)
// System.Void SenseEngineUnityPlugin.OnNonHumanParticlesDelegate::Invoke(SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnNonHumanParticlesDelegate_Invoke_m2874366677 (OnNonHumanParticlesDelegate_t4246801237 * __this, SPositionU5BU5D_t2124893968* ___particles0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Close()
extern "C"  void UdpClient_Close_m4217442468 (UdpClient_t967282006 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.Logger::.ctor(System.String)
extern "C"  void Logger__ctor_m4251129197 (Logger_t894154007 * __this, String_t* ____loggerName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
extern "C"  void FileStream__ctor_m2784380556 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::get_Name()
extern "C"  String_t* FileStream_get_Name_m2026065212 (FileStream_t4292183065 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SenseEngineUnityPlugin.Logger::Log(System.String)
extern "C"  void Logger_Log_m771409156 (Logger_t894154007 * __this, String_t* ____message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SenseEngineUnityPlugin.CHumanEventPacketPool::.ctor(System.Int32)
extern "C"  void CHumanEventPacketPool__ctor_m2273421908 (CHumanEventPacketPool_t4236893195 * __this, int32_t ____initialObjectsCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHumanEventPacketPool__ctor_m2273421908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ____initialObjectsCount0;
		CPool_1__ctor_m497429737(__this, L_0, /*hidden argument*/CPool_1__ctor_m497429737_RuntimeMethod_var);
		return;
	}
}
// SenseEngineUnityPlugin.SHumanPacket SenseEngineUnityPlugin.CHumanEventPacketPool::NewObject()
extern "C"  SHumanPacket_t4144576520  CHumanEventPacketPool_NewObject_m3121309777 (CHumanEventPacketPool_t4236893195 * __this, const RuntimeMethod* method)
{
	SHumanPacket_t4144576520  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SHumanPacket_t4144576520 ));
		SHumanPacket_t4144576520  L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SenseEngineUnityPlugin.CHumanEventResultPool::.ctor(System.Int32)
extern "C"  void CHumanEventResultPool__ctor_m2868342503 (CHumanEventResultPool_t270739256 * __this, int32_t ____initialObjectsCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHumanEventResultPool__ctor_m2868342503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ____initialObjectsCount0;
		CPool_1__ctor_m2951116350(__this, L_0, /*hidden argument*/CPool_1__ctor_m2951116350_RuntimeMethod_var);
		return;
	}
}
// SenseEngineUnityPlugin.SHumanEventResult SenseEngineUnityPlugin.CHumanEventResultPool::NewObject()
extern "C"  SHumanEventResult_t1230270054  CHumanEventResultPool_NewObject_m3444870938 (CHumanEventResultPool_t270739256 * __this, const RuntimeMethod* method)
{
	SHumanEventResult_t1230270054  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SHumanEventResult_t1230270054 ));
		SHumanEventResult_t1230270054  L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SenseEngineUnityPlugin.CSenseEngine::add_OnHumanEnter(SenseEngineUnityPlugin.OnHumanEnterDelegate)
extern "C"  void CSenseEngine_add_OnHumanEnter_m204865810 (CSenseEngine_t3384788086 * __this, OnHumanEnterDelegate_t240558909 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_add_OnHumanEnter_m204865810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnHumanEnterDelegate_t240558909 * V_0 = NULL;
	OnHumanEnterDelegate_t240558909 * V_1 = NULL;
	OnHumanEnterDelegate_t240558909 * V_2 = NULL;
	{
		OnHumanEnterDelegate_t240558909 * L_0 = __this->get_OnHumanEnter_0();
		V_0 = L_0;
	}

IL_0007:
	{
		OnHumanEnterDelegate_t240558909 * L_1 = V_0;
		V_1 = L_1;
		OnHumanEnterDelegate_t240558909 * L_2 = V_1;
		OnHumanEnterDelegate_t240558909 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnHumanEnterDelegate_t240558909 *)CastclassSealed((RuntimeObject*)L_4, OnHumanEnterDelegate_t240558909_il2cpp_TypeInfo_var));
		OnHumanEnterDelegate_t240558909 ** L_5 = __this->get_address_of_OnHumanEnter_0();
		OnHumanEnterDelegate_t240558909 * L_6 = V_2;
		OnHumanEnterDelegate_t240558909 * L_7 = V_1;
		OnHumanEnterDelegate_t240558909 * L_8 = InterlockedCompareExchangeImpl<OnHumanEnterDelegate_t240558909 *>((OnHumanEnterDelegate_t240558909 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnHumanEnterDelegate_t240558909 * L_9 = V_0;
		OnHumanEnterDelegate_t240558909 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHumanEnterDelegate_t240558909 *)L_9) == ((RuntimeObject*)(OnHumanEnterDelegate_t240558909 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::remove_OnHumanEnter(SenseEngineUnityPlugin.OnHumanEnterDelegate)
extern "C"  void CSenseEngine_remove_OnHumanEnter_m2817276709 (CSenseEngine_t3384788086 * __this, OnHumanEnterDelegate_t240558909 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_remove_OnHumanEnter_m2817276709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnHumanEnterDelegate_t240558909 * V_0 = NULL;
	OnHumanEnterDelegate_t240558909 * V_1 = NULL;
	OnHumanEnterDelegate_t240558909 * V_2 = NULL;
	{
		OnHumanEnterDelegate_t240558909 * L_0 = __this->get_OnHumanEnter_0();
		V_0 = L_0;
	}

IL_0007:
	{
		OnHumanEnterDelegate_t240558909 * L_1 = V_0;
		V_1 = L_1;
		OnHumanEnterDelegate_t240558909 * L_2 = V_1;
		OnHumanEnterDelegate_t240558909 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnHumanEnterDelegate_t240558909 *)CastclassSealed((RuntimeObject*)L_4, OnHumanEnterDelegate_t240558909_il2cpp_TypeInfo_var));
		OnHumanEnterDelegate_t240558909 ** L_5 = __this->get_address_of_OnHumanEnter_0();
		OnHumanEnterDelegate_t240558909 * L_6 = V_2;
		OnHumanEnterDelegate_t240558909 * L_7 = V_1;
		OnHumanEnterDelegate_t240558909 * L_8 = InterlockedCompareExchangeImpl<OnHumanEnterDelegate_t240558909 *>((OnHumanEnterDelegate_t240558909 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnHumanEnterDelegate_t240558909 * L_9 = V_0;
		OnHumanEnterDelegate_t240558909 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHumanEnterDelegate_t240558909 *)L_9) == ((RuntimeObject*)(OnHumanEnterDelegate_t240558909 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::add_OnHumanStay(SenseEngineUnityPlugin.OnHumanStayDelegate)
extern "C"  void CSenseEngine_add_OnHumanStay_m1553587800 (CSenseEngine_t3384788086 * __this, OnHumanStayDelegate_t3931784964 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_add_OnHumanStay_m1553587800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnHumanStayDelegate_t3931784964 * V_0 = NULL;
	OnHumanStayDelegate_t3931784964 * V_1 = NULL;
	OnHumanStayDelegate_t3931784964 * V_2 = NULL;
	{
		OnHumanStayDelegate_t3931784964 * L_0 = __this->get_OnHumanStay_1();
		V_0 = L_0;
	}

IL_0007:
	{
		OnHumanStayDelegate_t3931784964 * L_1 = V_0;
		V_1 = L_1;
		OnHumanStayDelegate_t3931784964 * L_2 = V_1;
		OnHumanStayDelegate_t3931784964 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnHumanStayDelegate_t3931784964 *)CastclassSealed((RuntimeObject*)L_4, OnHumanStayDelegate_t3931784964_il2cpp_TypeInfo_var));
		OnHumanStayDelegate_t3931784964 ** L_5 = __this->get_address_of_OnHumanStay_1();
		OnHumanStayDelegate_t3931784964 * L_6 = V_2;
		OnHumanStayDelegate_t3931784964 * L_7 = V_1;
		OnHumanStayDelegate_t3931784964 * L_8 = InterlockedCompareExchangeImpl<OnHumanStayDelegate_t3931784964 *>((OnHumanStayDelegate_t3931784964 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnHumanStayDelegate_t3931784964 * L_9 = V_0;
		OnHumanStayDelegate_t3931784964 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHumanStayDelegate_t3931784964 *)L_9) == ((RuntimeObject*)(OnHumanStayDelegate_t3931784964 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::remove_OnHumanStay(SenseEngineUnityPlugin.OnHumanStayDelegate)
extern "C"  void CSenseEngine_remove_OnHumanStay_m3356247978 (CSenseEngine_t3384788086 * __this, OnHumanStayDelegate_t3931784964 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_remove_OnHumanStay_m3356247978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnHumanStayDelegate_t3931784964 * V_0 = NULL;
	OnHumanStayDelegate_t3931784964 * V_1 = NULL;
	OnHumanStayDelegate_t3931784964 * V_2 = NULL;
	{
		OnHumanStayDelegate_t3931784964 * L_0 = __this->get_OnHumanStay_1();
		V_0 = L_0;
	}

IL_0007:
	{
		OnHumanStayDelegate_t3931784964 * L_1 = V_0;
		V_1 = L_1;
		OnHumanStayDelegate_t3931784964 * L_2 = V_1;
		OnHumanStayDelegate_t3931784964 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnHumanStayDelegate_t3931784964 *)CastclassSealed((RuntimeObject*)L_4, OnHumanStayDelegate_t3931784964_il2cpp_TypeInfo_var));
		OnHumanStayDelegate_t3931784964 ** L_5 = __this->get_address_of_OnHumanStay_1();
		OnHumanStayDelegate_t3931784964 * L_6 = V_2;
		OnHumanStayDelegate_t3931784964 * L_7 = V_1;
		OnHumanStayDelegate_t3931784964 * L_8 = InterlockedCompareExchangeImpl<OnHumanStayDelegate_t3931784964 *>((OnHumanStayDelegate_t3931784964 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnHumanStayDelegate_t3931784964 * L_9 = V_0;
		OnHumanStayDelegate_t3931784964 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHumanStayDelegate_t3931784964 *)L_9) == ((RuntimeObject*)(OnHumanStayDelegate_t3931784964 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::add_OnHumanExit(SenseEngineUnityPlugin.OnHumanExitDelegate)
extern "C"  void CSenseEngine_add_OnHumanExit_m2606071700 (CSenseEngine_t3384788086 * __this, OnHumanExitDelegate_t2852278738 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_add_OnHumanExit_m2606071700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnHumanExitDelegate_t2852278738 * V_0 = NULL;
	OnHumanExitDelegate_t2852278738 * V_1 = NULL;
	OnHumanExitDelegate_t2852278738 * V_2 = NULL;
	{
		OnHumanExitDelegate_t2852278738 * L_0 = __this->get_OnHumanExit_2();
		V_0 = L_0;
	}

IL_0007:
	{
		OnHumanExitDelegate_t2852278738 * L_1 = V_0;
		V_1 = L_1;
		OnHumanExitDelegate_t2852278738 * L_2 = V_1;
		OnHumanExitDelegate_t2852278738 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnHumanExitDelegate_t2852278738 *)CastclassSealed((RuntimeObject*)L_4, OnHumanExitDelegate_t2852278738_il2cpp_TypeInfo_var));
		OnHumanExitDelegate_t2852278738 ** L_5 = __this->get_address_of_OnHumanExit_2();
		OnHumanExitDelegate_t2852278738 * L_6 = V_2;
		OnHumanExitDelegate_t2852278738 * L_7 = V_1;
		OnHumanExitDelegate_t2852278738 * L_8 = InterlockedCompareExchangeImpl<OnHumanExitDelegate_t2852278738 *>((OnHumanExitDelegate_t2852278738 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnHumanExitDelegate_t2852278738 * L_9 = V_0;
		OnHumanExitDelegate_t2852278738 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHumanExitDelegate_t2852278738 *)L_9) == ((RuntimeObject*)(OnHumanExitDelegate_t2852278738 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::remove_OnHumanExit(SenseEngineUnityPlugin.OnHumanExitDelegate)
extern "C"  void CSenseEngine_remove_OnHumanExit_m3519074465 (CSenseEngine_t3384788086 * __this, OnHumanExitDelegate_t2852278738 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_remove_OnHumanExit_m3519074465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnHumanExitDelegate_t2852278738 * V_0 = NULL;
	OnHumanExitDelegate_t2852278738 * V_1 = NULL;
	OnHumanExitDelegate_t2852278738 * V_2 = NULL;
	{
		OnHumanExitDelegate_t2852278738 * L_0 = __this->get_OnHumanExit_2();
		V_0 = L_0;
	}

IL_0007:
	{
		OnHumanExitDelegate_t2852278738 * L_1 = V_0;
		V_1 = L_1;
		OnHumanExitDelegate_t2852278738 * L_2 = V_1;
		OnHumanExitDelegate_t2852278738 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnHumanExitDelegate_t2852278738 *)CastclassSealed((RuntimeObject*)L_4, OnHumanExitDelegate_t2852278738_il2cpp_TypeInfo_var));
		OnHumanExitDelegate_t2852278738 ** L_5 = __this->get_address_of_OnHumanExit_2();
		OnHumanExitDelegate_t2852278738 * L_6 = V_2;
		OnHumanExitDelegate_t2852278738 * L_7 = V_1;
		OnHumanExitDelegate_t2852278738 * L_8 = InterlockedCompareExchangeImpl<OnHumanExitDelegate_t2852278738 *>((OnHumanExitDelegate_t2852278738 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnHumanExitDelegate_t2852278738 * L_9 = V_0;
		OnHumanExitDelegate_t2852278738 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHumanExitDelegate_t2852278738 *)L_9) == ((RuntimeObject*)(OnHumanExitDelegate_t2852278738 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::add_OnRawParticles(SenseEngineUnityPlugin.OnRawParticlesDelegate)
extern "C"  void CSenseEngine_add_OnRawParticles_m1519457411 (CSenseEngine_t3384788086 * __this, OnRawParticlesDelegate_t79072485 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_add_OnRawParticles_m1519457411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnRawParticlesDelegate_t79072485 * V_0 = NULL;
	OnRawParticlesDelegate_t79072485 * V_1 = NULL;
	OnRawParticlesDelegate_t79072485 * V_2 = NULL;
	{
		OnRawParticlesDelegate_t79072485 * L_0 = __this->get_OnRawParticles_3();
		V_0 = L_0;
	}

IL_0007:
	{
		OnRawParticlesDelegate_t79072485 * L_1 = V_0;
		V_1 = L_1;
		OnRawParticlesDelegate_t79072485 * L_2 = V_1;
		OnRawParticlesDelegate_t79072485 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnRawParticlesDelegate_t79072485 *)CastclassSealed((RuntimeObject*)L_4, OnRawParticlesDelegate_t79072485_il2cpp_TypeInfo_var));
		OnRawParticlesDelegate_t79072485 ** L_5 = __this->get_address_of_OnRawParticles_3();
		OnRawParticlesDelegate_t79072485 * L_6 = V_2;
		OnRawParticlesDelegate_t79072485 * L_7 = V_1;
		OnRawParticlesDelegate_t79072485 * L_8 = InterlockedCompareExchangeImpl<OnRawParticlesDelegate_t79072485 *>((OnRawParticlesDelegate_t79072485 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnRawParticlesDelegate_t79072485 * L_9 = V_0;
		OnRawParticlesDelegate_t79072485 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnRawParticlesDelegate_t79072485 *)L_9) == ((RuntimeObject*)(OnRawParticlesDelegate_t79072485 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::remove_OnRawParticles(SenseEngineUnityPlugin.OnRawParticlesDelegate)
extern "C"  void CSenseEngine_remove_OnRawParticles_m3853643022 (CSenseEngine_t3384788086 * __this, OnRawParticlesDelegate_t79072485 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_remove_OnRawParticles_m3853643022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnRawParticlesDelegate_t79072485 * V_0 = NULL;
	OnRawParticlesDelegate_t79072485 * V_1 = NULL;
	OnRawParticlesDelegate_t79072485 * V_2 = NULL;
	{
		OnRawParticlesDelegate_t79072485 * L_0 = __this->get_OnRawParticles_3();
		V_0 = L_0;
	}

IL_0007:
	{
		OnRawParticlesDelegate_t79072485 * L_1 = V_0;
		V_1 = L_1;
		OnRawParticlesDelegate_t79072485 * L_2 = V_1;
		OnRawParticlesDelegate_t79072485 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnRawParticlesDelegate_t79072485 *)CastclassSealed((RuntimeObject*)L_4, OnRawParticlesDelegate_t79072485_il2cpp_TypeInfo_var));
		OnRawParticlesDelegate_t79072485 ** L_5 = __this->get_address_of_OnRawParticles_3();
		OnRawParticlesDelegate_t79072485 * L_6 = V_2;
		OnRawParticlesDelegate_t79072485 * L_7 = V_1;
		OnRawParticlesDelegate_t79072485 * L_8 = InterlockedCompareExchangeImpl<OnRawParticlesDelegate_t79072485 *>((OnRawParticlesDelegate_t79072485 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnRawParticlesDelegate_t79072485 * L_9 = V_0;
		OnRawParticlesDelegate_t79072485 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnRawParticlesDelegate_t79072485 *)L_9) == ((RuntimeObject*)(OnRawParticlesDelegate_t79072485 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::ByteArrayToPositionArray(System.Byte[],SenseEngineUnityPlugin.SPosition[]&,System.Int32,System.Int32)
extern "C"  void CSenseEngine_ByteArrayToPositionArray_m1458804841 (CSenseEngine_t3384788086 * __this, ByteU5BU5D_t4116647657* ____bytes0, SPositionU5BU5D_t2124893968** ____stuff1, int32_t ____count2, int32_t ___skipBytes3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_ByteArrayToPositionArray_m1458804841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (SPosition_t764125_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = ____bytes0;
		NullCheck(L_3);
		int32_t L_4 = ___skipBytes3;
		int32_t L_5 = V_0;
		int32_t L_6 = ____count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), (int32_t)L_4))) >= ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6)))))
		{
			goto IL_0026;
		}
	}
	{
		IndexOutOfRangeException_t1578797820 * L_7 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_7, _stringLiteral1219827101, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, CSenseEngine_ByteArrayToPositionArray_m1458804841_RuntimeMethod_var);
	}

IL_0026:
	{
		int32_t L_8 = ___skipBytes3;
		V_1 = L_8;
		V_2 = 0;
		goto IL_005f;
	}

IL_002d:
	{
		SPositionU5BU5D_t2124893968** L_9 = ____stuff1;
		SPositionU5BU5D_t2124893968* L_10 = *((SPositionU5BU5D_t2124893968**)L_9);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = ____bytes0;
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_14 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_m_X_0(L_14);
		SPositionU5BU5D_t2124893968** L_15 = ____stuff1;
		SPositionU5BU5D_t2124893968* L_16 = *((SPositionU5BU5D_t2124893968**)L_15);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_18 = ____bytes0;
		int32_t L_19 = V_1;
		float L_20 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)4)), /*hidden argument*/NULL);
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->set_m_Y_1(L_20);
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = ____count2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::onReceivePacket(System.IAsyncResult)
extern "C"  void CSenseEngine_onReceivePacket_m999933735 (CSenseEngine_t3384788086 * __this, RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_onReceivePacket_m999933735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t3791887218 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	uint8_t V_2 = 0x0;
	SHumanPacket_t4144576520  V_3;
	memset(&V_3, 0, sizeof(V_3));
	SPositionU5BU5D_t2124893968* V_4 = NULL;
	SHumanEventResult_t1230270054  V_5;
	memset(&V_5, 0, sizeof(V_5));
	IndexOutOfRangeException_t1578797820 * V_6 = NULL;
	SPositionU5BU5D_t2124893968* V_7 = NULL;
	IndexOutOfRangeException_t1578797820 * V_8 = NULL;
	SPositionU5BU5D_t2124893968* V_9 = NULL;
	IndexOutOfRangeException_t1578797820 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_0 = ((IPAddress_t241777590_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t241777590_il2cpp_TypeInfo_var))->get_Loopback_6();
		IPEndPoint_t3791887218 * L_1 = (IPEndPoint_t3791887218 *)il2cpp_codegen_object_new(IPEndPoint_t3791887218_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m2833647099(L_1, L_0, ((int32_t)1001), /*hidden argument*/NULL);
		V_0 = L_1;
		UdpClient_t967282006 * L_2 = __this->get_m_UDP_8();
		RuntimeObject* L_3 = ____result0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_4 = UdpClient_EndReceive_m765429616(L_2, L_3, (IPEndPoint_t3791887218 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		ByteU5BU5D_t4116647657* L_5 = V_1;
		SPacketHeader_t1947517642 * L_6 = __this->get_address_of_m_PacketHeader_12();
		CSenseEngine_ByteArrayToStructure_TisSPacketHeader_t1947517642_m3813042819(__this, L_5, (SPacketHeader_t1947517642 *)L_6, /*hidden argument*/CSenseEngine_ByteArrayToStructure_TisSPacketHeader_t1947517642_m3813042819_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_7 = V_1;
		NullCheck(L_7);
		SPacketHeader_t1947517642 * L_8 = __this->get_address_of_m_PacketHeader_12();
		uint32_t L_9 = L_8->get_m_PacketSize_1();
		if ((((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))) == ((int64_t)(((int64_t)((uint64_t)L_9))))))
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_LogError_m583124990(NULL /*static, unused*/, _stringLiteral3127255335, /*hidden argument*/NULL);
		goto IL_02ac;
	}

IL_004d:
	{
		SPacketHeader_t1947517642 * L_10 = __this->get_address_of_m_PacketHeader_12();
		uint8_t L_11 = L_10->get_m_PacketType_2();
		V_2 = L_11;
		uint8_t L_12 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0072;
			}
			case 1:
			{
				goto IL_014c;
			}
			case 2:
			{
				goto IL_01fa;
			}
		}
	}
	{
		goto IL_02a2;
	}

IL_0072:
	{
		OnHumanEnterDelegate_t240558909 * L_13 = __this->get_OnHumanEnter_0();
		if (L_13)
		{
			goto IL_008d;
		}
	}
	{
		OnHumanStayDelegate_t3931784964 * L_14 = __this->get_OnHumanStay_1();
		if (L_14)
		{
			goto IL_008d;
		}
	}
	{
		OnHumanExitDelegate_t2852278738 * L_15 = __this->get_OnHumanExit_2();
		if (!L_15)
		{
			goto IL_02ac;
		}
	}

IL_008d:
	{
		CHumanEventPacketPool_t4236893195 * L_16 = __this->get_m_HumanEventPacketPool_10();
		NullCheck(L_16);
		SHumanPacket_t4144576520  L_17 = CPool_1_Obtain_m440268997(L_16, /*hidden argument*/CPool_1_Obtain_m440268997_RuntimeMethod_var);
		V_3 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_1;
		CSenseEngine_ByteArrayToStructure_TisSHumanPacket_t4144576520_m4100854157(__this, L_18, (SHumanPacket_t4144576520 *)(&V_3), /*hidden argument*/CSenseEngine_ByteArrayToStructure_TisSHumanPacket_t4144576520_m4100854157_RuntimeMethod_var);
		SHumanPacket_t4144576520  L_19 = V_3;
		uint16_t L_20 = L_19.get_m_ParticleCount_3();
		V_4 = ((SPositionU5BU5D_t2124893968*)SZArrayNew(SPositionU5BU5D_t2124893968_il2cpp_TypeInfo_var, (uint32_t)L_20));
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t4116647657* L_21 = V_1;
		SHumanPacket_t4144576520  L_22 = V_3;
		uint16_t L_23 = L_22.get_m_ParticleCount_3();
		RuntimeTypeHandle_t3027515415  L_24 = { reinterpret_cast<intptr_t> (SHumanPacket_t4144576520_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_26 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		CSenseEngine_ByteArrayToPositionArray_m1458804841(__this, L_21, (SPositionU5BU5D_t2124893968**)(&V_4), L_23, L_26, /*hidden argument*/NULL);
		goto IL_011c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00cf;
		throw e;
	}

CATCH_00cf:
	{ // begin catch(System.IndexOutOfRangeException)
		V_6 = ((IndexOutOfRangeException_t1578797820 *)__exception_local);
		StringU5BU5D_t1281789340* L_27 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral1054727619);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1054727619);
		StringU5BU5D_t1281789340* L_28 = L_27;
		IndexOutOfRangeException_t1578797820 * L_29 = V_6;
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Source() */, L_29);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_30);
		StringU5BU5D_t1281789340* L_31 = L_28;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral1410056321);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1410056321);
		StringU5BU5D_t1281789340* L_32 = L_31;
		IndexOutOfRangeException_t1578797820 * L_33 = V_6;
		NullCheck(L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t1281789340* L_35 = L_32;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral3452614566);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614566);
		StringU5BU5D_t1281789340* L_36 = L_35;
		IndexOutOfRangeException_t1578797820 * L_37 = V_6;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_37);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m1809518182(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_LogError_m583124990(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		goto IL_02ac;
	} // end catch (depth: 1)

IL_011c:
	{
		CHumanEventResultPool_t270739256 * L_40 = __this->get_m_HumanEventResultPool_11();
		NullCheck(L_40);
		SHumanEventResult_t1230270054  L_41 = CPool_1_Obtain_m3190329471(L_40, /*hidden argument*/CPool_1_Obtain_m3190329471_RuntimeMethod_var);
		V_5 = L_41;
		SHumanPacket_t4144576520  L_42 = V_3;
		(&V_5)->set_m_Packet_0(L_42);
		SPositionU5BU5D_t2124893968* L_43 = V_4;
		(&V_5)->set_m_Particles_1(L_43);
		ConcurrentQueue_1_t3212134643 * L_44 = __this->get_m_ReceivedHumanEventPackets_5();
		SHumanEventResult_t1230270054  L_45 = V_5;
		NullCheck(L_44);
		ConcurrentQueue_1_Enqueue_m3093795119(L_44, L_45, /*hidden argument*/ConcurrentQueue_1_Enqueue_m3093795119_RuntimeMethod_var);
		goto IL_02ac;
	}

IL_014c:
	{
		OnRawParticlesDelegate_t79072485 * L_46 = __this->get_OnRawParticles_3();
		if (!L_46)
		{
			goto IL_02ac;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_47 = V_1;
		SRawParticlesPacket_t564541380 * L_48 = __this->get_address_of_m_RawParticlesPacketTemp_13();
		CSenseEngine_ByteArrayToStructure_TisSRawParticlesPacket_t564541380_m3232834802(__this, L_47, (SRawParticlesPacket_t564541380 *)L_48, /*hidden argument*/CSenseEngine_ByteArrayToStructure_TisSRawParticlesPacket_t564541380_m3232834802_RuntimeMethod_var);
		SRawParticlesPacket_t564541380 * L_49 = __this->get_address_of_m_RawParticlesPacketTemp_13();
		uint16_t L_50 = L_49->get_m_ParticleCount_1();
		V_7 = ((SPositionU5BU5D_t2124893968*)SZArrayNew(SPositionU5BU5D_t2124893968_il2cpp_TypeInfo_var, (uint32_t)L_50));
	}

IL_0176:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t4116647657* L_51 = V_1;
		SRawParticlesPacket_t564541380 * L_52 = __this->get_address_of_m_RawParticlesPacketTemp_13();
		uint16_t L_53 = L_52->get_m_ParticleCount_1();
		RuntimeTypeHandle_t3027515415  L_54 = { reinterpret_cast<intptr_t> (SRawParticlesPacket_t564541380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_56 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		CSenseEngine_ByteArrayToPositionArray_m1458804841(__this, L_51, (SPositionU5BU5D_t2124893968**)(&V_7), L_53, L_56, /*hidden argument*/NULL);
		goto IL_01e8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_019b;
		throw e;
	}

CATCH_019b:
	{ // begin catch(System.IndexOutOfRangeException)
		V_8 = ((IndexOutOfRangeException_t1578797820 *)__exception_local);
		StringU5BU5D_t1281789340* L_57 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral4011720098);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4011720098);
		StringU5BU5D_t1281789340* L_58 = L_57;
		IndexOutOfRangeException_t1578797820 * L_59 = V_8;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Source() */, L_59);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_60);
		StringU5BU5D_t1281789340* L_61 = L_58;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral1410056321);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1410056321);
		StringU5BU5D_t1281789340* L_62 = L_61;
		IndexOutOfRangeException_t1578797820 * L_63 = V_8;
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_63);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_64);
		StringU5BU5D_t1281789340* L_65 = L_62;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteral3452614566);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614566);
		StringU5BU5D_t1281789340* L_66 = L_65;
		IndexOutOfRangeException_t1578797820 * L_67 = V_8;
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_67);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_68);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_69 = String_Concat_m1809518182(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_LogError_m583124990(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		goto IL_02ac;
	} // end catch (depth: 1)

IL_01e8:
	{
		ConcurrentQueue_1_t4106758557 * L_70 = __this->get_m_ReceivedRawParticles_6();
		SPositionU5BU5D_t2124893968* L_71 = V_7;
		NullCheck(L_70);
		ConcurrentQueue_1_Enqueue_m822006977(L_70, L_71, /*hidden argument*/ConcurrentQueue_1_Enqueue_m822006977_RuntimeMethod_var);
		goto IL_02ac;
	}

IL_01fa:
	{
		OnNonHumanParticlesDelegate_t4246801237 * L_72 = __this->get_OnNonHumanParticles_4();
		if (!L_72)
		{
			goto IL_02ac;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_73 = V_1;
		SNonHumanParticlesPacket_t125939772 * L_74 = __this->get_address_of_m_NonHumanParticlesPacketTemp_14();
		CSenseEngine_ByteArrayToStructure_TisSNonHumanParticlesPacket_t125939772_m4158229944(__this, L_73, (SNonHumanParticlesPacket_t125939772 *)L_74, /*hidden argument*/CSenseEngine_ByteArrayToStructure_TisSNonHumanParticlesPacket_t125939772_m4158229944_RuntimeMethod_var);
		SNonHumanParticlesPacket_t125939772 * L_75 = __this->get_address_of_m_NonHumanParticlesPacketTemp_14();
		uint16_t L_76 = L_75->get_m_ParticleCount_1();
		V_9 = ((SPositionU5BU5D_t2124893968*)SZArrayNew(SPositionU5BU5D_t2124893968_il2cpp_TypeInfo_var, (uint32_t)L_76));
	}

IL_0224:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t4116647657* L_77 = V_1;
		SNonHumanParticlesPacket_t125939772 * L_78 = __this->get_address_of_m_NonHumanParticlesPacketTemp_14();
		uint16_t L_79 = L_78->get_m_ParticleCount_1();
		RuntimeTypeHandle_t3027515415  L_80 = { reinterpret_cast<intptr_t> (SNonHumanParticlesPacket_t125939772_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_81 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_82 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		CSenseEngine_ByteArrayToPositionArray_m1458804841(__this, L_77, (SPositionU5BU5D_t2124893968**)(&V_9), L_79, L_82, /*hidden argument*/NULL);
		goto IL_0293;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0249;
		throw e;
	}

CATCH_0249:
	{ // begin catch(System.IndexOutOfRangeException)
		V_10 = ((IndexOutOfRangeException_t1578797820 *)__exception_local);
		StringU5BU5D_t1281789340* L_83 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteral1054727619);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1054727619);
		StringU5BU5D_t1281789340* L_84 = L_83;
		IndexOutOfRangeException_t1578797820 * L_85 = V_10;
		NullCheck(L_85);
		String_t* L_86 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Source() */, L_85);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_86);
		StringU5BU5D_t1281789340* L_87 = L_84;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteral1410056321);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1410056321);
		StringU5BU5D_t1281789340* L_88 = L_87;
		IndexOutOfRangeException_t1578797820 * L_89 = V_10;
		NullCheck(L_89);
		String_t* L_90 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_89);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_90);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_90);
		StringU5BU5D_t1281789340* L_91 = L_88;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral3452614566);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614566);
		StringU5BU5D_t1281789340* L_92 = L_91;
		IndexOutOfRangeException_t1578797820 * L_93 = V_10;
		NullCheck(L_93);
		String_t* L_94 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_93);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_94);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_95 = String_Concat_m1809518182(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_LogError_m583124990(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		goto IL_02ac;
	} // end catch (depth: 1)

IL_0293:
	{
		ConcurrentQueue_1_t4106758557 * L_96 = __this->get_m_NonHumanReceivedParticles_7();
		SPositionU5BU5D_t2124893968* L_97 = V_9;
		NullCheck(L_96);
		ConcurrentQueue_1_Enqueue_m822006977(L_96, L_97, /*hidden argument*/ConcurrentQueue_1_Enqueue_m822006977_RuntimeMethod_var);
		goto IL_02ac;
	}

IL_02a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, _stringLiteral1470515767, /*hidden argument*/NULL);
	}

IL_02ac:
	{
		UdpClient_t967282006 * L_98 = __this->get_m_UDP_8();
		intptr_t L_99 = (intptr_t)CSenseEngine_onReceivePacket_m999933735_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_100 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_100, __this, L_99, /*hidden argument*/NULL);
		NullCheck(L_98);
		RuntimeObject* L_101 = UdpClient_BeginReceive_m3486162304(L_98, L_100, NULL, /*hidden argument*/NULL);
		__this->set_m_UdpServerTask_9(L_101);
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::.ctor()
extern "C"  void CSenseEngine__ctor_m2218837759 (CSenseEngine_t3384788086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine__ctor_m2218837759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_t3212134643 * L_0 = (ConcurrentQueue_1_t3212134643 *)il2cpp_codegen_object_new(ConcurrentQueue_1_t3212134643_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_m164483968(L_0, /*hidden argument*/ConcurrentQueue_1__ctor_m164483968_RuntimeMethod_var);
		__this->set_m_ReceivedHumanEventPackets_5(L_0);
		ConcurrentQueue_1_t4106758557 * L_1 = (ConcurrentQueue_1_t4106758557 *)il2cpp_codegen_object_new(ConcurrentQueue_1_t4106758557_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_m520030090(L_1, /*hidden argument*/ConcurrentQueue_1__ctor_m520030090_RuntimeMethod_var);
		__this->set_m_ReceivedRawParticles_6(L_1);
		ConcurrentQueue_1_t4106758557 * L_2 = (ConcurrentQueue_1_t4106758557 *)il2cpp_codegen_object_new(ConcurrentQueue_1_t4106758557_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_m520030090(L_2, /*hidden argument*/ConcurrentQueue_1__ctor_m520030090_RuntimeMethod_var);
		__this->set_m_NonHumanReceivedParticles_7(L_2);
		CHumanEventPacketPool_t4236893195 * L_3 = (CHumanEventPacketPool_t4236893195 *)il2cpp_codegen_object_new(CHumanEventPacketPool_t4236893195_il2cpp_TypeInfo_var);
		CHumanEventPacketPool__ctor_m2273421908(L_3, ((int32_t)100), /*hidden argument*/NULL);
		__this->set_m_HumanEventPacketPool_10(L_3);
		CHumanEventResultPool_t270739256 * L_4 = (CHumanEventResultPool_t270739256 *)il2cpp_codegen_object_new(CHumanEventResultPool_t270739256_il2cpp_TypeInfo_var);
		CHumanEventResultPool__ctor_m2868342503(L_4, ((int32_t)100), /*hidden argument*/NULL);
		__this->set_m_HumanEventResultPool_11(L_4);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UdpClient_t967282006 * L_5 = (UdpClient_t967282006 *)il2cpp_codegen_object_new(UdpClient_t967282006_il2cpp_TypeInfo_var);
		UdpClient__ctor_m450335381(L_5, ((int32_t)1001), 2, /*hidden argument*/NULL);
		__this->set_m_UDP_8(L_5);
		UdpClient_t967282006 * L_6 = __this->get_m_UDP_8();
		NullCheck(L_6);
		UdpClient_set_DontFragment_m2627012446(L_6, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_CreateErrorLog_m2299457989(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::Start()
extern "C"  void CSenseEngine_Start_m3457766427 (CSenseEngine_t3384788086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_Start_m3457766427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UdpClient_t967282006 * L_0 = __this->get_m_UDP_8();
		intptr_t L_1 = (intptr_t)CSenseEngine_onReceivePacket_m999933735_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_2 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_3 = UdpClient_BeginReceive_m3486162304(L_0, L_2, NULL, /*hidden argument*/NULL);
		__this->set_m_UdpServerTask_9(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, _stringLiteral3197055874, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::Update()
extern "C"  void CSenseEngine_Update_m270325699 (CSenseEngine_t3384788086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_Update_m270325699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SHumanEventResult_t1230270054  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SHumanPacket_t4144576520  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SPositionU5BU5D_t2124893968* V_2 = NULL;
	uint8_t V_3 = 0x0;
	SPositionU5BU5D_t2124893968* V_4 = NULL;
	SPositionU5BU5D_t2124893968* V_5 = NULL;
	{
		goto IL_0152;
	}

IL_0005:
	{
		ConcurrentQueue_1_t3212134643 * L_0 = __this->get_m_ReceivedHumanEventPackets_5();
		NullCheck(L_0);
		bool L_1 = ConcurrentQueue_1_TryDequeue_m2077850534(L_0, (SHumanEventResult_t1230270054 *)(&V_0), /*hidden argument*/ConcurrentQueue_1_TryDequeue_m2077850534_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0152;
		}
	}
	{
		SHumanEventResult_t1230270054  L_2 = V_0;
		SHumanPacket_t4144576520  L_3 = L_2.get_m_Packet_0();
		V_1 = L_3;
		SHumanEventResult_t1230270054  L_4 = V_0;
		SPositionU5BU5D_t2124893968* L_5 = L_4.get_m_Particles_1();
		V_2 = L_5;
		SPositionU5BU5D_t2124893968* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2768191473, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		SHumanEventResult_t1230270054  L_10 = V_0;
		SHumanPacket_t4144576520  L_11 = L_10.get_m_Packet_0();
		uint8_t L_12 = L_11.get_m_EventType_1();
		V_3 = L_12;
		uint8_t L_13 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00df;
			}
		}
	}
	{
		goto IL_011b;
	}

IL_0061:
	{
		OnHumanEnterDelegate_t240558909 * L_14 = __this->get_OnHumanEnter_0();
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		OnHumanEnterDelegate_t240558909 * L_15 = __this->get_OnHumanEnter_0();
		SHumanPacket_t4144576520  L_16 = V_1;
		uint8_t L_17 = L_16.get_m_HumanId_2();
		SHumanPacket_t4144576520  L_18 = V_1;
		SPosition_t764125  L_19 = L_18.get_m_Position_4();
		float L_20 = L_19.get_m_X_0();
		SHumanPacket_t4144576520  L_21 = V_1;
		SPosition_t764125  L_22 = L_21.get_m_Position_4();
		float L_23 = L_22.get_m_Y_1();
		SPositionU5BU5D_t2124893968* L_24 = V_2;
		NullCheck(L_15);
		OnHumanEnterDelegate_Invoke_m323739592(L_15, L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
	}

IL_0091:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, _stringLiteral1732046573, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, _stringLiteral367740585, /*hidden argument*/NULL);
		OnHumanExitDelegate_t2852278738 * L_25 = __this->get_OnHumanExit_2();
		if (!L_25)
		{
			goto IL_0135;
		}
	}
	{
		OnHumanExitDelegate_t2852278738 * L_26 = __this->get_OnHumanExit_2();
		SHumanPacket_t4144576520  L_27 = V_1;
		uint8_t L_28 = L_27.get_m_HumanId_2();
		SHumanPacket_t4144576520  L_29 = V_1;
		SPosition_t764125  L_30 = L_29.get_m_Position_4();
		float L_31 = L_30.get_m_X_0();
		SHumanPacket_t4144576520  L_32 = V_1;
		SPosition_t764125  L_33 = L_32.get_m_Position_4();
		float L_34 = L_33.get_m_Y_1();
		SPositionU5BU5D_t2124893968* L_35 = V_2;
		NullCheck(L_26);
		OnHumanExitDelegate_Invoke_m1716505070(L_26, L_28, L_31, L_34, L_35, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_00df:
	{
		OnHumanStayDelegate_t3931784964 * L_36 = __this->get_OnHumanStay_1();
		if (!L_36)
		{
			goto IL_010f;
		}
	}
	{
		OnHumanStayDelegate_t3931784964 * L_37 = __this->get_OnHumanStay_1();
		SHumanPacket_t4144576520  L_38 = V_1;
		uint8_t L_39 = L_38.get_m_HumanId_2();
		SHumanPacket_t4144576520  L_40 = V_1;
		SPosition_t764125  L_41 = L_40.get_m_Position_4();
		float L_42 = L_41.get_m_X_0();
		SHumanPacket_t4144576520  L_43 = V_1;
		SPosition_t764125  L_44 = L_43.get_m_Position_4();
		float L_45 = L_44.get_m_Y_1();
		SPositionU5BU5D_t2124893968* L_46 = V_2;
		NullCheck(L_37);
		OnHumanStayDelegate_Invoke_m1926469124(L_37, L_39, L_42, L_45, L_46, /*hidden argument*/NULL);
	}

IL_010f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, _stringLiteral1583474231, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_011b:
	{
		SHumanPacket_t4144576520  L_47 = V_1;
		uint8_t L_48 = L_47.get_m_EventType_1();
		uint8_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_49);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral884249691, L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_LogError_m583124990(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
	}

IL_0135:
	{
		CHumanEventPacketPool_t4236893195 * L_52 = __this->get_m_HumanEventPacketPool_10();
		SHumanEventResult_t1230270054  L_53 = V_0;
		SHumanPacket_t4144576520  L_54 = L_53.get_m_Packet_0();
		NullCheck(L_52);
		CPool_1_Free_m2887872382(L_52, L_54, /*hidden argument*/CPool_1_Free_m2887872382_RuntimeMethod_var);
		CHumanEventResultPool_t270739256 * L_55 = __this->get_m_HumanEventResultPool_11();
		SHumanEventResult_t1230270054  L_56 = V_0;
		NullCheck(L_55);
		CPool_1_Free_m1304239724(L_55, L_56, /*hidden argument*/CPool_1_Free_m1304239724_RuntimeMethod_var);
	}

IL_0152:
	{
		ConcurrentQueue_1_t3212134643 * L_57 = __this->get_m_ReceivedHumanEventPackets_5();
		NullCheck(L_57);
		int32_t L_58 = ConcurrentQueue_1_get_Count_m4142606748(L_57, /*hidden argument*/ConcurrentQueue_1_get_Count_m4142606748_RuntimeMethod_var);
		if ((((int32_t)L_58) <= ((int32_t)0)))
		{
			goto IL_01a2;
		}
	}
	{
		OnHumanEnterDelegate_t240558909 * L_59 = __this->get_OnHumanEnter_0();
		if (L_59)
		{
			goto IL_0005;
		}
	}
	{
		OnHumanStayDelegate_t3931784964 * L_60 = __this->get_OnHumanStay_1();
		if (L_60)
		{
			goto IL_0005;
		}
	}
	{
		OnHumanExitDelegate_t2852278738 * L_61 = __this->get_OnHumanExit_2();
		if (L_61)
		{
			goto IL_0005;
		}
	}
	{
		goto IL_01a2;
	}

IL_0183:
	{
		ConcurrentQueue_1_t4106758557 * L_62 = __this->get_m_ReceivedRawParticles_6();
		NullCheck(L_62);
		bool L_63 = ConcurrentQueue_1_TryDequeue_m546868922(L_62, (SPositionU5BU5D_t2124893968**)(&V_4), /*hidden argument*/ConcurrentQueue_1_TryDequeue_m546868922_RuntimeMethod_var);
		if (!L_63)
		{
			goto IL_01a2;
		}
	}
	{
		OnRawParticlesDelegate_t79072485 * L_64 = __this->get_OnRawParticles_3();
		SPositionU5BU5D_t2124893968* L_65 = V_4;
		NullCheck(L_64);
		OnRawParticlesDelegate_Invoke_m2996221978(L_64, L_65, /*hidden argument*/NULL);
		V_4 = (SPositionU5BU5D_t2124893968*)NULL;
	}

IL_01a2:
	{
		ConcurrentQueue_1_t4106758557 * L_66 = __this->get_m_ReceivedRawParticles_6();
		NullCheck(L_66);
		int32_t L_67 = ConcurrentQueue_1_get_Count_m3996068592(L_66, /*hidden argument*/ConcurrentQueue_1_get_Count_m3996068592_RuntimeMethod_var);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_01d9;
		}
	}
	{
		OnRawParticlesDelegate_t79072485 * L_68 = __this->get_OnRawParticles_3();
		if (L_68)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d9;
	}

IL_01ba:
	{
		ConcurrentQueue_1_t4106758557 * L_69 = __this->get_m_NonHumanReceivedParticles_7();
		NullCheck(L_69);
		bool L_70 = ConcurrentQueue_1_TryDequeue_m546868922(L_69, (SPositionU5BU5D_t2124893968**)(&V_5), /*hidden argument*/ConcurrentQueue_1_TryDequeue_m546868922_RuntimeMethod_var);
		if (!L_70)
		{
			goto IL_01d9;
		}
	}
	{
		OnNonHumanParticlesDelegate_t4246801237 * L_71 = __this->get_OnNonHumanParticles_4();
		SPositionU5BU5D_t2124893968* L_72 = V_5;
		NullCheck(L_71);
		OnNonHumanParticlesDelegate_Invoke_m2874366677(L_71, L_72, /*hidden argument*/NULL);
		V_5 = (SPositionU5BU5D_t2124893968*)NULL;
	}

IL_01d9:
	{
		OnNonHumanParticlesDelegate_t4246801237 * L_73 = __this->get_OnNonHumanParticles_4();
		if (!L_73)
		{
			goto IL_01ef;
		}
	}
	{
		ConcurrentQueue_1_t4106758557 * L_74 = __this->get_m_NonHumanReceivedParticles_7();
		NullCheck(L_74);
		int32_t L_75 = ConcurrentQueue_1_get_Count_m3996068592(L_74, /*hidden argument*/ConcurrentQueue_1_get_Count_m3996068592_RuntimeMethod_var);
		if ((((int32_t)L_75) > ((int32_t)0)))
		{
			goto IL_01ba;
		}
	}

IL_01ef:
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.CSenseEngine::Stop()
extern "C"  void CSenseEngine_Stop_m2143479435 (CSenseEngine_t3384788086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSenseEngine_Stop_m2143479435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_UdpServerTask_9();
		NullCheck(L_0);
		WaitHandle_t1743403487 * L_1 = InterfaceFuncInvoker0< WaitHandle_t1743403487 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Threading.WaitHandle::Close() */, L_1);
		UdpClient_t967282006 * L_2 = __this->get_m_UDP_8();
		NullCheck(L_2);
		UdpClient_Close_m4217442468(L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SenseEngineUnityPlugin.Logger SenseEngineUnityPlugin.Logger::CreateErrorLog()
extern "C"  Logger_t894154007 * Logger_CreateErrorLog_m2299457989 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_CreateErrorLog_m2299457989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_t894154007 * L_0 = ((Logger_t894154007_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t894154007_il2cpp_TypeInfo_var))->get_m_ErrorLog_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Logger_t894154007 * L_1 = (Logger_t894154007 *)il2cpp_codegen_object_new(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger__ctor_m4251129197(L_1, _stringLiteral95342995, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		((Logger_t894154007_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t894154007_il2cpp_TypeInfo_var))->set_m_ErrorLog_0(L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_t894154007 * L_2 = ((Logger_t894154007_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t894154007_il2cpp_TypeInfo_var))->get_m_ErrorLog_0();
		return L_2;
	}
}
// System.Void SenseEngineUnityPlugin.Logger::.ctor(System.String)
extern "C"  void Logger__ctor_m4251129197 (Logger_t894154007 * __this, String_t* ____loggerName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger__ctor_m4251129197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____loggerName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral843515249, /*hidden argument*/NULL);
		FileStream_t4292183065 * L_2 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
		FileStream__ctor_m2784380556(L_2, L_1, 2, /*hidden argument*/NULL);
		__this->set_m_LogStream_1(L_2);
		String_t* L_3 = ____loggerName0;
		FileStream_t4292183065 * L_4 = __this->get_m_LogStream_1();
		NullCheck(L_4);
		String_t* L_5 = FileStream_get_Name_m2026065212(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_3, _stringLiteral4145767372, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m4182570127(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SenseEngineUnityPlugin.Logger::LogError(System.String)
extern "C"  void Logger_LogError_m583124990 (RuntimeObject * __this /* static, unused */, String_t* ____message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_LogError_m583124990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t894154007_il2cpp_TypeInfo_var);
		Logger_t894154007 * L_0 = ((Logger_t894154007_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t894154007_il2cpp_TypeInfo_var))->get_m_ErrorLog_0();
		String_t* L_1 = ____message0;
		NullCheck(L_0);
		Logger_Log_m771409156(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SenseEngineUnityPlugin.Logger::Log(System.String)
extern "C"  void Logger_Log_m771409156 (Logger_t894154007 * __this, String_t* ____message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_Log_m771409156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		FileStream_t4292183065 * L_0 = __this->get_m_LogStream_1();
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		FileStream_t4292183065 * L_1 = __this->get_m_LogStream_1();
		NullCheck(L_1);
		int64_t L_2 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_1);
		if ((((int64_t)L_2) >= ((int64_t)(((int64_t)((int64_t)((int32_t)33554432)))))))
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ____message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral3452614566, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_5);
		V_0 = L_6;
		FileStream_t4292183065 * L_7 = __this->get_m_LogStream_1();
		ByteU5BU5D_t4116647657* L_8 = V_0;
		ByteU5BU5D_t4116647657* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))));
		FileStream_t4292183065 * L_10 = __this->get_m_LogStream_1();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Flush() */, L_10);
		return;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_11 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t4116647657* L_12 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, _stringLiteral4034612726);
		V_1 = L_12;
		FileStream_t4292183065 * L_13 = __this->get_m_LogStream_1();
		ByteU5BU5D_t4116647657* L_14 = V_1;
		ByteU5BU5D_t4116647657* L_15 = V_1;
		NullCheck(L_15);
		NullCheck(L_13);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))));
		FileStream_t4292183065 * L_16 = __this->get_m_LogStream_1();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_16);
		__this->set_m_LogStream_1((FileStream_t4292183065 *)NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.Logger::Finalize()
extern "C"  void Logger_Finalize_m2893193250 (Logger_t894154007 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			FileStream_t4292183065 * L_0 = __this->get_m_LogStream_1();
			if (!L_0)
			{
				goto IL_001a;
			}
		}

IL_0008:
		{
			FileStream_t4292183065 * L_1 = __this->get_m_LogStream_1();
			NullCheck(L_1);
			VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_1);
			__this->set_m_LogStream_1((FileStream_t4292183065 *)NULL);
		}

IL_001a:
		{
			IL2CPP_LEAVE(0x23, FINALLY_001c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0023:
	{
		return;
	}
}
// System.Void SenseEngineUnityPlugin.Logger::.cctor()
extern "C"  void Logger__cctor_m3564204298 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnHumanEnterDelegate_t240558909 (OnHumanEnterDelegate_t240558909 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint8_t, float, float, SPosition_t764125 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '____particles3' to native representation
	SPosition_t764125 * _____particles3_marshaled = NULL;
	if (____particles3 != NULL)
	{
		_____particles3_marshaled = reinterpret_cast<SPosition_t764125 *>((____particles3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____humanId0, ____x1, ____y2, _____particles3_marshaled);

}
// System.Void SenseEngineUnityPlugin.OnHumanEnterDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnHumanEnterDelegate__ctor_m2638070229 (OnHumanEnterDelegate_t240558909 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SenseEngineUnityPlugin.OnHumanEnterDelegate::Invoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnHumanEnterDelegate_Invoke_m323739592 (OnHumanEnterDelegate_t240558909 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnHumanEnterDelegate_Invoke_m323739592((OnHumanEnterDelegate_t240558909 *)__this->get_prev_9(), ____humanId0, ____x1, ____y2, ____particles3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ____humanId0, ____x1, ____y2, ____particles3);
					else
						GenericVirtActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ____humanId0, ____x1, ____y2, ____particles3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____humanId0, ____x1, ____y2, ____particles3);
					else
						VirtActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____humanId0, ____x1, ____y2, ____particles3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SenseEngineUnityPlugin.OnHumanEnterDelegate::BeginInvoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnHumanEnterDelegate_BeginInvoke_m2948529209 (OnHumanEnterDelegate_t240558909 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnHumanEnterDelegate_BeginInvoke_m2948529209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &____humanId0);
	__d_args[1] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &____x1);
	__d_args[2] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &____y2);
	__d_args[3] = ____particles3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void SenseEngineUnityPlugin.OnHumanEnterDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnHumanEnterDelegate_EndInvoke_m1670568465 (OnHumanEnterDelegate_t240558909 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnHumanExitDelegate_t2852278738 (OnHumanExitDelegate_t2852278738 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint8_t, float, float, SPosition_t764125 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '____particles3' to native representation
	SPosition_t764125 * _____particles3_marshaled = NULL;
	if (____particles3 != NULL)
	{
		_____particles3_marshaled = reinterpret_cast<SPosition_t764125 *>((____particles3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____humanId0, ____x1, ____y2, _____particles3_marshaled);

}
// System.Void SenseEngineUnityPlugin.OnHumanExitDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnHumanExitDelegate__ctor_m2837978715 (OnHumanExitDelegate_t2852278738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SenseEngineUnityPlugin.OnHumanExitDelegate::Invoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnHumanExitDelegate_Invoke_m1716505070 (OnHumanExitDelegate_t2852278738 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnHumanExitDelegate_Invoke_m1716505070((OnHumanExitDelegate_t2852278738 *)__this->get_prev_9(), ____humanId0, ____x1, ____y2, ____particles3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ____humanId0, ____x1, ____y2, ____particles3);
					else
						GenericVirtActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ____humanId0, ____x1, ____y2, ____particles3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____humanId0, ____x1, ____y2, ____particles3);
					else
						VirtActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____humanId0, ____x1, ____y2, ____particles3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SenseEngineUnityPlugin.OnHumanExitDelegate::BeginInvoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnHumanExitDelegate_BeginInvoke_m3469607018 (OnHumanExitDelegate_t2852278738 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnHumanExitDelegate_BeginInvoke_m3469607018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &____humanId0);
	__d_args[1] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &____x1);
	__d_args[2] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &____y2);
	__d_args[3] = ____particles3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void SenseEngineUnityPlugin.OnHumanExitDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnHumanExitDelegate_EndInvoke_m3025263674 (OnHumanExitDelegate_t2852278738 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnHumanStayDelegate_t3931784964 (OnHumanStayDelegate_t3931784964 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint8_t, float, float, SPosition_t764125 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '____particles3' to native representation
	SPosition_t764125 * _____particles3_marshaled = NULL;
	if (____particles3 != NULL)
	{
		_____particles3_marshaled = reinterpret_cast<SPosition_t764125 *>((____particles3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____humanId0, ____x1, ____y2, _____particles3_marshaled);

}
// System.Void SenseEngineUnityPlugin.OnHumanStayDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnHumanStayDelegate__ctor_m1082314848 (OnHumanStayDelegate_t3931784964 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SenseEngineUnityPlugin.OnHumanStayDelegate::Invoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnHumanStayDelegate_Invoke_m1926469124 (OnHumanStayDelegate_t3931784964 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnHumanStayDelegate_Invoke_m1926469124((OnHumanStayDelegate_t3931784964 *)__this->get_prev_9(), ____humanId0, ____x1, ____y2, ____particles3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ____humanId0, ____x1, ____y2, ____particles3);
					else
						GenericVirtActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ____humanId0, ____x1, ____y2, ____particles3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____humanId0, ____x1, ____y2, ____particles3);
					else
						VirtActionInvoker4< uint8_t, float, float, SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____humanId0, ____x1, ____y2, ____particles3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint8_t, float, float, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____humanId0, ____x1, ____y2, ____particles3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SenseEngineUnityPlugin.OnHumanStayDelegate::BeginInvoke(System.Byte,System.Single,System.Single,SenseEngineUnityPlugin.SPosition[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnHumanStayDelegate_BeginInvoke_m2084804469 (OnHumanStayDelegate_t3931784964 * __this, uint8_t ____humanId0, float ____x1, float ____y2, SPositionU5BU5D_t2124893968* ____particles3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnHumanStayDelegate_BeginInvoke_m2084804469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &____humanId0);
	__d_args[1] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &____x1);
	__d_args[2] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &____y2);
	__d_args[3] = ____particles3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void SenseEngineUnityPlugin.OnHumanStayDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnHumanStayDelegate_EndInvoke_m3411709706 (OnHumanStayDelegate_t3931784964 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnNonHumanParticlesDelegate_t4246801237 (OnNonHumanParticlesDelegate_t4246801237 * __this, SPositionU5BU5D_t2124893968* ___particles0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(SPosition_t764125 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___particles0' to native representation
	SPosition_t764125 * ____particles0_marshaled = NULL;
	if (___particles0 != NULL)
	{
		____particles0_marshaled = reinterpret_cast<SPosition_t764125 *>((___particles0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____particles0_marshaled);

}
// System.Void SenseEngineUnityPlugin.OnNonHumanParticlesDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnNonHumanParticlesDelegate__ctor_m4118443892 (OnNonHumanParticlesDelegate_t4246801237 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SenseEngineUnityPlugin.OnNonHumanParticlesDelegate::Invoke(SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnNonHumanParticlesDelegate_Invoke_m2874366677 (OnNonHumanParticlesDelegate_t4246801237 * __this, SPositionU5BU5D_t2124893968* ___particles0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnNonHumanParticlesDelegate_Invoke_m2874366677((OnNonHumanParticlesDelegate_t4246801237 *)__this->get_prev_9(), ___particles0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___particles0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___particles0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ___particles0);
					else
						GenericVirtActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ___particles0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___particles0);
					else
						VirtActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___particles0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___particles0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___particles0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___particles0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___particles0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___particles0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___particles0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SenseEngineUnityPlugin.OnNonHumanParticlesDelegate::BeginInvoke(SenseEngineUnityPlugin.SPosition[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnNonHumanParticlesDelegate_BeginInvoke_m3133227690 (OnNonHumanParticlesDelegate_t4246801237 * __this, SPositionU5BU5D_t2124893968* ___particles0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___particles0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SenseEngineUnityPlugin.OnNonHumanParticlesDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnNonHumanParticlesDelegate_EndInvoke_m3395873976 (OnNonHumanParticlesDelegate_t4246801237 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnRawParticlesDelegate_t79072485 (OnRawParticlesDelegate_t79072485 * __this, SPositionU5BU5D_t2124893968* ___particles0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(SPosition_t764125 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___particles0' to native representation
	SPosition_t764125 * ____particles0_marshaled = NULL;
	if (___particles0 != NULL)
	{
		____particles0_marshaled = reinterpret_cast<SPosition_t764125 *>((___particles0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____particles0_marshaled);

}
// System.Void SenseEngineUnityPlugin.OnRawParticlesDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnRawParticlesDelegate__ctor_m4131733498 (OnRawParticlesDelegate_t79072485 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SenseEngineUnityPlugin.OnRawParticlesDelegate::Invoke(SenseEngineUnityPlugin.SPosition[])
extern "C"  void OnRawParticlesDelegate_Invoke_m2996221978 (OnRawParticlesDelegate_t79072485 * __this, SPositionU5BU5D_t2124893968* ___particles0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnRawParticlesDelegate_Invoke_m2996221978((OnRawParticlesDelegate_t79072485 *)__this->get_prev_9(), ___particles0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___particles0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___particles0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ___particles0);
					else
						GenericVirtActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(targetMethod, targetThis, ___particles0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___particles0);
					else
						VirtActionInvoker1< SPositionU5BU5D_t2124893968* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___particles0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___particles0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___particles0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___particles0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___particles0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___particles0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SPositionU5BU5D_t2124893968*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___particles0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SenseEngineUnityPlugin.OnRawParticlesDelegate::BeginInvoke(SenseEngineUnityPlugin.SPosition[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnRawParticlesDelegate_BeginInvoke_m2719383933 (OnRawParticlesDelegate_t79072485 * __this, SPositionU5BU5D_t2124893968* ___particles0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___particles0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SenseEngineUnityPlugin.OnRawParticlesDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnRawParticlesDelegate_EndInvoke_m2526265227 (OnRawParticlesDelegate_t79072485 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SenseEngineUnityPlugin.SHumanEventResult
extern "C" void SHumanEventResult_t1230270054_marshal_pinvoke(const SHumanEventResult_t1230270054& unmarshaled, SHumanEventResult_t1230270054_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Particles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Particles' of type 'SHumanEventResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Particles_1Exception, NULL, NULL);
}
extern "C" void SHumanEventResult_t1230270054_marshal_pinvoke_back(const SHumanEventResult_t1230270054_marshaled_pinvoke& marshaled, SHumanEventResult_t1230270054& unmarshaled)
{
	Exception_t* ___m_Particles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Particles' of type 'SHumanEventResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Particles_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SenseEngineUnityPlugin.SHumanEventResult
extern "C" void SHumanEventResult_t1230270054_marshal_pinvoke_cleanup(SHumanEventResult_t1230270054_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SenseEngineUnityPlugin.SHumanEventResult
extern "C" void SHumanEventResult_t1230270054_marshal_com(const SHumanEventResult_t1230270054& unmarshaled, SHumanEventResult_t1230270054_marshaled_com& marshaled)
{
	Exception_t* ___m_Particles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Particles' of type 'SHumanEventResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Particles_1Exception, NULL, NULL);
}
extern "C" void SHumanEventResult_t1230270054_marshal_com_back(const SHumanEventResult_t1230270054_marshaled_com& marshaled, SHumanEventResult_t1230270054& unmarshaled)
{
	Exception_t* ___m_Particles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Particles' of type 'SHumanEventResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Particles_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SenseEngineUnityPlugin.SHumanEventResult
extern "C" void SHumanEventResult_t1230270054_marshal_com_cleanup(SHumanEventResult_t1230270054_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
