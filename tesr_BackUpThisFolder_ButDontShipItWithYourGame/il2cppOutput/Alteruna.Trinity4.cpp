#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32>
struct HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct TaskFactory_1_tCD4F5CD2F7DE9F3684EA4DF0CCB3BD046168710F;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Task_1_t4DD9B38500B98B834F7483F8E5EA3AF1ED374ED7;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Alteruna.Trinity.DeviceStatistics
struct DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F;
// System.Exception
struct Exception_t;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970;
// Alteruna.Trinity.IAdaptiveSerializable
struct IAdaptiveSerializable_t906D4E14B727AB6413FD2CCC21FDB849A15979D3;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Alteruna.Trinity.ITransportStreamReader
struct ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC;
// Alteruna.Trinity.ITransportStreamWriter
struct ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603;
// Alteruna.Trinity.LogBase
struct LogBase_tF12EFCBC7D155D70144076653C3252EC410C05E0;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Alteruna.Trinity.NetworkStatistics
struct NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07;
// Alteruna.Trinity.PersistenceStorage
struct PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Alteruna.User
struct User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// i
struct i_tA6BBA11C42704485F956D7C01F24F192E9131F21;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188;
// Alteruna.Trinity.PersistenceStorage/ah
struct ah_t8538EAD44FB71063D773723B3813050E036C6A93;
// Alteruna.Trinity.PersistenceStorage/d
struct d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ah_t8538EAD44FB71063D773723B3813050E036C6A93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral42E831F73638A53B3B30BEC6A586F3B70D709158;
IL2CPP_EXTERN_C String_t* _stringLiteral7E6261BF146CED8F7EA52A1FF1D7E50AEE7A715D;
IL2CPP_EXTERN_C String_t* _stringLiteral888C788F281F660882800DFB233685AF802B3829;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m8909D2D7BCC1F19843DD7ADC7D3BFD54404D28DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_mBD83EA67ED2F288C73EE14646CF03CE27A83FE76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m37A74E9BA0EDCCAC14CEE1733A9220C1BD5CB788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m5456E1F2707F8058DAFCEEC882A685E96661D283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m186A754C03132E36451339953E8A8D339C06EDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistenceStorage_d_m070C09DCFA20619B55438F8F719361155EF63121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_StartNew_TisTask_1_t824317F4B958F7512E8F7300511752937A6C6043_m63D50812BCBA70A3AEC87422EC6BA17C89FCC8F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Alteruna.Trinity.HistoryBuffer`1<System.UInt32>
struct HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923  : public RuntimeObject
{
	// T[] Alteruna.Trinity.HistoryBuffer`1::a
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a_0;
	// System.Int32 Alteruna.Trinity.HistoryBuffer`1::b
	int32_t ___b_1;
	// System.Int32 Alteruna.Trinity.HistoryBuffer`1::c
	int32_t ___c_2;
	// System.Int32 Alteruna.Trinity.HistoryBuffer`1::d
	int32_t ___d_3;
	// System.Int32 Alteruna.Trinity.HistoryBuffer`1::e
	int32_t ___e_4;
};
struct Il2CppArrayBounds;

// Alteruna.Trinity.DeviceStatistics
struct DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F  : public RuntimeObject
{
	// i Alteruna.Trinity.DeviceStatistics::b
	i_tA6BBA11C42704485F956D7C01F24F192E9131F21* ___b_1;
	// Alteruna.Trinity.NetworkStatistics Alteruna.Trinity.DeviceStatistics::c
	NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* ___c_2;
	// System.Byte Alteruna.Trinity.DeviceStatistics::d
	uint8_t ___d_3;
	// System.Byte Alteruna.Trinity.DeviceStatistics::e
	uint8_t ___e_4;
	// System.UInt32 Alteruna.Trinity.DeviceStatistics::f
	uint32_t ___f_5;
	// System.UInt32 Alteruna.Trinity.DeviceStatistics::g
	uint32_t ___g_6;
	// System.UInt64 Alteruna.Trinity.DeviceStatistics::h
	uint64_t ___h_7;
	// System.Single Alteruna.Trinity.DeviceStatistics::i
	float ___i_8;
	// System.Single Alteruna.Trinity.DeviceStatistics::j
	float ___j_9;
	// System.UInt32 Alteruna.Trinity.DeviceStatistics::k
	uint32_t ___k_10;
	// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::l
	HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* ___l_11;
	// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::m
	HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* ___m_12;
	// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::n
	HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* ___n_13;
	// System.UInt16 Alteruna.Trinity.DeviceStatistics::o
	uint16_t ___o_14;
};

// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C  : public RuntimeObject
{
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188* ___buffer_0;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_1;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* ___headers_2;
};

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Alteruna.Trinity.NetworkStatistics
struct NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07  : public RuntimeObject
{
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::a
	uint32_t ___a_0;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::b
	uint32_t ___b_1;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::c
	uint32_t ___c_2;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::d
	uint32_t ___d_3;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::e
	uint32_t ___e_4;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::f
	uint32_t ___f_5;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::h
	uint32_t ___h_7;
	// System.UInt32 Alteruna.Trinity.NetworkStatistics::i
	uint32_t ___i_8;
};

// Alteruna.Trinity.PersistenceStorage
struct PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155  : public RuntimeObject
{
	// System.Net.Http.HttpClient Alteruna.Trinity.PersistenceStorage::p
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___p_15;
	// System.String Alteruna.Trinity.PersistenceStorage::q
	String_t* ___q_16;
	// Alteruna.Trinity.LogBase Alteruna.Trinity.PersistenceStorage::r
	LogBase_tF12EFCBC7D155D70144076653C3252EC410C05E0* ___r_17;
	// System.Int32 Alteruna.Trinity.PersistenceStorage::s
	int32_t ___s_18;
	// System.Int32 Alteruna.Trinity.PersistenceStorage::t
	int32_t ___t_19;
	// System.Int32 Alteruna.Trinity.PersistenceStorage::u
	int32_t ___u_20;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Alteruna.User
struct User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3  : public RuntimeObject
{
	// System.String Alteruna.User::a
	String_t* ___a_0;
	// System.UInt16 Alteruna.User::b
	uint16_t ___b_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Alteruna.Trinity.VersionControl
struct VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945  : public RuntimeObject
{
};

struct VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_StaticFields
{
	// System.UInt16 Alteruna.Trinity.VersionControl::CompatibilityVersion
	uint16_t ___CompatibilityVersion_0;
	// System.String Alteruna.Trinity.VersionControl::c
	String_t* ___c_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>
struct TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// Alteruna.Trinity.ConnectionStatus
struct ConnectionStatus_tE86B2EF06BB5A106F8607C23F0E75C5B352F847B 
{
	// System.Int32 Alteruna.Trinity.ConnectionStatus::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Alteruna.Trinity.DeviceType
struct DeviceType_tD81AA666544EDAA5136F05539EB25F43C557D8D8 
{
	// System.Int32 Alteruna.Trinity.DeviceType::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// System.Net.HttpStatusCode
struct HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374 
{
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;
};

// Alteruna.Trinity.PacketType
struct PacketType_tCB08192D5655F8BB0608C6CF6ADE02B58644DD29 
{
	// System.UInt16 Alteruna.Trinity.PacketType::value__
	uint16_t ___value___2;
};

// Alteruna.Trinity.Reliability
struct Reliability_tE895C2350DA29BFDD70AAA4DB63DF86795CBE1A3 
{
	// System.Byte Alteruna.Trinity.Reliability::value__
	uint8_t ___value___2;
};

// Alteruna.Trinity.ResponseCode
struct ResponseCode_t3017F1BFF7C4F1C93E960CC9D9D58EC0DCBF9415 
{
	// System.Byte Alteruna.Trinity.ResponseCode::value__
	uint8_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Alteruna.Trinity.SynchronizableElement
struct SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B 
{
	// System.Guid Alteruna.Trinity.SynchronizableElement::CodecID
	Guid_t ___CodecID_0;
	// System.Boolean Alteruna.Trinity.SynchronizableElement::Persistent
	bool ___Persistent_1;
	// Alteruna.Trinity.IAdaptiveSerializable Alteruna.Trinity.SynchronizableElement::Synchronizable
	RuntimeObject* ___Synchronizable_2;
};
// Native definition for P/Invoke marshalling of Alteruna.Trinity.SynchronizableElement
struct SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_pinvoke
{
	Guid_t ___CodecID_0;
	int32_t ___Persistent_1;
	RuntimeObject* ___Synchronizable_2;
};
// Native definition for COM marshalling of Alteruna.Trinity.SynchronizableElement
struct SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_com
{
	Guid_t ___CodecID_0;
	int32_t ___Persistent_1;
	RuntimeObject* ___Synchronizable_2;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;
};

// System.UriFormat
struct UriFormat_tCFECBDF50112D695E5A4C3F05AE60480FB77A2C0 
{
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.UriKind
struct UriKind_t6597BD6BF48C695D63244DF8541B5EA48FF7F9E7 
{
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;
};

// Alteruna.Trinity.LogBase/Severity
struct Severity_t5B5C1A4D0736CB8CA81825BE44F702A0EA6FEDF4 
{
	// System.Byte Alteruna.Trinity.LogBase/Severity::value__
	uint8_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Task_1_t4DD9B38500B98B834F7483F8E5EA3AF1ED374ED7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_result_38;
};

struct Task_1_t4DD9B38500B98B834F7483F8E5EA3AF1ED374ED7_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCD4F5CD2F7DE9F3684EA4DF0CCB3BD046168710F* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___m_result_38;
};

struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8* ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CRequestMessageU3Ek__BackingField_6;
};

// Alteruna.Trinity.LogBase
struct LogBase_tF12EFCBC7D155D70144076653C3252EC410C05E0  : public RuntimeObject
{
	// Alteruna.Trinity.LogBase/Severity Alteruna.Trinity.LogBase::b
	uint8_t ___b_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// Alteruna.Trinity.PersistenceStorage/ah
struct ah_t8538EAD44FB71063D773723B3813050E036C6A93  : public RuntimeObject
{
	// System.Int32 Alteruna.Trinity.PersistenceStorage/ah::a
	int32_t ___a_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Alteruna.Trinity.PersistenceStorage/ah::b
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___b_1;
	// Alteruna.Trinity.PersistenceStorage Alteruna.Trinity.PersistenceStorage/ah::c
	PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* ___c_2;
	// System.Net.Http.HttpResponseMessage Alteruna.Trinity.PersistenceStorage/ah::d
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___d_3;
	// System.String Alteruna.Trinity.PersistenceStorage/ah::e
	String_t* ___e_4;
	// System.String[] Alteruna.Trinity.PersistenceStorage/ah::f
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___f_5;
	// System.Net.Http.HttpResponseMessage Alteruna.Trinity.PersistenceStorage/ah::g
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___g_6;
	// System.String Alteruna.Trinity.PersistenceStorage/ah::h
	String_t* ___h_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> Alteruna.Trinity.PersistenceStorage/ah::i
	TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 ___i_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Alteruna.Trinity.PersistenceStorage/ah::j
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___j_9;
};

// Alteruna.Trinity.PersistenceStorage/d
struct d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3  : public RuntimeObject
{
	// System.Int32 Alteruna.Trinity.PersistenceStorage/d::a
	int32_t ___a_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Alteruna.Trinity.PersistenceStorage/d::b
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___b_1;
	// Alteruna.Trinity.PersistenceStorage Alteruna.Trinity.PersistenceStorage/d::c
	PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* ___c_2;
	// System.Boolean Alteruna.Trinity.PersistenceStorage/d::d
	bool ___d_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Alteruna.Trinity.PersistenceStorage/d::e
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___e_4;
};

// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_gshared (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_gshared (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, const RuntimeMethod* method) ;
// T[] Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_gshared (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_gshared (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::PushFront(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_gshared (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, uint32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskFactory_StartNew_TisRuntimeObject_m7D0EB953A8FF38EA45DE9CC1007EF7EA906D7B75_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___function0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m07B572608C528AC8F684456A98C7A8590DA70518_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisRuntimeObject_mC5DDF6D3774DC1E3C602EF2FF5992BEB85CAA85B_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m7AAFBB234F89B78BABA0A328582363B279174964_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.UInt16 Alteruna.User::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) ;
// System.String Alteruna.User::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* User_get_Name_mCF1F743D1BED37BC60D21D36A5B31DDBD967C51E_inline (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m57629B7E74D92A54414073D5C27D6827C93A4DD5 (uint16_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics__ctor_m5227D5469EFC5B4342CC1E4B3173435B8D0092CB (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::a(Alteruna.Trinity.NetworkStatistics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_a_m5CD59C4EE04D7C796EED03EEC151B1E0F7FE5C0F_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* ___A_00, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::.ctor(System.Int32)
inline void HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*, int32_t, const RuntimeMethod*))HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_gshared)(__this, ___capacity0, method);
}
// System.Byte Alteruna.Trinity.DeviceStatistics::get_MemoryConsumption()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t DeviceStatistics_get_MemoryConsumption_m14AB01EE065291B8D5501217CD17858A3FA25C05_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.DeviceStatistics::get_NumberOfConnections()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_NumberOfConnections_mF41DE50462A44676D5A304E69E20D71E09DEC80A_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.DeviceStatistics::get_BlockedConnections()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_BlockedConnections_mA68744CE0528BF62B85F92F7935A101934E77C00_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.Single Alteruna.Trinity.DeviceStatistics::get_CycleProcessingTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DeviceStatistics_get_CycleProcessingTime_mB909AEA64CEED493AA5556BB6773D25832940AEE_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.Single Alteruna.Trinity.DeviceStatistics::get_TargetCycleTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DeviceStatistics_get_TargetCycleTime_m3BC04090764C32A58FA40232BEE158BBDE360CA7_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.DeviceStatistics::get_UptimeSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_UptimeSeconds_m913B0C08B5A8573B297B7C4DB598A08CE52D4389_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::get_DataSentHistory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.Int32 Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::get_Size()
inline int32_t HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42 (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*, const RuntimeMethod*))HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_gshared)(__this, method);
}
// T[] Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::ToArray()
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37 (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*, const RuntimeMethod*))HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_gshared)(__this, method);
}
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::get_DataReceivedHistory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::get_PeakConnectionsHistory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// Alteruna.Trinity.NetworkStatistics Alteruna.Trinity.DeviceStatistics::get_NetworkStatistics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* DeviceStatistics_get_NetworkStatistics_m96E3A771D119D1A6920FE4FFE68E06F7E4C4BD5B_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::Serialize(Alteruna.Trinity.ITransportStreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_Serialize_mA646BE4F1296EAFDCF6359ABAD9145947FBEC657 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) ;
// System.UInt16 Alteruna.Trinity.DeviceStatistics::get_HistoryOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t DeviceStatistics_get_HistoryOffset_m97936C25493B1EB6021EDC5EBAE91B3BB4C2C95A_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_MemoryConsumption(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_MemoryConsumption_m2FC962374C7ACEE94CBB44C7B7D10BA718C41E93_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_NumberOfConnections(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_NumberOfConnections_mA8E2B6CFBAF730593B8405E6460BD68A768ED737_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_BlockedConnections(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_BlockedConnections_mA472B366ABD6558EFCB1131AA117222CEE20C2AB_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_CycleProcessingTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_CycleProcessingTime_m076774B62DED246FBF7AAC9E1C2738E32248AA73_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_TargetCycleTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_TargetCycleTime_m106455F8B013E20C292E8DF8DCD5814F5073A5CC_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_UptimeSeconds(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_UptimeSeconds_m557FA48430CD63563DF4A5E66661E02E167D6B86_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::Clear()
inline void HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, const RuntimeMethod* method)
{
	((  void (*) (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*, const RuntimeMethod*))HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_gshared)(__this, method);
}
// System.Void Alteruna.Trinity.HistoryBuffer`1<System.UInt32>::PushFront(T)
inline void HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8 (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*, uint32_t, const RuntimeMethod*))HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_gshared)(__this, ___item0, method);
}
// System.Void Alteruna.Trinity.NetworkStatistics::Unserialize(Alteruna.Trinity.ITransportStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_Unserialize_m3D9976F3B3B53E3268692DFC725155E92BD46ABA (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.DeviceStatistics::set_HistoryOffset(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_HistoryOffset_mCC38869C5A9094BE265D3BDE9263EE6D3F2BB43B_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::f(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_f_mB494AFDF38F9E46EA6936DD7F598016EDB00180B_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_TotalKilobytesSent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_TotalKilobytesSent_m47AC164EF5B1E58F4896A6184826BAEB07987B18_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::c(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_c_mF57C7A1E6BEB802CA14FC7B2FC23E10D57167C60_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_BytesPerSecondSent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_BytesPerSecondSent_m6BA90D5F8155C052CCEAC0A4D31F562B9CD65AE5_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_PeekLoadSent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_PeekLoadSent_m841F13005B8CACCD586359273849ADB1F0171A79_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::b(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_b_m04D68D5ED92F9AD7828FEA45B047BAB6E56A5C01_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::e(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_e_m741057412258A6E2C571BCCA77EF5A980620FE21_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_TotalKilobytesReceived()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_TotalKilobytesReceived_mCA20C47378466C5CA2DD2EC2F0C84F7D2E1B0B3D_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::d(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_d_m539BFE4D6EB5E38D300A75411D1F8D52A5B6DCF0_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_BytesPerSecondReceived()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_BytesPerSecondReceived_mE95F604E3BD00939600683117255952C3D60838A_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_PeekLoadReceived()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_PeekLoadReceived_m147424CD23B19A7184BD405B672F7CF45C62CB95_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) ;
// System.Void Alteruna.Trinity.NetworkStatistics::a(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_a_mC13445E7C58708E8DE073793BB42467978AE5600_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::set_BaseAddress(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mB2625418064182F1F73C76045B5A4AAF07EE3BFA (Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Threading.Tasks.Task`1<System.Boolean>>(System.Func`1<TResult>)
inline Task_1_t4DD9B38500B98B834F7483F8E5EA3AF1ED374ED7* TaskFactory_StartNew_TisTask_1_t824317F4B958F7512E8F7300511752937A6C6043_m63D50812BCBA70A3AEC87422EC6BA17C89FCC8F0 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310* ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t4DD9B38500B98B834F7483F8E5EA3AF1ED374ED7* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310*, const RuntimeMethod*))TaskFactory_StartNew_TisRuntimeObject_m7D0EB953A8FF38EA45DE9CC1007EF7EA906D7B75_gshared)(__this, ___function0, method);
}
// System.Void Alteruna.Trinity.PersistenceStorage/ah::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ah__ctor_m34DB8A8933A14019A1064F88DA06361152C7BF59 (ah_t8538EAD44FB71063D773723B3813050E036C6A93* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Alteruna.Trinity.PersistenceStorage/ah>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m5456E1F2707F8058DAFCEEC882A685E96661D283 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ah_t8538EAD44FB71063D773723B3813050E036C6A93** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, ah_t8538EAD44FB71063D773723B3813050E036C6A93**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m07B572608C528AC8F684456A98C7A8590DA70518_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void Alteruna.Trinity.PersistenceStorage/d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void d__ctor_m34D99CE69F6D40C36D92BDCDF2C382E8BBA669B4 (d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<Alteruna.Trinity.PersistenceStorage/d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m186A754C03132E36451339953E8A8D339C06EDCD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m07B572608C528AC8F684456A98C7A8590DA70518_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Alteruna.Trinity.PersistenceStorage::e()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* PersistenceStorage_e_m02ABB08029D63888FE06323620399235F27B8BFE (PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Alteruna.Trinity.PersistenceStorage/d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m8909D2D7BCC1F19843DD7ADC7D3BFD54404D28DA (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisRuntimeObject_mC5DDF6D3774DC1E3C602EF2FF5992BEB85CAA85B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___result0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpClient::GetAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* HttpClient_GetAsync_mF86D8542CF69FC4C218CC5ED9537F322059AD028 (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, String_t* ___requestUri0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 (*) (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,Alteruna.Trinity.PersistenceStorage/ah>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m37A74E9BA0EDCCAC14CEE1733A9220C1BD5CB788 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* ___awaiter0, ah_t8538EAD44FB71063D773723B3813050E036C6A93** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, ah_t8538EAD44FB71063D773723B3813050E036C6A93**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m7AAFBB234F89B78BABA0A328582363B279174964_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9 (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* (*) (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> System.Net.Http.HttpContent::ReadAsStringAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Alteruna.Trinity.PersistenceStorage/ah>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_mBD83EA67ED2F288C73EE14646CF03CE27A83FE76 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, ah_t8538EAD44FB71063D773723B3813050E036C6A93** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, ah_t8538EAD44FB71063D773723B3813050E036C6A93**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m7AAFBB234F89B78BABA0A328582363B279174964_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
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
// System.Boolean Alteruna.User::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_Equals_m13C46470D1B0D4E98774B945E6FD0566FEBB1C34 (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003c;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003c;
	}

IL_0026:
	{
		RuntimeObject* L_7 = ___obj0;
		NullCheck(((User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)IsInstClass((RuntimeObject*)L_7, User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3_il2cpp_TypeInfo_var)));
		uint16_t L_8;
		L_8 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(((User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)IsInstClass((RuntimeObject*)L_7, User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3_il2cpp_TypeInfo_var)), NULL);
		uint16_t L_9;
		L_9 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		goto IL_003c;
	}

IL_003c:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Int32 Alteruna.User::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t User_GetHashCode_m29999D73704597A6BEC703F477DE429ED4D0882C (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0;
		L_0 = User_get_Name_mCF1F743D1BED37BC60D21D36A5B31DDBD967C51E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0018;
	}

IL_000d:
	{
		String_t* L_1;
		L_1 = User_get_Name_mCF1F743D1BED37BC60D21D36A5B31DDBD967C51E_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0018:
	{
		uint16_t L_3;
		L_3 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)397)))^L_4));
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.String Alteruna.User::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* User_get_Name_mCF1F743D1BED37BC60D21D36A5B31DDBD967C51E (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___a_0;
		return L_0;
	}
}
// System.Void Alteruna.User::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_a_m53896FE9DD4DBBB6844A7F8E07E0FE79E2B7BC0E (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, String_t* ___A_00, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___A_00;
		__this->___a_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___a_0), (void*)L_0);
		return;
	}
}
// System.UInt16 Alteruna.User::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26 (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___b_1;
		return L_0;
	}
}
// System.Void Alteruna.User::a(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_a_m39179B1216794E6C40A0032E6684A373FA0DBF45 (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, uint16_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___A_00;
		__this->___b_1 = L_0;
		return;
	}
}
// System.Boolean Alteruna.User::op_Equality(Alteruna.User,Alteruna.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_op_Equality_m4A5043C2EE839CB3A19B20B88A9AEAB9CF2D421E (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* ___a0, User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_0 = ___a0;
		V_0 = (bool)((((RuntimeObject*)(User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_2 = ___b1;
		V_1 = (bool)((((RuntimeObject*)(User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_002d;
	}

IL_0010:
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_3 = ___b1;
		V_2 = (bool)((((RuntimeObject*)(User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_001c:
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_5 = ___a0;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(L_5, NULL);
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_7 = ___b1;
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(L_7, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_002d;
	}

IL_002d:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean Alteruna.User::op_Inequality(Alteruna.User,Alteruna.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_op_Inequality_mCB8E96589F3EC716D08B5D6A312199AF6F9D5206 (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* ___a0, User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_0 = ___a0;
		V_0 = (bool)((((RuntimeObject*)(User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_2 = ___b1;
		V_1 = (bool)((!(((RuntimeObject*)(User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0030;
	}

IL_0010:
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_3 = ___b1;
		V_2 = (bool)((((RuntimeObject*)(User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0030;
	}

IL_001c:
	{
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_5 = ___a0;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(L_5, NULL);
		User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* L_7 = ___b1;
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(L_7, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_0030:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.String Alteruna.User::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* User_ToString_m06BFC7EEA3AB41B6C1673C897075B75194A682D4 (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E831F73638A53B3B30BEC6A586F3B70D709158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = User_get_Name_mCF1F743D1BED37BC60D21D36A5B31DDBD967C51E_inline(__this, NULL);
		uint16_t L_1;
		L_1 = User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline(__this, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = UInt16_ToString_m57629B7E74D92A54414073D5C27D6827C93A4DD5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_0, _stringLiteral42E831F73638A53B3B30BEC6A586F3B70D709158, L_2, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_3;
	}
}
// System.Void Alteruna.User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_mC1841FB08B47283138D6EC3FFC92209BA46A647B (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___a_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___a_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Alteruna.Trinity.DeviceStatistics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics__ctor_m10087E5ED3DCEFB983870FB1DDF3B73AFC4079E0 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_0 = (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07*)il2cpp_codegen_object_new(NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetworkStatistics__ctor_m5227D5469EFC5B4342CC1E4B3173435B8D0092CB(L_0, NULL);
		DeviceStatistics_a_m5CD59C4EE04D7C796EED03EEC151B1E0F7FE5C0F_inline(__this, L_0, NULL);
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_1 = (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*)il2cpp_codegen_object_new(HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D(L_1, ((int32_t)24), HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_RuntimeMethod_var);
		__this->___n_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___n_13), (void*)L_1);
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_2 = (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*)il2cpp_codegen_object_new(HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D(L_2, ((int32_t)24), HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_RuntimeMethod_var);
		__this->___m_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_12), (void*)L_2);
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_3 = (HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923*)il2cpp_codegen_object_new(HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D(L_3, ((int32_t)24), HistoryBuffer_1__ctor_mC4EEFBC3F9C74FC81A2BC817C816C492EF68794D_RuntimeMethod_var);
		__this->___l_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___l_11), (void*)L_3);
		return;
	}
}
// Alteruna.Trinity.NetworkStatistics Alteruna.Trinity.DeviceStatistics::get_NetworkStatistics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* DeviceStatistics_get_NetworkStatistics_m96E3A771D119D1A6920FE4FFE68E06F7E4C4BD5B (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_0 = __this->___c_2;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::a(Alteruna.Trinity.NetworkStatistics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_a_m5CD59C4EE04D7C796EED03EEC151B1E0F7FE5C0F (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* ___A_00, const RuntimeMethod* method) 
{
	{
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_0 = ___A_00;
		__this->___c_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_2), (void*)L_0);
		return;
	}
}
// System.Byte Alteruna.Trinity.DeviceStatistics::get_MemoryConsumption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DeviceStatistics_get_MemoryConsumption_m14AB01EE065291B8D5501217CD17858A3FA25C05 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___e_4;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_MemoryConsumption(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_MemoryConsumption_m2FC962374C7ACEE94CBB44C7B7D10BA718C41E93 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___e_4 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.DeviceStatistics::get_NumberOfConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_NumberOfConnections_mF41DE50462A44676D5A304E69E20D71E09DEC80A (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___f_5;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_NumberOfConnections(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_NumberOfConnections_mA8E2B6CFBAF730593B8405E6460BD68A768ED737 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___f_5 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.DeviceStatistics::get_BlockedConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_BlockedConnections_mA68744CE0528BF62B85F92F7935A101934E77C00 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___g_6;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_BlockedConnections(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_BlockedConnections_mA472B366ABD6558EFCB1131AA117222CEE20C2AB (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___g_6 = L_0;
		return;
	}
}
// System.Single Alteruna.Trinity.DeviceStatistics::get_CycleProcessingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DeviceStatistics_get_CycleProcessingTime_mB909AEA64CEED493AA5556BB6773D25832940AEE (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___i_8;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_CycleProcessingTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_CycleProcessingTime_m076774B62DED246FBF7AAC9E1C2738E32248AA73 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___i_8 = L_0;
		return;
	}
}
// System.Single Alteruna.Trinity.DeviceStatistics::get_TargetCycleTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DeviceStatistics_get_TargetCycleTime_m3BC04090764C32A58FA40232BEE158BBDE360CA7 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___j_9;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_TargetCycleTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_TargetCycleTime_m106455F8B013E20C292E8DF8DCD5814F5073A5CC (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___j_9 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.DeviceStatistics::get_UptimeSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_UptimeSeconds_m913B0C08B5A8573B297B7C4DB598A08CE52D4389 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___k_10;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_UptimeSeconds(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_UptimeSeconds_m557FA48430CD63563DF4A5E66661E02E167D6B86 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___k_10 = L_0;
		return;
	}
}
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::get_PeakConnectionsHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_0 = __this->___l_11;
		return L_0;
	}
}
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::get_DataSentHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_0 = __this->___m_12;
		return L_0;
	}
}
// Alteruna.Trinity.HistoryBuffer`1<System.UInt32> Alteruna.Trinity.DeviceStatistics::get_DataReceivedHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_0 = __this->___n_13;
		return L_0;
	}
}
// System.UInt16 Alteruna.Trinity.DeviceStatistics::get_HistoryOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t DeviceStatistics_get_HistoryOffset_m97936C25493B1EB6021EDC5EBAE91B3BB4C2C95A (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___o_14;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::set_HistoryOffset(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_set_HistoryOffset_mCC38869C5A9094BE265D3BDE9263EE6D3F2BB43B (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___value0;
		__this->___o_14 = L_0;
		return;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::Serialize(Alteruna.Trinity.ITransportStreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_Serialize_m0C69FDE871B6E0DFCA45E313324E3AD1C4886B67 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	{
		RuntimeObject* L_0 = ___processor0;
		uint8_t L_1;
		L_1 = DeviceStatistics_get_MemoryConsumption_m14AB01EE065291B8D5501217CD17858A3FA25C05_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< uint8_t >::Invoke(6 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.Byte) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = ___processor0;
		uint32_t L_3;
		L_3 = DeviceStatistics_get_NumberOfConnections_mF41DE50462A44676D5A304E69E20D71E09DEC80A_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = ___processor0;
		uint32_t L_5;
		L_5 = DeviceStatistics_get_BlockedConnections_mA68744CE0528BF62B85F92F7935A101934E77C00_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___processor0;
		float L_7;
		L_7 = DeviceStatistics_get_CycleProcessingTime_mB909AEA64CEED493AA5556BB6773D25832940AEE_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.Single) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = ___processor0;
		float L_9;
		L_9 = DeviceStatistics_get_TargetCycleTime_m3BC04090764C32A58FA40232BEE158BBDE360CA7_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.Single) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = ___processor0;
		uint32_t L_11;
		L_11 = DeviceStatistics_get_UptimeSeconds_m913B0C08B5A8573B297B7C4DB598A08CE52D4389_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = ___processor0;
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_13;
		L_13 = DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42(L_13, HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.Int32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_12, L_14);
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_15;
		L_15 = DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline(__this, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42(L_15, HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_00a3;
		}
	}
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_18;
		L_18 = DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline(__this, NULL);
		NullCheck(L_18);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19;
		L_19 = HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37(L_18, HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_RuntimeMethod_var);
		V_1 = L_19;
		V_2 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_1;
		NullCheck(L_20);
		V_3 = ((int32_t)(((RuntimeArray*)L_20)->max_length));
		goto IL_0098;
	}

IL_0088:
	{
		RuntimeObject* L_21 = ___processor0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_21, L_25);
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0098:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		V_4 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_4;
		if (L_29)
		{
			goto IL_0088;
		}
	}
	{
	}

IL_00a3:
	{
		RuntimeObject* L_30 = ___processor0;
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_31;
		L_31 = DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline(__this, NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42(L_31, HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		NullCheck(L_30);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.Int32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_30, L_32);
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_33;
		L_33 = DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline(__this, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42(L_33, HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		bool L_35 = V_5;
		if (!L_35)
		{
			goto IL_0103;
		}
	}
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_36;
		L_36 = DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline(__this, NULL);
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37;
		L_37 = HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37(L_36, HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_RuntimeMethod_var);
		V_6 = L_37;
		V_7 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_6;
		NullCheck(L_38);
		V_8 = ((int32_t)(((RuntimeArray*)L_38)->max_length));
		goto IL_00f6;
	}

IL_00e2:
	{
		RuntimeObject* L_39 = ___processor0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_6;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_39, L_43);
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f6:
	{
		int32_t L_45 = V_7;
		int32_t L_46 = V_8;
		V_9 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_9;
		if (L_47)
		{
			goto IL_00e2;
		}
	}
	{
	}

IL_0103:
	{
		RuntimeObject* L_48 = ___processor0;
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_49;
		L_49 = DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline(__this, NULL);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42(L_49, HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		NullCheck(L_48);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.Int32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_48, L_50);
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_51;
		L_51 = DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline(__this, NULL);
		NullCheck(L_51);
		int32_t L_52;
		L_52 = HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42(L_51, HistoryBuffer_1_get_Size_mF6DA4C1DD975A2DE0EDC90282F9B5DFEAC918E42_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0163;
		}
	}
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_54;
		L_54 = DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline(__this, NULL);
		NullCheck(L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55;
		L_55 = HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37(L_54, HistoryBuffer_1_ToArray_m3B0F57AF8BE2178368C3FD4CA02093114E205C37_RuntimeMethod_var);
		V_11 = L_55;
		V_12 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_11;
		NullCheck(L_56);
		V_13 = ((int32_t)(((RuntimeArray*)L_56)->max_length));
		goto IL_0156;
	}

IL_0142:
	{
		RuntimeObject* L_57 = ___processor0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_11;
		int32_t L_59 = V_12;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_57);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_57, L_61);
		int32_t L_62 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0156:
	{
		int32_t L_63 = V_12;
		int32_t L_64 = V_13;
		V_14 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_14;
		if (L_65)
		{
			goto IL_0142;
		}
	}
	{
	}

IL_0163:
	{
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_66;
		L_66 = DeviceStatistics_get_NetworkStatistics_m96E3A771D119D1A6920FE4FFE68E06F7E4C4BD5B_inline(__this, NULL);
		RuntimeObject* L_67 = ___processor0;
		NullCheck(L_66);
		NetworkStatistics_Serialize_mA646BE4F1296EAFDCF6359ABAD9145947FBEC657(L_66, L_67, NULL);
		RuntimeObject* L_68 = ___processor0;
		uint16_t L_69;
		L_69 = DeviceStatistics_get_HistoryOffset_m97936C25493B1EB6021EDC5EBAE91B3BB4C2C95A_inline(__this, NULL);
		NullCheck(L_68);
		InterfaceActionInvoker1< uint16_t >::Invoke(7 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt16) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_68, L_69);
		return;
	}
}
// System.Void Alteruna.Trinity.DeviceStatistics::Unserialize(Alteruna.Trinity.ITransportStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceStatistics_Unserialize_mCEBD934D7D82C8823148EBAF94FC89A727685F38 (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		RuntimeObject* L_0 = ___processor0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = InterfaceFuncInvoker0< uint8_t >::Invoke(5 /* System.Byte Alteruna.Trinity.ITransportStreamReader::GetByte() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_0);
		DeviceStatistics_set_MemoryConsumption_m2FC962374C7ACEE94CBB44C7B7D10BA718C41E93_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___processor0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_2);
		DeviceStatistics_set_NumberOfConnections_mA8E2B6CFBAF730593B8405E6460BD68A768ED737_inline(__this, L_3, NULL);
		RuntimeObject* L_4 = ___processor0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_4);
		DeviceStatistics_set_BlockedConnections_mA472B366ABD6558EFCB1131AA117222CEE20C2AB_inline(__this, L_5, NULL);
		RuntimeObject* L_6 = ___processor0;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Alteruna.Trinity.ITransportStreamReader::GetFloat() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_6);
		DeviceStatistics_set_CycleProcessingTime_m076774B62DED246FBF7AAC9E1C2738E32248AA73_inline(__this, L_7, NULL);
		RuntimeObject* L_8 = ___processor0;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Alteruna.Trinity.ITransportStreamReader::GetFloat() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_8);
		DeviceStatistics_set_TargetCycleTime_m106455F8B013E20C292E8DF8DCD5814F5073A5CC_inline(__this, L_9, NULL);
		RuntimeObject* L_10 = ___processor0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_10);
		DeviceStatistics_set_UptimeSeconds_m557FA48430CD63563DF4A5E66661E02E167D6B86_inline(__this, L_11, NULL);
		RuntimeObject* L_12 = ___processor0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Alteruna.Trinity.ITransportStreamReader::GetInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_12);
		V_0 = L_13;
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_14;
		L_14 = DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline(__this, NULL);
		NullCheck(L_14);
		HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA(L_14, HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_RuntimeMethod_var);
		V_3 = 0;
		goto IL_007e;
	}

IL_0066:
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_15;
		L_15 = DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline(__this, NULL);
		RuntimeObject* L_16 = ___processor0;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_15);
		HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8(L_15, L_17, HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_RuntimeMethod_var);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007e:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		V_4 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_22 = ___processor0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Alteruna.Trinity.ITransportStreamReader::GetInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_22);
		V_1 = L_23;
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_24;
		L_24 = DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline(__this, NULL);
		NullCheck(L_24);
		HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA(L_24, HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_RuntimeMethod_var);
		V_5 = 0;
		goto IL_00ba;
	}

IL_00a0:
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_25;
		L_25 = DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline(__this, NULL);
		RuntimeObject* L_26 = ___processor0;
		NullCheck(L_26);
		uint32_t L_27;
		L_27 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_25);
		HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8(L_25, L_27, HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_RuntimeMethod_var);
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ba:
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_1;
		V_6 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_32 = ___processor0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Alteruna.Trinity.ITransportStreamReader::GetInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_32);
		V_2 = L_33;
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_34;
		L_34 = DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline(__this, NULL);
		NullCheck(L_34);
		HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA(L_34, HistoryBuffer_1_Clear_mA4A4ABA42299BE88EEA349DA30ACB60529C868BA_RuntimeMethod_var);
		V_7 = 0;
		goto IL_00f7;
	}

IL_00dd:
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_35;
		L_35 = DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline(__this, NULL);
		RuntimeObject* L_36 = ___processor0;
		NullCheck(L_36);
		uint32_t L_37;
		L_37 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_35);
		HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8(L_35, L_37, HistoryBuffer_1_PushFront_mD15CD1CE8783860F6D90F0281DF3A313B32952B8_RuntimeMethod_var);
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00f7:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_2;
		V_8 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (L_41)
		{
			goto IL_00dd;
		}
	}
	{
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_42;
		L_42 = DeviceStatistics_get_NetworkStatistics_m96E3A771D119D1A6920FE4FFE68E06F7E4C4BD5B_inline(__this, NULL);
		RuntimeObject* L_43 = ___processor0;
		NullCheck(L_42);
		NetworkStatistics_Unserialize_m3D9976F3B3B53E3268692DFC725155E92BD46ABA(L_42, L_43, NULL);
		RuntimeObject* L_44 = ___processor0;
		NullCheck(L_44);
		uint16_t L_45;
		L_45 = InterfaceFuncInvoker0< uint16_t >::Invoke(6 /* System.UInt16 Alteruna.Trinity.ITransportStreamReader::GetUShort() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_44);
		DeviceStatistics_set_HistoryOffset_mCC38869C5A9094BE265D3BDE9263EE6D3F2BB43B_inline(__this, L_45, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Alteruna.Trinity.NetworkStatistics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics__ctor_m5227D5469EFC5B4342CC1E4B3173435B8D0092CB (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_BytesPerSecondSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_BytesPerSecondSent_m6BA90D5F8155C052CCEAC0A4D31F562B9CD65AE5 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___a_0;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::f(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_f_mB494AFDF38F9E46EA6936DD7F598016EDB00180B (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___a_0 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_BytesPerSecondReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_BytesPerSecondReceived_mE95F604E3BD00939600683117255952C3D60838A (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___b_1;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::e(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_e_m741057412258A6E2C571BCCA77EF5A980620FE21 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___b_1 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_TotalKilobytesReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_TotalKilobytesReceived_mCA20C47378466C5CA2DD2EC2F0C84F7D2E1B0B3D (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___c_2;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::d(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_d_m539BFE4D6EB5E38D300A75411D1F8D52A5B6DCF0 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___c_2 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_TotalKilobytesSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_TotalKilobytesSent_m47AC164EF5B1E58F4896A6184826BAEB07987B18 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___d_3;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::c(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_c_mF57C7A1E6BEB802CA14FC7B2FC23E10D57167C60 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___d_3 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_PeekLoadSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_PeekLoadSent_m841F13005B8CACCD586359273849ADB1F0171A79 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___e_4;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::b(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_b_m04D68D5ED92F9AD7828FEA45B047BAB6E56A5C01 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___e_4 = L_0;
		return;
	}
}
// System.UInt32 Alteruna.Trinity.NetworkStatistics::get_PeekLoadReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_PeekLoadReceived_m147424CD23B19A7184BD405B672F7CF45C62CB95 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___f_5;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::a(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_a_mC13445E7C58708E8DE073793BB42467978AE5600 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___f_5 = L_0;
		return;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::AddBytesSent(System.UInt32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_AddBytesSent_mC8B04CC55B2876BA468B52C4D8301FE15F3A68FA (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___nbytes0, float ___period1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = ___nbytes0;
		float L_1 = ___period1;
		NetworkStatistics_f_mB494AFDF38F9E46EA6936DD7F598016EDB00180B_inline(__this, il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(((float)(((float)((double)(uint32_t)L_0))/L_1))), NULL);
		uint32_t L_2 = __this->___i_8;
		uint32_t L_3 = ___nbytes0;
		__this->___i_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4;
		L_4 = NetworkStatistics_get_TotalKilobytesSent_m47AC164EF5B1E58F4896A6184826BAEB07987B18_inline(__this, NULL);
		uint32_t L_5 = __this->___i_8;
		NetworkStatistics_c_mF57C7A1E6BEB802CA14FC7B2FC23E10D57167C60_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)((uint32_t)(int32_t)L_5/(uint32_t)(int32_t)((int32_t)1024))))), NULL);
		uint32_t L_6 = __this->___i_8;
		__this->___i_8 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)1024)));
		uint32_t L_7;
		L_7 = NetworkStatistics_get_BytesPerSecondSent_m6BA90D5F8155C052CCEAC0A4D31F562B9CD65AE5_inline(__this, NULL);
		uint32_t L_8;
		L_8 = NetworkStatistics_get_PeekLoadSent_m841F13005B8CACCD586359273849ADB1F0171A79_inline(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)L_8)))? 1 : 0);
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_10;
		L_10 = NetworkStatistics_get_BytesPerSecondSent_m6BA90D5F8155C052CCEAC0A4D31F562B9CD65AE5_inline(__this, NULL);
		NetworkStatistics_b_m04D68D5ED92F9AD7828FEA45B047BAB6E56A5C01_inline(__this, L_10, NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::AddBytesReceived(System.UInt32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_AddBytesReceived_m571B3B525041106D1E1C3B05FFBE817BCADCE38B (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___nbytes0, float ___period1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = ___nbytes0;
		float L_1 = ___period1;
		NetworkStatistics_e_m741057412258A6E2C571BCCA77EF5A980620FE21_inline(__this, il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(((float)(((float)((double)(uint32_t)L_0))/L_1))), NULL);
		uint32_t L_2 = __this->___h_7;
		uint32_t L_3 = ___nbytes0;
		__this->___h_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4;
		L_4 = NetworkStatistics_get_TotalKilobytesReceived_mCA20C47378466C5CA2DD2EC2F0C84F7D2E1B0B3D_inline(__this, NULL);
		uint32_t L_5 = __this->___h_7;
		NetworkStatistics_d_m539BFE4D6EB5E38D300A75411D1F8D52A5B6DCF0_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)((uint32_t)(int32_t)L_5/(uint32_t)(int32_t)((int32_t)1024))))), NULL);
		uint32_t L_6 = __this->___h_7;
		__this->___h_7 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)1024)));
		uint32_t L_7;
		L_7 = NetworkStatistics_get_BytesPerSecondReceived_mE95F604E3BD00939600683117255952C3D60838A_inline(__this, NULL);
		uint32_t L_8;
		L_8 = NetworkStatistics_get_PeekLoadReceived_m147424CD23B19A7184BD405B672F7CF45C62CB95_inline(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)L_8)))? 1 : 0);
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_10;
		L_10 = NetworkStatistics_get_BytesPerSecondReceived_mE95F604E3BD00939600683117255952C3D60838A_inline(__this, NULL);
		NetworkStatistics_a_mC13445E7C58708E8DE073793BB42467978AE5600_inline(__this, L_10, NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_Reset_m6CAC9A0F58524064397E2DC64141E78E43B4BCA0 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		NetworkStatistics_f_mB494AFDF38F9E46EA6936DD7F598016EDB00180B_inline(__this, 0, NULL);
		NetworkStatistics_e_m741057412258A6E2C571BCCA77EF5A980620FE21_inline(__this, 0, NULL);
		NetworkStatistics_d_m539BFE4D6EB5E38D300A75411D1F8D52A5B6DCF0_inline(__this, 0, NULL);
		NetworkStatistics_c_mF57C7A1E6BEB802CA14FC7B2FC23E10D57167C60_inline(__this, 0, NULL);
		NetworkStatistics_b_m04D68D5ED92F9AD7828FEA45B047BAB6E56A5C01_inline(__this, 0, NULL);
		NetworkStatistics_a_mC13445E7C58708E8DE073793BB42467978AE5600_inline(__this, 0, NULL);
		__this->___h_7 = 0;
		__this->___i_8 = 0;
		return;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::Serialize(Alteruna.Trinity.ITransportStreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_Serialize_mA646BE4F1296EAFDCF6359ABAD9145947FBEC657 (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___processor0;
		uint32_t L_1;
		L_1 = NetworkStatistics_get_PeekLoadSent_m841F13005B8CACCD586359273849ADB1F0171A79_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = ___processor0;
		uint32_t L_3;
		L_3 = NetworkStatistics_get_PeekLoadReceived_m147424CD23B19A7184BD405B672F7CF45C62CB95_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = ___processor0;
		uint32_t L_5;
		L_5 = NetworkStatistics_get_BytesPerSecondSent_m6BA90D5F8155C052CCEAC0A4D31F562B9CD65AE5_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___processor0;
		uint32_t L_7;
		L_7 = NetworkStatistics_get_BytesPerSecondReceived_mE95F604E3BD00939600683117255952C3D60838A_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = ___processor0;
		uint32_t L_9;
		L_9 = NetworkStatistics_get_TotalKilobytesSent_m47AC164EF5B1E58F4896A6184826BAEB07987B18_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = ___processor0;
		uint32_t L_11;
		L_11 = NetworkStatistics_get_TotalKilobytesReceived_mCA20C47378466C5CA2DD2EC2F0C84F7D2E1B0B3D_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void Alteruna.Trinity.ITransportStreamWriter::Put(System.UInt32) */, ITransportStreamWriter_t4F013B67360D0A49559048F94C8F31CF65AFD603_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void Alteruna.Trinity.NetworkStatistics::Unserialize(Alteruna.Trinity.ITransportStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatistics_Unserialize_m3D9976F3B3B53E3268692DFC725155E92BD46ABA (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, RuntimeObject* ___processor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___processor0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_0);
		NetworkStatistics_b_m04D68D5ED92F9AD7828FEA45B047BAB6E56A5C01_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___processor0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_2);
		NetworkStatistics_a_mC13445E7C58708E8DE073793BB42467978AE5600_inline(__this, L_3, NULL);
		RuntimeObject* L_4 = ___processor0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_4);
		NetworkStatistics_f_mB494AFDF38F9E46EA6936DD7F598016EDB00180B_inline(__this, L_5, NULL);
		RuntimeObject* L_6 = ___processor0;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_6);
		NetworkStatistics_e_m741057412258A6E2C571BCCA77EF5A980620FE21_inline(__this, L_7, NULL);
		RuntimeObject* L_8 = ___processor0;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_8);
		NetworkStatistics_c_mF57C7A1E6BEB802CA14FC7B2FC23E10D57167C60_inline(__this, L_9, NULL);
		RuntimeObject* L_10 = ___processor0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* System.UInt32 Alteruna.Trinity.ITransportStreamReader::GetUInt() */, ITransportStreamReader_t55AD4C12AB439CC09466B753F256C76E5DF1DCEC_il2cpp_TypeInfo_var, L_10);
		NetworkStatistics_d_m539BFE4D6EB5E38D300A75411D1F8D52A5B6DCF0_inline(__this, L_11, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Alteruna.Trinity.SynchronizableElement
IL2CPP_EXTERN_C void SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshal_pinvoke(const SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B& unmarshaled, SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Synchronizable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Synchronizable' of type 'SynchronizableElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Synchronizable_2Exception, NULL);
}
IL2CPP_EXTERN_C void SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshal_pinvoke_back(const SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_pinvoke& marshaled, SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B& unmarshaled)
{
	Exception_t* ___Synchronizable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Synchronizable' of type 'SynchronizableElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Synchronizable_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Alteruna.Trinity.SynchronizableElement
IL2CPP_EXTERN_C void SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshal_pinvoke_cleanup(SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Alteruna.Trinity.SynchronizableElement
IL2CPP_EXTERN_C void SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshal_com(const SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B& unmarshaled, SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_com& marshaled)
{
	Exception_t* ___Synchronizable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Synchronizable' of type 'SynchronizableElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Synchronizable_2Exception, NULL);
}
IL2CPP_EXTERN_C void SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshal_com_back(const SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_com& marshaled, SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B& unmarshaled)
{
	Exception_t* ___Synchronizable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Synchronizable' of type 'SynchronizableElement': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Synchronizable_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Alteruna.Trinity.SynchronizableElement
IL2CPP_EXTERN_C void SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshal_com_cleanup(SynchronizableElement_t61C37158C99A84C73241E318FB362B7596CC689B_marshaled_com& marshaled)
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
// System.Void Alteruna.Trinity.PersistenceStorage::.ctor(System.String,Alteruna.Trinity.LogBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceStorage__ctor_m94D25F5F0D9562F0C626E020C48DCE82D6216050 (PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* __this, String_t* ___A_00, LogBase_tF12EFCBC7D155D70144076653C3252EC410C05E0* ___A_11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E6261BF146CED8F7EA52A1FF1D7E50AEE7A715D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___s_18 = ((int32_t)2147483647LL);
		__this->___t_19 = ((int32_t)2147483647LL);
		__this->___u_20 = ((int32_t)2147483647LL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LogBase_tF12EFCBC7D155D70144076653C3252EC410C05E0* L_0 = ___A_11;
		__this->___r_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_17), (void*)L_0);
		String_t* L_1 = ___A_00;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		__this->___q_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q_16), (void*)L_2);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_3 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD(L_3, NULL);
		__this->___p_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_15), (void*)L_3);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = __this->___p_15;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_5, _stringLiteral7E6261BF146CED8F7EA52A1FF1D7E50AEE7A715D, NULL);
		NullCheck(L_4);
		HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline(L_4, L_5, NULL);
		return;
	}
}
// System.Void Alteruna.Trinity.PersistenceStorage::f()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceStorage_f_m83E715B5C49096728E5238495600E9A0094DB32A (PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceStorage_d_m070C09DCFA20619B55438F8F719361155EF63121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskFactory_StartNew_TisTask_1_t824317F4B958F7512E8F7300511752937A6C6043_m63D50812BCBA70A3AEC87422EC6BA17C89FCC8F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0;
		L_0 = Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline(NULL);
		Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310* L_1 = (Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310*)il2cpp_codegen_object_new(Func_1_t8F7DCA7C26E80651AA3D06600FE90C8D68416310_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mB2625418064182F1F73C76045B5A4AAF07EE3BFA(L_1, __this, (intptr_t)((void*)PersistenceStorage_d_m070C09DCFA20619B55438F8F719361155EF63121_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Task_1_t4DD9B38500B98B834F7483F8E5EA3AF1ED374ED7* L_2;
		L_2 = TaskFactory_StartNew_TisTask_1_t824317F4B958F7512E8F7300511752937A6C6043_m63D50812BCBA70A3AEC87422EC6BA17C89FCC8F0(L_0, L_1, TaskFactory_StartNew_TisTask_1_t824317F4B958F7512E8F7300511752937A6C6043_m63D50812BCBA70A3AEC87422EC6BA17C89FCC8F0_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Alteruna.Trinity.PersistenceStorage::e()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* PersistenceStorage_e_m02ABB08029D63888FE06323620399235F27B8BFE (PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m5456E1F2707F8058DAFCEEC882A685E96661D283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ah_t8538EAD44FB71063D773723B3813050E036C6A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ah_t8538EAD44FB71063D773723B3813050E036C6A93* V_0 = NULL;
	{
		ah_t8538EAD44FB71063D773723B3813050E036C6A93* L_0 = (ah_t8538EAD44FB71063D773723B3813050E036C6A93*)il2cpp_codegen_object_new(ah_t8538EAD44FB71063D773723B3813050E036C6A93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ah__ctor_m34DB8A8933A14019A1064F88DA06361152C7BF59(L_0, NULL);
		V_0 = L_0;
		ah_t8538EAD44FB71063D773723B3813050E036C6A93* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1(AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___b_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___b_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___b_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___b_1))->___m_task_2), (void*)NULL);
		#endif
		ah_t8538EAD44FB71063D773723B3813050E036C6A93* L_3 = V_0;
		NullCheck(L_3);
		L_3->___c_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___c_2), (void*)__this);
		ah_t8538EAD44FB71063D773723B3813050E036C6A93* L_4 = V_0;
		NullCheck(L_4);
		L_4->___a_0 = (-1);
		ah_t8538EAD44FB71063D773723B3813050E036C6A93* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_6 = (&L_5->___b_1);
		AsyncTaskMethodBuilder_1_Start_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m5456E1F2707F8058DAFCEEC882A685E96661D283(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m5456E1F2707F8058DAFCEEC882A685E96661D283_RuntimeMethod_var);
		ah_t8538EAD44FB71063D773723B3813050E036C6A93* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_8 = (&L_7->___b_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_8, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Alteruna.Trinity.PersistenceStorage::d()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* PersistenceStorage_d_m070C09DCFA20619B55438F8F719361155EF63121 (PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m186A754C03132E36451339953E8A8D339C06EDCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* V_0 = NULL;
	{
		d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* L_0 = (d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3*)il2cpp_codegen_object_new(d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		d__ctor_m34D99CE69F6D40C36D92BDCDF2C382E8BBA669B4(L_0, NULL);
		V_0 = L_0;
		d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1(AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___b_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___b_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___b_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___b_1))->___m_task_2), (void*)NULL);
		#endif
		d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* L_3 = V_0;
		NullCheck(L_3);
		L_3->___c_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___c_2), (void*)__this);
		d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* L_4 = V_0;
		NullCheck(L_4);
		L_4->___a_0 = (-1);
		d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_6 = (&L_5->___b_1);
		AsyncTaskMethodBuilder_1_Start_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m186A754C03132E36451339953E8A8D339C06EDCD(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m186A754C03132E36451339953E8A8D339C06EDCD_RuntimeMethod_var);
		d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_8 = (&L_7->___b_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_8, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_9;
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
// System.Void Alteruna.Trinity.PersistenceStorage/d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void d__ctor_m34D99CE69F6D40C36D92BDCDF2C382E8BBA669B4 (d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Alteruna.Trinity.PersistenceStorage/d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void d_MoveNext_m4E420856D3F02959665DB35D8655DDB0144BB08D (d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m8909D2D7BCC1F19843DD7ADC7D3BFD54404D28DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___a_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_004c_1;
		}

IL_000e_1:
		{
			PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* L_2 = __this->___c_2;
			NullCheck(L_2);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
			L_3 = PersistenceStorage_e_m02ABB08029D63888FE06323620399235F27B8BFE(L_2, NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_4;
			L_4 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_3, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0068_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___a_0 = L_6;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_7 = V_2;
			__this->___e_4 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___e_4))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_8 = (&__this->___b_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m8909D2D7BCC1F19843DD7ADC7D3BFD54404D28DA(L_8, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_Tisd_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3_m8909D2D7BCC1F19843DD7ADC7D3BFD54404D28DA_RuntimeMethod_var);
			goto IL_00ad;
		}

IL_004c_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_9 = __this->___e_4;
			V_2 = L_9;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_10 = (&__this->___e_4);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___a_0 = L_11;
		}

IL_0068_1:
		{
			bool L_12;
			L_12 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			__this->___d_3 = L_12;
			bool L_13 = __this->___d_3;
			V_1 = L_13;
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___a_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_14 = (&__this->___b_1);
		Exception_t* L_15 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_14, L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	}// end catch (depth: 1)

IL_0098:
	{
		__this->___a_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_16 = (&__this->___b_1);
		bool L_17 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_16, L_17, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void Alteruna.Trinity.PersistenceStorage/d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void d_SetStateMachine_m8324440084AB4C2C44C2F9F8CED9B173C56DC238 (d_t11EC74CBCF041BE057A61E6E79BDB1FAF53DC6D3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
// System.Void Alteruna.Trinity.PersistenceStorage/ah::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ah__ctor_m34DB8A8933A14019A1064F88DA06361152C7BF59 (ah_t8538EAD44FB71063D773723B3813050E036C6A93* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Alteruna.Trinity.PersistenceStorage/ah::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ah_MoveNext_m47869CAD20FA0927BB67CFDF1535BCB48A1C8A3A (ah_t8538EAD44FB71063D773723B3813050E036C6A93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_mBD83EA67ED2F288C73EE14646CF03CE27A83FE76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m37A74E9BA0EDCCAC14CEE1733A9220C1BD5CB788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral888C788F281F660882800DFB233685AF802B3829);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ah_t8538EAD44FB71063D773723B3813050E036C6A93* V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___a_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0075_1;
		}

IL_0014_1:
		{
			goto IL_011b_1;
		}

IL_0019_1:
		{
			PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* L_3 = __this->___c_2;
			NullCheck(L_3);
			HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = L_3->___p_15;
			PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* L_5 = __this->___c_2;
			NullCheck(L_5);
			String_t* L_6 = L_5->___q_16;
			String_t* L_7;
			L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral888C788F281F660882800DFB233685AF802B3829, L_6, NULL);
			NullCheck(L_4);
			Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_8;
			L_8 = HttpClient_GetAsync_mF86D8542CF69FC4C218CC5ED9537F322059AD028(L_4, L_7, NULL);
			NullCheck(L_8);
			TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_9;
			L_9 = Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC(L_8, Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE((&V_2), TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0091_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___a_0 = L_11;
			TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_12 = V_2;
			__this->___i_8 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___i_8))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_13 = (&__this->___b_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m37A74E9BA0EDCCAC14CEE1733A9220C1BD5CB788(L_13, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_m37A74E9BA0EDCCAC14CEE1733A9220C1BD5CB788_RuntimeMethod_var);
			goto IL_0271;
		}

IL_0075_1:
		{
			TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_14 = __this->___i_8;
			V_2 = L_14;
			TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* L_15 = (&__this->___i_8);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___a_0 = L_16;
		}

IL_0091_1:
		{
			HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_17;
			L_17 = TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9((&V_2), TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var);
			__this->___g_6 = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___g_6), (void*)L_17);
			HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_18 = __this->___g_6;
			__this->___d_3 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___d_3), (void*)L_18);
			__this->___g_6 = (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___g_6), (void*)(HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL);
			HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_19 = __this->___d_3;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_19, NULL);
			V_4 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)((int32_t)200)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_21 = V_4;
			if (!L_21)
			{
				goto IL_00d3_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_0247;
		}

IL_00d3_1:
		{
			HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_22 = __this->___d_3;
			NullCheck(L_22);
			HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_23;
			L_23 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_22, NULL);
			NullCheck(L_23);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_24;
			L_24 = HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B(L_23, NULL);
			NullCheck(L_24);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_25;
			L_25 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_24, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_5 = L_25;
			bool L_26;
			L_26 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_5), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0138_1;
			}
		}
		{
			int32_t L_27 = 1;
			V_0 = L_27;
			__this->___a_0 = L_27;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_28 = V_5;
			__this->___j_9 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___j_9))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_29 = (&__this->___b_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_mBD83EA67ED2F288C73EE14646CF03CE27A83FE76(L_29, (&V_5), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_Tisah_t8538EAD44FB71063D773723B3813050E036C6A93_mBD83EA67ED2F288C73EE14646CF03CE27A83FE76_RuntimeMethod_var);
			goto IL_0271;
		}

IL_011b_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_30 = __this->___j_9;
			V_5 = L_30;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_31 = (&__this->___j_9);
			il2cpp_codegen_initobj(L_31, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___a_0 = L_32;
		}

IL_0138_1:
		{
			String_t* L_33;
			L_33 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_5), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			__this->___h_7 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___h_7), (void*)L_33);
			String_t* L_34 = __this->___h_7;
			__this->___e_4 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___e_4), (void*)L_34);
			__this->___h_7 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___h_7), (void*)(String_t*)NULL);
			String_t* L_35 = __this->___e_4;
			String_t* L_36 = __this->___e_4;
			NullCheck(L_36);
			int32_t L_37;
			L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
			NullCheck(L_35);
			String_t* L_38;
			L_38 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_35, 1, ((int32_t)il2cpp_codegen_subtract(L_37, 2)), NULL);
			__this->___e_4 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___e_4), (void*)L_38);
			String_t* L_39 = __this->___e_4;
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = L_40;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_39);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42;
			L_42 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_39, L_41, NULL);
			__this->___f_5 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___f_5), (void*)L_42);
			PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* L_43 = __this->___c_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = __this->___f_5;
			NullCheck(L_44);
			int32_t L_45 = 0;
			String_t* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = L_47;
			NullCheck(L_48);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
			NullCheck(L_46);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49;
			L_49 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_46, L_48, 2, NULL);
			NullCheck(L_49);
			int32_t L_50 = 1;
			String_t* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			int32_t L_52;
			L_52 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_51, NULL);
			NullCheck(L_43);
			L_43->___t_19 = L_52;
			PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* L_53 = __this->___c_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = __this->___f_5;
			NullCheck(L_54);
			int32_t L_55 = 1;
			String_t* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = L_57;
			NullCheck(L_58);
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
			NullCheck(L_56);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59;
			L_59 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_56, L_58, 2, NULL);
			NullCheck(L_59);
			int32_t L_60 = 1;
			String_t* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
			int32_t L_62;
			L_62 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_61, NULL);
			NullCheck(L_53);
			L_53->___u_20 = L_62;
			PersistenceStorage_t9EEC23E9481C9580E262AF190A42C84DFD79F155* L_63 = __this->___c_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = __this->___f_5;
			NullCheck(L_64);
			int32_t L_65 = 2;
			String_t* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_68 = L_67;
			NullCheck(L_68);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
			NullCheck(L_66);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69;
			L_69 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_66, L_68, 2, NULL);
			NullCheck(L_69);
			int32_t L_70 = 1;
			String_t* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
			int32_t L_72;
			L_72 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_71, NULL);
			NullCheck(L_63);
			L_63->___s_18 = L_72;
			V_1 = (bool)1;
			goto IL_0247;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0218;
		}
		throw e;
	}

CATCH_0218:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___a_0 = ((int32_t)-2);
		__this->___d_3 = (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_3), (void*)(HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL);
		__this->___e_4 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___e_4), (void*)(String_t*)NULL);
		__this->___f_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f_5), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_73 = (&__this->___b_1);
		Exception_t* L_74 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_73, L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0271;
	}// end catch (depth: 1)

IL_0247:
	{
		__this->___a_0 = ((int32_t)-2);
		__this->___d_3 = (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_3), (void*)(HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL);
		__this->___e_4 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___e_4), (void*)(String_t*)NULL);
		__this->___f_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f_5), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_75 = (&__this->___b_1);
		bool L_76 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_75, L_76, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_0271:
	{
		return;
	}
}
// System.Void Alteruna.Trinity.PersistenceStorage/ah::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ah_SetStateMachine_m58F9BDC05F3F901F96EDAFC4208AD162E42F46B3 (ah_t8538EAD44FB71063D773723B3813050E036C6A93* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Alteruna.Trinity.VersionControl::a(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionControl_a_m26B7FCF07651CC8B421A45ED3A85917C393854C5 (int32_t ___A_00, int32_t ___A_11, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___A_00;
		int32_t L_1 = ___A_11;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)16)))|L_1));
	}
}
// System.UInt16 Alteruna.Trinity.VersionControl::b(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VersionControl_b_mC47AA55A7246D6E351315C6E15D5BDFC0701390F (Guid_t ___A_00, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)1;
		goto IL_0005;
	}

IL_0005:
	{
		uint16_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean Alteruna.Trinity.VersionControl::a(System.Guid,System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionControl_a_m62327A41D4ACA7269BF6331A9933C14D09D925E5 (Guid_t ___A_00, uint16_t ___A_11, uint16_t ___A_22, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Alteruna.Trinity.VersionControl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionControl__cctor_m77856E2A59FECC2B26462CCC2A0E6D747CE376A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_StaticFields*)il2cpp_codegen_static_fields_for(VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_il2cpp_TypeInfo_var))->___CompatibilityVersion_0 = (uint16_t)0;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_StaticFields*)il2cpp_codegen_static_fields_for(VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_il2cpp_TypeInfo_var))->___c_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_StaticFields*)il2cpp_codegen_static_fields_for(VersionControl_t5CE0DD092B24FDEA16B20CE8553AE34F9C24E945_il2cpp_TypeInfo_var))->___c_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t User_get_Index_mF74C24E2BF951D3B7550BCDFB40B8ACB3B7A2F26_inline (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___b_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* User_get_Name_mCF1F743D1BED37BC60D21D36A5B31DDBD967C51E_inline (User_tCD492D0E1258D086A35F27EBA65B073F4D6AEEC3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___a_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_a_m5CD59C4EE04D7C796EED03EEC151B1E0F7FE5C0F_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* ___A_00, const RuntimeMethod* method) 
{
	{
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_0 = ___A_00;
		__this->___c_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t DeviceStatistics_get_MemoryConsumption_m14AB01EE065291B8D5501217CD17858A3FA25C05_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___e_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_NumberOfConnections_mF41DE50462A44676D5A304E69E20D71E09DEC80A_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___f_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_BlockedConnections_mA68744CE0528BF62B85F92F7935A101934E77C00_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___g_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DeviceStatistics_get_CycleProcessingTime_mB909AEA64CEED493AA5556BB6773D25832940AEE_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___i_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DeviceStatistics_get_TargetCycleTime_m3BC04090764C32A58FA40232BEE158BBDE360CA7_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___j_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DeviceStatistics_get_UptimeSeconds_m913B0C08B5A8573B297B7C4DB598A08CE52D4389_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___k_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_DataSentHistory_m99C3CD57C1A32CA1F757A5FC92655478A179754F_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_0 = __this->___m_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_DataReceivedHistory_m2D804C9482D883A1694ABA0DE92716E6C835719A_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_0 = __this->___n_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* DeviceStatistics_get_PeakConnectionsHistory_mDBFEA55921C48A140D40232021B4ECE096C6013F_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		HistoryBuffer_1_t253313E366829FA7F05B9BB71190A2F233FA8923* L_0 = __this->___l_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* DeviceStatistics_get_NetworkStatistics_m96E3A771D119D1A6920FE4FFE68E06F7E4C4BD5B_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* L_0 = __this->___c_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t DeviceStatistics_get_HistoryOffset_m97936C25493B1EB6021EDC5EBAE91B3BB4C2C95A_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___o_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_MemoryConsumption_m2FC962374C7ACEE94CBB44C7B7D10BA718C41E93_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___e_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_NumberOfConnections_mA8E2B6CFBAF730593B8405E6460BD68A768ED737_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___f_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_BlockedConnections_mA472B366ABD6558EFCB1131AA117222CEE20C2AB_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___g_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_CycleProcessingTime_m076774B62DED246FBF7AAC9E1C2738E32248AA73_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___i_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_TargetCycleTime_m106455F8B013E20C292E8DF8DCD5814F5073A5CC_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___j_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_UptimeSeconds_m557FA48430CD63563DF4A5E66661E02E167D6B86_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___k_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeviceStatistics_set_HistoryOffset_mCC38869C5A9094BE265D3BDE9263EE6D3F2BB43B_inline (DeviceStatistics_tF767BF98D75462A1DB3DACE6BC169D26B5BA167F* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___value0;
		__this->___o_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_f_mB494AFDF38F9E46EA6936DD7F598016EDB00180B_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___a_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_TotalKilobytesSent_m47AC164EF5B1E58F4896A6184826BAEB07987B18_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___d_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_c_mF57C7A1E6BEB802CA14FC7B2FC23E10D57167C60_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___d_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_BytesPerSecondSent_m6BA90D5F8155C052CCEAC0A4D31F562B9CD65AE5_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___a_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_PeekLoadSent_m841F13005B8CACCD586359273849ADB1F0171A79_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___e_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_b_m04D68D5ED92F9AD7828FEA45B047BAB6E56A5C01_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___e_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_e_m741057412258A6E2C571BCCA77EF5A980620FE21_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___b_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_TotalKilobytesReceived_mCA20C47378466C5CA2DD2EC2F0C84F7D2E1B0B3D_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___c_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_d_m539BFE4D6EB5E38D300A75411D1F8D52A5B6DCF0_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___c_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_BytesPerSecondReceived_mE95F604E3BD00939600683117255952C3D60838A_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___b_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkStatistics_get_PeekLoadReceived_m147424CD23B19A7184BD405B672F7CF45C62CB95_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___f_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkStatistics_a_mC13445E7C58708E8DE073793BB42467978AE5600_inline (NetworkStatistics_tEAE30B423FDE981EE58483FC61A074BAE1C03F07* __this, uint32_t ___A_00, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___A_00;
		__this->___f_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___base_address_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_address_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___statusCode_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
