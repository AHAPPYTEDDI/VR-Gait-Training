#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
// System.Converter`2<System.Byte,System.SByte>
struct Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58;
// System.Collections.Generic.Dictionary`2<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>
struct Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>
struct KeyCollection_tB7BBBABF1EB71A13F444D616F6B8261D0B1A8A0F;
// System.Collections.Generic.LinkedListNode`1<ArduinoBluetoothAPI.BluetoothDevice>
struct LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160;
// System.Collections.Generic.LinkedListNode`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>
struct LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C;
// System.Collections.Generic.LinkedListNode`1<System.String>
struct LinkedListNode_1_t70D4A955AA9655810242E55A90AE4C1B8EAEBD92;
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>
struct LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791;
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>
struct LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76;
// System.Collections.Generic.LinkedList`1<System.String>
struct LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686;
// System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService>
struct List_1_t358B789ECF7E13934462A57CB614F3AA650F3981;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<ArduinoBluetoothAPI.ICreationListener>
struct List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Action>
struct Segment_t174C78A8427100A895D97B8B30BFC775EEF05F9B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>
struct ValueCollection_t978F90FF1C180136CC4C075D9E474F2347CFDC20;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>[]
struct EntryU5BU5D_t523C0699467D6C0733B9B6860A7C70AA4B71B380;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// ArduinoBluetoothAPI.BluetoothHelperService[]
struct BluetoothHelperServiceU5BU5D_tAA7F331F298A8020E19710532C12675B2DD8110F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ArduinoBluetoothAPI.ICreationListener[]
struct ICreationListenerU5BU5D_t4B9F8D2335B725321A295F0053B6B1651F17F2A2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper
struct AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy
struct AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// ArduinoBluetoothAPI.BluetoothDevice
struct BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE;
// ArduinoBluetoothAPI.BluetoothHelper
struct BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A;
// ArduinoBluetoothAPI.BluetoothHelperCharacteristic
struct BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8;
// ArduinoBluetoothAPI.BluetoothHelperService
struct BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// ArduinoBluetoothAPI.DefaultBluetoothHelper
struct DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// ArduinoBluetoothAPI.ICreationListener
struct ICreationListener_t45E3482DA70E9C02DDA956DE9B16A2B543DCC631;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// ArduinoBluetoothAPI.StreamManager
struct StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C;
// System.String
struct String_t;
// ArduinoBluetoothAPI.Synchronizer
struct Synchronizer_t99B06EF3D8441773407F41D605521082A322100E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c
struct U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F;
// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback
struct AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847;
// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr
struct CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289;
// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager
struct IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944;
// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595;
// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF;
// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0
struct U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126;
// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0
struct U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C;
// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0
struct U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4;
// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotConnectedException
struct BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916;
// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotEnabledException
struct BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6;
// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotReadyException
struct BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49;
// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotSupportedException
struct BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1;
// ArduinoBluetoothAPI.BluetoothHelper/BlueToothPermissionNotGrantedException
struct BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent
struct BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent
struct BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents
struct BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothHelperException
struct BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent
struct BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothListeningMethodIsNotSetException
struct BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents
struct BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C;
// ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent
struct BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11;
// ArduinoBluetoothAPI.BluetoothHelper/CharacteristicNotFoundException
struct CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2;
// ArduinoBluetoothAPI.BluetoothHelper/MethodNotSupportedException
struct MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08;
// ArduinoBluetoothAPI.BluetoothHelper/ServiceNotFoundException
struct ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1;
// ArduinoBluetoothAPI.StreamManager/InvokeDataReceivedEvent
struct InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494;
// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener
struct DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4;
// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener
struct NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948;
// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate
struct byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84;
// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate
struct voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICreationListener_t45E3482DA70E9C02DDA956DE9B16A2B543DCC631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t358B789ECF7E13934462A57CB614F3AA650F3981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01B3749BDB26BFC9161B239A7D3A0383474B92FF;
IL2CPP_EXTERN_C String_t* _stringLiteral0BEEB610B1543CDCE112602F81810E6FFA216F94;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11;
IL2CPP_EXTERN_C String_t* _stringLiteral139DBBAD95D93141F9B38375040E09A096EA3718;
IL2CPP_EXTERN_C String_t* _stringLiteral17C4D8774FB87E085DB940023596C0AAA5A07260;
IL2CPP_EXTERN_C String_t* _stringLiteral18EC7D026E94EC0E2A2F82F674281F2F0B5615CB;
IL2CPP_EXTERN_C String_t* _stringLiteral21D57FDA1A4D833E618621E74CD4F9C33CBF42AE;
IL2CPP_EXTERN_C String_t* _stringLiteral31D2148C8BA0442B8B23E03F487A153405F77DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral378046CDCD278C7E0E695B050A103976C13A5C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral39DEA4CC7CA0F6F05D64424933E9C0069A7A94FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3D595418218E58C3196FC80FCA17D7620DDE4FAF;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral3FFCCF4C8D41843C54891174FD625B59850E11D4;
IL2CPP_EXTERN_C String_t* _stringLiteral44FB7A38E2072F9F69C0308C2A798E81CC868AB4;
IL2CPP_EXTERN_C String_t* _stringLiteral47E9FB555C44870419A1545D69ABB7272FE43024;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA1D53E82BD8552669E4DF13BDF4F7CAAC1E8A0;
IL2CPP_EXTERN_C String_t* _stringLiteral527848B33C275DA369FA980C630608E3BF7C7852;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral59B80E358773B2AC3B95211FCD0E82DD38677331;
IL2CPP_EXTERN_C String_t* _stringLiteral620BA0F93E5976480937E5E5244E0D180B242528;
IL2CPP_EXTERN_C String_t* _stringLiteral6345E5EA9A5E885E9F55C427818AB2726DDDDEBF;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8C90B128A1AFC4AED5AD0647B6D3CE00604855;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED379DEF7CC51C9188FBB01A428C4D92398DD17;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7B544AF00436E4EBD78DE386AEBA2BFEF4A21436;
IL2CPP_EXTERN_C String_t* _stringLiteral81AAD7E74D1BF82BAA84924187B8B994836B5856;
IL2CPP_EXTERN_C String_t* _stringLiteral84A646B138C28267C44DFE45B38AF9C364F4DD28;
IL2CPP_EXTERN_C String_t* _stringLiteral8BBDBEC3BF7920B0A4B3F8E54BAF65B04899430F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F0C2972A0E12806BDD25F10EEAE5E29FF56227A;
IL2CPP_EXTERN_C String_t* _stringLiteral9925210EBA03BBFA796E60D1721FC2EA7D04124D;
IL2CPP_EXTERN_C String_t* _stringLiteralA462BD5FA503E41E25F8369A668912DD6631873E;
IL2CPP_EXTERN_C String_t* _stringLiteralA90F39B6C7D9463C8EE847F04195D71CD0F17E12;
IL2CPP_EXTERN_C String_t* _stringLiteralAE26D9E81FC20496FFB99BF4B7956CB0384E6021;
IL2CPP_EXTERN_C String_t* _stringLiteralAF6F6D9B53AE9628D312C8396CF326F5B1D1ECD0;
IL2CPP_EXTERN_C String_t* _stringLiteralB2BBA8EC1068B95B4A773950D0223AFC3FF5DB5D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFA7F41AA1206FFC1D57C437B2C8F2C4D2F797D;
IL2CPP_EXTERN_C String_t* _stringLiteralBD23C70D352AA602D5491E7C7FCEB52064B117B2;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralC0CF46EA964AC51AC8CC20699B5EA083E8A2D7CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC21AA4F5FE69346E31AFC76EDFE0CD96E3B75776;
IL2CPP_EXTERN_C String_t* _stringLiteralC4278EFDF6A815B99287F9759CF93000C3324794;
IL2CPP_EXTERN_C String_t* _stringLiteralC73EF5A50FC5AF78438F0F6B283D6B84A1A49B5F;
IL2CPP_EXTERN_C String_t* _stringLiteralC86EC5531EBD8B51C4944FF50C7007F5F966250D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8D12C57A2566D19E1FDA84485FDF66D76346DD1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBEF6242DE86DA7DEEB2349414EB53DF54F441AD;
IL2CPP_EXTERN_C String_t* _stringLiteralDE2BA00CAAA5E4D04CDF4B874F4A458AEE9EEB27;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A5FB47B8CC13D728F2FE0BA3835883335CAF69;
IL2CPP_EXTERN_C String_t* _stringLiteralE3392FCFA175E28A175F0456BB85D8A375F33F04;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F7EBA6CC1A85E052E6DC6BA06FC3638934D944;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralED34F69C62E71E46918FB61B2999E0D983CA88C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF200CE29E62C9B8D88777C9C1DFD58AADA5EE777;
IL2CPP_EXTERN_C String_t* _stringLiteralF526759D4641008EF5A7851CE6F73AA945A8FEC3;
IL2CPP_EXTERN_C String_t* _stringLiteralF72077F1998003A75BCDB705C2B597C0BB678729;
IL2CPP_EXTERN_C String_t* _stringLiteralF99E5B8BB587888B66986A5F3E5F335A15D9698E;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB5FCE77D9BCD1B31E051043C348112C11853B04;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_Connect_m2C249EA3FAC8C34C1B291B5D4F04F8A7533A3E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_DataWrapperToList2018_m508E3ED3BE01545F508A7248F059F1260727E005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_DataWrapperToList2019_m3EDDE8D0EEF5F97E28E0C895514EDA7CD76461BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_Disconnect_m460F34F4FEE3D483F829C14C12EA0CD165EB9299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_ReadCharacteristic_m5E94D23BEF6BFAAD2426C568F32FDA6409B959B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_ScanNearbyDevices_m077A7F397640825A3FC1AEBCD500B2B8017CFCE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_SendData_m1B133452369995E02ED2FC3F8DD1C5CD13C59D47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_SendData_m4426D84B147AEE572BEE76BEFA12C6CBFD60EEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_SendData_mE08404EBC0F4C42A77B338B3465B592E9899D1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_StartListening_m98DA4BBD7D1AB254AEC9A7165A5607D289B94A0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_Subscribe_mAD47B067AED919D26E88F4ACE36E168AA0D90CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_Subscribe_mD89546FA61DF2C0173A136FE464FDA70C4881C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_0_m585DAB9DC71AA544BDD4E3BF7631439BE952A232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_1_m8B5D70BF59364658804B126313558C26CA1BB7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_2_m9935B1AACE68E113EC6D2269B93AFD016D06ACEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_3_m9EDD9F98274316A727EE30FD725A72C96C96EB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_4_m58A0CD94A697B9F073F67ABEFB9C64AA03808D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_5_mA47EA76C292BAA06E0C8AE33C50017CA6DA3E9BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_6_m6C231118EA2A33326FA5885BB693302B54669987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_7_m62BBD6B59328F29564555A8CC815EB1B912A516B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_WriteCharacteristic_mCC9F6C9493A82B9F5816EDA1CCD808EAC4E1EA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_getAndroidInstance_mA2987709E5D39833772FD7B005FF5F77438688A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_getBluetoothDevice_mC4F10FAAB7750E7CDBC42EF6731C7EEB80C2B4D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_getGattServices_mCEED72432DD098C24A28B6494AD66F11A2BC70AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBluetoothHelper_getPairedDevicesList_m90066201ED879B8ADB3915A8930FBFA1057A0E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidStreamManagerProxy_StreamManager_OnDataReceived_m04FCBF608C38D48BC3E824BC8207CADA39C5594F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BluetoothHelper_U3CInvokeOnConnectedU3Eb__77_0_m8E9A5EF976BEFDF1AE82B3F6E2328F6A09AAEE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BluetoothHelper_U3CInvokeOnConnectionFailedU3Eb__78_0_mA044A3BF09480C015A8DD0DEFD02E1101EAEB243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BluetoothHelper_U3CInvokeOnDataReceivedU3Eb__76_0_m10CB2F9BEBE4C440FE5B78BC1D50C534D10F377D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_IsEmpty_m4B30FD73F81B0C69353B001DAA6AEA1D6729F673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m69B841E3C29431E9BD6EF04266B6113554A9D59F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m75B9164C285CC81BDFA068E7E1D192A9E77D1735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m33A370A416360F0F7F558C3737520EF8D094A652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5A4B8D4A9B0C82D40DA15721B3B921C93B23A930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3F97D0BDC1419FD4DCE0692BFD85615F4F36904B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFB7A8AF84C1ABFA28C0E4E1A7E89C0765AA81C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC45958BA717A06C63608C259F4CD728B1FA9D528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFA68865778A91264B58DF92CA8BD2CA6AEA114CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSynchronizer_t99B06EF3D8441773407F41D605521082A322100E_mE764895AEC75ACBCCFFDC1BD7F21A337BD096A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m460EC2796E4EEDC2B508DEC1C8F85106EFA9F154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m56CC254AD8FE5A0C086D0EAEC4AEB05B32A3A64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_GetEnumerator_m800A2AC8C6BCAB6AFB6400E19615EDEF59F24D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m7F4D35970757526174E27C83FCC7F10F5B732E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_mF3DBBE1ED62ACED2B9C4092876AC035BCF71C040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8B0A6D40FE8521FA7E7FED397E5427999FB075E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5499CF4587DC51E6FD313ED69A15F84E0C559209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE439D94EC94ED8E683C444FEEDDB5304D124D36A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF27FED532CABB81B6E83530EEF04919AD9BBB49E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSendDataU3Eb__13_0_m6A1FD7E3B6AE0F59DB29053E45ED74744D30999E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass79_0_U3CInvokeOnServiceNotFoundU3Eb__0_m2BA1A5F7EEA716C443A6427E0B8194676F92A4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass80_0_U3CInvokeOnCharacteristicNotFoundU3Eb__0_m90E55CE09AF3F47371A1A810FCBAC9DCC7629FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass81_0_U3CInvokeOnDescriptorNotFoundU3Eb__0_m67D6B0C2E92515F16B944E2AFE626D00A1BA2654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass82_0_U3CInvokeOnCharacteristicChangedU3Eb__0_m835698085B76315C6B6C893353D59EE85AB26791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass89_0_U3CInvokeOnScanEndedU3Eb__0_m330B4DD0CCA1E4887F00690BEBD5CDA2897D34E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3B47C161D47E95B0446B93133B54F160ABF62E90 
{
};

// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t174C78A8427100A895D97B8B30BFC775EEF05F9B* ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t174C78A8427100A895D97B8B30BFC775EEF05F9B* ____head_4;
};

// System.Collections.Generic.Dictionary`2<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>
struct Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t523C0699467D6C0733B9B6860A7C70AA4B71B380* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB7BBBABF1EB71A13F444D616F6B8261D0B1A8A0F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t978F90FF1C180136CC4C075D9E474F2347CFDC20* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.LinkedListNode`1<ArduinoBluetoothAPI.BluetoothDevice>
struct LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* ___item_3;
};

// System.Collections.Generic.LinkedListNode`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>
struct LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___item_3;
};

// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>
struct LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>
struct LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.LinkedList`1<System.String>
struct LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686  : public RuntimeObject
{
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t70D4A955AA9655810242E55A90AE4C1B8EAEBD92* ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_4;
};

// System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService>
struct List_1_t358B789ECF7E13934462A57CB614F3AA650F3981  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BluetoothHelperServiceU5BU5D_tAA7F331F298A8020E19710532C12675B2DD8110F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t358B789ECF7E13934462A57CB614F3AA650F3981_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BluetoothHelperServiceU5BU5D_tAA7F331F298A8020E19710532C12675B2DD8110F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ArduinoBluetoothAPI.ICreationListener>
struct List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ICreationListenerU5BU5D_t4B9F8D2335B725321A295F0053B6B1651F17F2A2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ICreationListenerU5BU5D_t4B9F8D2335B725321A295F0053B6B1651F17F2A2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy
struct AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF  : public RuntimeObject
{
	// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy::androidStreamManager
	IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* ___androidStreamManager_0;
};
struct Il2CppArrayBounds;

// ArduinoBluetoothAPI.BluetoothDevice
struct BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE  : public RuntimeObject
{
	// System.String ArduinoBluetoothAPI.BluetoothDevice::<DeviceName>k__BackingField
	String_t* ___U3CDeviceNameU3Ek__BackingField_0;
	// System.String ArduinoBluetoothAPI.BluetoothDevice::<DeviceAddress>k__BackingField
	String_t* ___U3CDeviceAddressU3Ek__BackingField_1;
	// System.Int32 ArduinoBluetoothAPI.BluetoothDevice::<Rssi>k__BackingField
	int32_t ___U3CRssiU3Ek__BackingField_2;
};

// ArduinoBluetoothAPI.BluetoothHelper
struct BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A  : public RuntimeObject
{
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents ArduinoBluetoothAPI.BluetoothHelper::OnConnected
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___OnConnected_8;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents ArduinoBluetoothAPI.BluetoothHelper::OnConnectionFailed
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___OnConnectionFailed_9;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents ArduinoBluetoothAPI.BluetoothHelper::OnDataReceived
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___OnDataReceived_10;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent ArduinoBluetoothAPI.BluetoothHelper::OnServiceNotFound
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___OnServiceNotFound_11;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent ArduinoBluetoothAPI.BluetoothHelper::OnCharacteristicNotFound
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___OnCharacteristicNotFound_12;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent ArduinoBluetoothAPI.BluetoothHelper::OnDescriptorNotFound
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* ___OnDescriptorNotFound_13;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents ArduinoBluetoothAPI.BluetoothHelper::OnScanEnded
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* ___OnScanEnded_14;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent ArduinoBluetoothAPI.BluetoothHelper::OnCharacteristicChanged
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___OnCharacteristicChanged_15;
	// System.Collections.Generic.Queue`1<System.Byte[]> ArduinoBluetoothAPI.BluetoothHelper::ReceivedData
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* ___ReceivedData_16;
	// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::ble
	bool ___ble_18;
	// UnityEngine.GameObject ArduinoBluetoothAPI.BluetoothHelper::syncronizerObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___syncronizerObj_19;
	// System.String ArduinoBluetoothAPI.BluetoothHelper::str
	String_t* ___str_20;
};

struct BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields
{
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper::bluetoothHelperInstance
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___bluetoothHelperInstance_0;
	// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::SERIAL_COMM
	bool ___SERIAL_COMM_1;
	// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::BLUETOOTH_SIMULATION
	bool ___BLUETOOTH_SIMULATION_2;
	// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::BLE
	bool ___BLE_3;
	// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::ASYNC_EVENTS
	bool ___ASYNC_EVENTS_4;
	// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::BLE_AS_CLIENT
	bool ___BLE_AS_CLIENT_5;
	// System.String ArduinoBluetoothAPI.BluetoothHelper::BLE_SERVER_IP
	String_t* ___BLE_SERVER_IP_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,ArduinoBluetoothAPI.BluetoothHelper> ArduinoBluetoothAPI.BluetoothHelper::instances
	Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E* ___instances_7;
	// System.Collections.Generic.List`1<ArduinoBluetoothAPI.ICreationListener> ArduinoBluetoothAPI.BluetoothHelper::listeners
	List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52* ___listeners_17;
};

// ArduinoBluetoothAPI.BluetoothHelperCharacteristic
struct BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8  : public RuntimeObject
{
	// System.String ArduinoBluetoothAPI.BluetoothHelperCharacteristic::name
	String_t* ___name_0;
	// System.String ArduinoBluetoothAPI.BluetoothHelperCharacteristic::service
	String_t* ___service_1;
	// System.Collections.Generic.LinkedList`1<System.String> ArduinoBluetoothAPI.BluetoothHelperCharacteristic::descriptors
	LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* ___descriptors_2;
};

// ArduinoBluetoothAPI.BluetoothHelperService
struct BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36  : public RuntimeObject
{
	// System.String ArduinoBluetoothAPI.BluetoothHelperService::name
	String_t* ___name_0;
	// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic> ArduinoBluetoothAPI.BluetoothHelperService::characteristics
	LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* ___characteristics_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// ArduinoBluetoothAPI.StreamManager
struct StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C  : public RuntimeObject
{
	// ArduinoBluetoothAPI.StreamManager/InvokeDataReceivedEvent ArduinoBluetoothAPI.StreamManager::OnDataReceived
	InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* ___OnDataReceived_0;
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

// ArduinoBluetoothAPI.Utils
struct Utils_t5151DB914F4BE69566B29BFFAA893E3FC86D0E8B  : public RuntimeObject
{
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

// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c
struct U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F  : public RuntimeObject
{
};

struct U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields
{
	// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c::<>9
	U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F* ___U3CU3E9_0;
	// System.Converter`2<System.Byte,System.SByte> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c::<>9__13_0
	Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* ___U3CU3E9__13_0_1;
};

// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595  : public RuntimeObject
{
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0::<>4__this
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___U3CU3E4__this_0;
	// System.String ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0::service
	String_t* ___service_1;
};

// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF  : public RuntimeObject
{
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0::<>4__this
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___U3CU3E4__this_0;
	// System.String ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0::service
	String_t* ___service_1;
	// System.String ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0::characteristic
	String_t* ___characteristic_2;
};

// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0
struct U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126  : public RuntimeObject
{
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::<>4__this
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___U3CU3E4__this_0;
	// System.String ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::service
	String_t* ___service_1;
	// System.String ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::characteristic
	String_t* ___characteristic_2;
	// System.String ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::descriptor
	String_t* ___descriptor_3;
};

// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0
struct U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C  : public RuntimeObject
{
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0::<>4__this
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___U3CU3E4__this_0;
	// System.Byte[] ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0::value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value_1;
	// ArduinoBluetoothAPI.BluetoothHelperCharacteristic ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0::characteristic
	BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic_2;
};

// ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0
struct U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4  : public RuntimeObject
{
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0::<>4__this
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___U3CU3E4__this_0;
	// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice> ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0::nearbyDevices
	LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices_1;
};

// System.Collections.Generic.LinkedList`1/Enumerator<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>
struct Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.List`1/Enumerator<ArduinoBluetoothAPI.ICreationListener>
struct Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	RuntimeObject* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.LinkedList`1/Enumerator<System.String>
struct Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_list
	LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* ____list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::_node
	LinkedListNode_1_t70D4A955AA9655810242E55A90AE4C1B8EAEBD92* ____node_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.LinkedList`1/Enumerator::_current
	String_t* ____current_3;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::_index
	int32_t ____index_4;
};

// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper
struct AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6  : public BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A
{
	// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::callBackInterface
	AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* ___callBackInterface_21;
	// UnityEngine.AndroidJavaObject ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::bluetoothHelper
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bluetoothHelper_22;
};

struct AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields
{
	// System.Boolean ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::vChecked
	bool ___vChecked_23;
	// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::DataWrapperToList
	CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* ___DataWrapperToList_24;
	// System.Boolean ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::isNew
	bool ___isNew_25;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// ArduinoBluetoothAPI.DefaultBluetoothHelper
struct DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28  : public BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A
{
	// System.Boolean ArduinoBluetoothAPI.DefaultBluetoothHelper::is_connected
	bool ___is_connected_21;
	// System.String ArduinoBluetoothAPI.DefaultBluetoothHelper::deviceName
	String_t* ___deviceName_22;
	// System.String ArduinoBluetoothAPI.DefaultBluetoothHelper::deviceAddress
	String_t* ___deviceAddress_23;
	// System.Int32 ArduinoBluetoothAPI.DefaultBluetoothHelper::id
	int32_t ___id_24;
};

struct DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_StaticFields
{
	// System.Int32 ArduinoBluetoothAPI.DefaultBluetoothHelper::counter
	int32_t ___counter_25;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};

// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD  : public Exception_t
{
	// System.String UnityEngine.AndroidJavaException::mJavaStackTrace
	String_t* ___mJavaStackTrace_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback
struct AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onDataReceived
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* ___onDataReceived_4;
	// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onScanEnded
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* ___onScanEnded_5;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onConnected
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___onConnected_6;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onConnectionFailed
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___onConnectionFailed_7;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onServiceNotFound
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___onServiceNotFound_8;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onCharacteristicNotFound
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___onCharacteristicNotFound_9;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onDescriptorNotFound
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* ___onDescriptorNotFound_10;
	// ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::onCharacteristicChanged
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___onCharacteristicChanged_11;
	// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::helper
	AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* ___helper_12;
};

// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager
struct IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::_handleReceivedData
	voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* ____handleReceivedData_4;
	// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::_formatDataToSend
	byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* ____formatDataToSend_5;
	// UnityEngine.AndroidJavaObject ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::listener
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___listener_6;
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothHelperException
struct BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C  : public Exception_t
{
};

// System.Converter`2<System.Byte,System.SByte>
struct Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr
struct CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotConnectedException
struct BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotEnabledException
struct BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotReadyException
struct BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotSupportedException
struct BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BlueToothPermissionNotGrantedException
struct BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent
struct BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent
struct BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents
struct BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent
struct BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothListeningMethodIsNotSetException
struct BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents
struct BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent
struct BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.BluetoothHelper/CharacteristicNotFoundException
struct CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/MethodNotSupportedException
struct MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.BluetoothHelper/ServiceNotFoundException
struct ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1  : public BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C
{
};

// ArduinoBluetoothAPI.StreamManager/InvokeDataReceivedEvent
struct InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener
struct DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener
struct NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate
struct byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84  : public MulticastDelegate_t
{
};

// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate
struct voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ArduinoBluetoothAPI.Synchronizer
struct Synchronizer_t99B06EF3D8441773407F41D605521082A322100E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action ArduinoBluetoothAPI.Synchronizer::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_5;
	// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.Synchronizer::helper
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper_6;
};

struct Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields
{
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> ArduinoBluetoothAPI.Synchronizer::RunOnMainThread
	ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* ___RunOnMainThread_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_t293BB098D459DDAE6A26977D0731A997186D1D4C* LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_get_IsEmpty_m216D5A1F071C68F7E44D8AB0782CD898F544BF27_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___result0, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Converter`2<System.Byte,System.SByte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m5841BCF52B4FCD2CCF8935BC29FF2E916F37B8A5_gshared (Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TOutput[] System.Array::ConvertAll<System.Byte,System.SByte>(TInput[],System.Converter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* ___converter1, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22 LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared (LinkedList_1_t49DC5CF34D4D642E6417F1245CDEC26A32F60C76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothDevice::set_DeviceAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDevice_set_DeviceAddress_mCD4ED117A7E5C6E89AAB56D4F81D0F937577C627_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothDevice::set_DeviceName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDevice_set_DeviceName_m9871BC8F4F488EC2E525B4CBA218D607FC0FDC96_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothDevice::set_Rssi(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDevice_set_Rssi_m4FA15298FAFE7A9D1AEA4F886616B621247C7DDA_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String ArduinoBluetoothAPI.BluetoothDevice::get_DeviceAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothDevice_get_DeviceAddress_mD8FC9CBF9DE4933017B42B472D08124BDD3CC1B9_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String ArduinoBluetoothAPI.BluetoothDevice::get_DeviceName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothDevice_get_DeviceName_m9401C4BA027FE2F1E2FA4D279C74CA5015698150_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_inline (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor()
inline void Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845 (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<ArduinoBluetoothAPI.Synchronizer>()
inline Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* GameObject_AddComponent_TisSynchronizer_t99B06EF3D8441773407F41D605521082A322100E_mE764895AEC75ACBCCFFDC1BD7F21A337BD096A08 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUI_TextField_mC04648FB72A5E899E579DC2EBB1E03F0EB4D3BE6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(T)
inline void Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnDataReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnDataReceived_mF18FB3D9D7E954B47A34A11193E44EAE0A08BD74 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) ;
// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper::GetNewInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* BluetoothHelper_GetNewInstance_m0F30C1E96CC2762B3F43526901DEFED03D6DAE64 (String_t* ___deviceName0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper__ctor_mCBD79B0FFBE62F42A6B31C1DABADA0486FE3CB0D (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper__ctor_m5447AA61BA6B528927DB2B50434F46C7D7A4B629 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m75B9164C285CC81BDFA068E7E1D192A9E77D1735 (Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E* __this, int32_t ___key0, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E*, int32_t, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ArduinoBluetoothAPI.ICreationListener>::GetEnumerator()
inline Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE List_1_GetEnumerator_m5499CF4587DC51E6FD313ED69A15F84E0C559209 (List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE (*) (List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ArduinoBluetoothAPI.ICreationListener>::Dispose()
inline void Enumerator_Dispose_m33A370A416360F0F7F558C3737520EF8D094A652 (Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ArduinoBluetoothAPI.ICreationListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mFA68865778A91264B58DF92CA8BD2CA6AEA114CB_inline (Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ArduinoBluetoothAPI.ICreationListener>::MoveNext()
inline bool Enumerator_MoveNext_m3F97D0BDC1419FD4DCE0692BFD85615F4F36904B (Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothHelper_get_Available_m2B1E8044CD06627C97FE3379941E887F88AD0D04 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0 (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::Enqueue(T)
inline void ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7 (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared)(__this, ___item0, method);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents::Invoke(ArduinoBluetoothAPI.BluetoothHelper)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0__ctor_mC8D3D0941173D0B9FECBB6AACF21464F71588E68 (U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_inline (BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0__ctor_mBA4112622443A0FE87CA341AC10A52EE8459FB5D (U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_inline (BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass81_0__ctor_m1D91743FD5D70EA417CD95B4CD7FA046DC3F91DD (U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.String,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_inline (BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0__ctor_mE99986A73BF1CD4C4B667629C1D2E47A8772AB91 (U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.Byte[],ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_inline (BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0__ctor_mA053E04ABF863D3638F42038F90631651E6BD379 (U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_inline (BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ArduinoBluetoothAPI.BluetoothHelper>::.ctor()
inline void Dictionary_2__ctor_m69B841E3C29431E9BD6EF04266B6113554A9D59F (Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ArduinoBluetoothAPI.ICreationListener>::.ctor()
inline void List_1__ctor_mE439D94EC94ED8E683C444FEEDDB5304D124D36A (List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothHelperException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5 (BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<System.String>::.ctor()
inline void LinkedList_1__ctor_mF3DBBE1ED62ACED2B9C4092876AC035BCF71C040 (LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper__ctor_mB46354A34938D7859F962EFB627DE02AE6E62CAD (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper::DrawGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_DrawGUI_m41D52A458E04561C7137F15CCFDB75E29EA26430 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothDevice::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDevice__ctor_m7BD4AB998CF3EC5D3058BF75AC75ACFC91E45CB6 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___deviceName0, String_t* ___deviceAddress1, int32_t ___rssi2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>::.ctor()
inline void LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5 (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>::.ctor()
inline void LinkedList_1__ctor_m7F4D35970757526174E27C83FCC7F10F5B732E98 (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF*, const RuntimeMethod*))LinkedList_1__ctor_m2732A2EC5597469086D48C79A12B3563DEA501C5_gshared)(__this, method);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelperCharacteristic::setService(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothHelperCharacteristic_setService_mE5C5312113973A3505CAD666150826A54B7E58E2_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, String_t* ___service0, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>::AddLast(T)
inline LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* LinkedList_1_AddLast_m56CC254AD8FE5A0C086D0EAEC4AEB05B32A3A64A (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* (*) (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___value0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_IsEmpty()
inline bool ConcurrentQueue_1_get_IsEmpty_m4B30FD73F81B0C69353B001DAA6AEA1D6729F673 (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, const RuntimeMethod*))ConcurrentQueue_1_get_IsEmpty_m216D5A1F071C68F7E44D8AB0782CD898F544BF27_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryDequeue(T&)
inline bool ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared)(__this, ___result0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::.ctor()
inline void ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374 (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, const RuntimeMethod*))ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared)(__this, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.String ArduinoBluetoothAPI.BluetoothHelperCharacteristic::getName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothHelperCharacteristic_getName_m98D5C3DD088FA90A8B3C8DF8B44D8A94B600A929_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) ;
// System.Boolean ArduinoBluetoothAPI.Utils::IsBlank(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsBlank_mE528F66343F0C09AD203D5DF11ADB455581D8D3C (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String ArduinoBluetoothAPI.BluetoothHelperCharacteristic::getService()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothHelperCharacteristic_getService_mB79C760324898850B7227C0B8A397B4D2A675040_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamManager__ctor_m3F92DE68DD8EE80E02B59C7C06C1222FB6B58739 (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void byteByteDelegate__ctor_m305FFEB3967803D96CC8FA5C64E20DBBC08D0C04 (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voidByteDelegate__ctor_m38EEDF2CDEF11A7B4812E94020E050F9A88D9E59 (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.StreamManager/InvokeDataReceivedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokeDataReceivedEvent__ctor_mAC23F2A4F60B4A4EDC6EC6B81AB52E07A224DB0B (InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_inline (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) ;
// System.Byte[] ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_inline (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getAndroidInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_getAndroidInstance_mA2987709E5D39833772FD7B005FF5F77438688A5 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m9BB26D534FA4E6E2D32DCA99AB95BDD056CBB7E4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharWrapperToListPtr__ctor_mFB53D072FFE096B65450312DBC802289E4B391AA (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::.ctor(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback__ctor_m12C81552D0BAE988FA2A30C08C64DAD4FA39AD57 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* ___helper0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedListener__ctor_m32FD588395FC03A8F8E73C91861293C9A56C21FF (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onDataReceived(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onDataReceived_mD59235474AC44C6334080539593DD45E6369650F (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearByDevicesScanListener__ctor_mC7CCA74168EC07B51CC5335B9D96B180EDF1DA26 (NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onScanEnded(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onScanEnded_m544AA07CD42D86D085FF59CDF31A5D0130098911 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothEvents__ctor_m61F7A88FC202FAC15A597F8AB84F3F0C2A630A12 (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onConnected(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onConnected_m422C709753C744F327116A0A1A716EAA0EF7369B (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onConnectionFailed(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onConnectionFailed_m6629211AA26AD47FBFE405EF3ACA27B7501885DE (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothServiceEvent__ctor_mE057B64A5A950826611FFA959425E713F85F76D2 (BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onServiceNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onServiceNotFound_m2EAA209CBE43E8665658EBAD5F4450349E5790C9 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothCharacteristicEvent__ctor_m9DEB2A0A49F73E432113378DB387101DB13C0FBA (BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onCharacteristicNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onCharacteristicNotFound_mB33DB9AB9574CEED5C3C817F8680B0A709FACA2E (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDescriptorEvent__ctor_mFBDE1B7D4C02F4D1711B11B998988E081A06BEFD (BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onDescriptorNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onDescriptorNotFound_m011FD671585F6A02767153C59EECB5CF76BD4C9F (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEDataEvent__ctor_m00FE4933EAD939780C7BF977426681041BB630CC (BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onCharacteristicChanged(ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onCharacteristicChanged_m646E0F440C3BDD83DA363A17787BE2C334B161B6 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___value0, const RuntimeMethod* method) ;
// System.Exception ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::findException(UnityEngine.AndroidJavaException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* ___ex0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Converter`2<System.Byte,System.SByte>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m5841BCF52B4FCD2CCF8935BC29FF2E916F37B8A5 (Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58*, RuntimeObject*, intptr_t, const RuntimeMethod*))Converter_2__ctor_m5841BCF52B4FCD2CCF8935BC29FF2E916F37B8A5_gshared)(__this, ___object0, ___method1, method);
}
// TOutput[] System.Array::ConvertAll<System.Byte,System.SByte>(TInput[],System.Converter`2<TInput,TOutput>)
inline SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* ___converter1, const RuntimeMethod* method)
{
	return ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58*, const RuntimeMethod*))Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A_gshared)(___array0, ___converter1, method);
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::SendData(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_SendData_m4426D84B147AEE572BEE76BEFA12C6CBFD60EEBE (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy::.ctor(ArduinoBluetoothAPI.StreamManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidStreamManagerProxy__ctor_m57A15B7CC63CA55F4E3FC72FF9E71D76AD073298 (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* __this, StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* ___streamManager0, const RuntimeMethod* method) ;
// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy::getIStreamManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* AndroidStreamManagerProxy_getIStreamManager_m20232F894D968B1DC6CDA65898D244A9FE8D542C_inline (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotEnabledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotEnabledException__ctor_mE3B1A6CE1CE690DD9735EAD6E002CB84A48E00A1 (BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotSupportedException__ctor_mDE4CAF7330C9CEA50CDF9FEC0A2A23569B0EDFE2 (BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotConnectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotConnectedException__ctor_m18CFFB79E12C258AC9510802C382A83AC0338437 (BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotReadyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotReadyException__ctor_m2D3A61E04F5EEA056211EE179AAEE9D8F491851C (BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothPermissionNotGrantedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothPermissionNotGrantedException__ctor_mB07F7D1629EB6FB86C57CDF3A88968F3EEF4A300 (BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothListeningMethodIsNotSetException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothListeningMethodIsNotSetException__ctor_m9CBFE0865AAE48817143E9060EC2F8433665776D (BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/ServiceNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceNotFoundException__ctor_mF7CDD811C186088D24C092E3D6B4F0EDF0C30021 (ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/CharacteristicNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicNotFoundException__ctor_mD63D5FDCF903F641EB8D70D1E3F1419190EF2C7E (CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2* __this, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper/MethodNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodNotSupportedException__ctor_m2591631D7960E7C9C1CD129DA7E6D1B7DB032592 (MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic> ArduinoBluetoothAPI.BluetoothHelperService::getCharacteristics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* BluetoothHelperService_getCharacteristics_m176C3C3835EAC099CB44FC3139447892B4F19B88_inline (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>::GetEnumerator()
inline Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94 (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 (*) (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>::Dispose()
inline void Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627 (Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
// T System.Collections.Generic.LinkedList`1/Enumerator<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>::get_Current()
inline BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_inline (Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20* __this, const RuntimeMethod* method)
{
	return ((  BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* (*) (Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
// System.Void ArduinoBluetoothAPI.Utils::ValidateCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<ArduinoBluetoothAPI.BluetoothHelperCharacteristic>::MoveNext()
inline bool Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9 (Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
// UnityEngine.AndroidJavaObject ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::GetAndroidObject(ArduinoBluetoothAPI.BluetoothHelperService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidBluetoothHelper_GetAndroidObject_m3711607549A6B47EA68F64BBD56A12C543D0A58F (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* ___service0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::GetAndroidObject(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidBluetoothHelper_GetAndroidObject_m4C8B33FB25391D447B807AC5269CD4523F5616AC (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
inline int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte>(System.String,System.Object[])
inline uint8_t AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String ArduinoBluetoothAPI.BluetoothHelperService::getName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothHelperService_getName_m3FA06B4F8CD7D5E1A9CAC294BE7A717821A9CC01_inline (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1<System.String> ArduinoBluetoothAPI.BluetoothHelperCharacteristic::getDescriptors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* BluetoothHelperCharacteristic_getDescriptors_mBCAE255E2C1BBCF87C61EC0EEE634E3CE6D13BB8_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.String>::GetEnumerator()
inline Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012 LinkedList_1_GetEnumerator_m800A2AC8C6BCAB6AFB6400E19615EDEF59F24D39 (LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012 (*) (LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686*, const RuntimeMethod*))LinkedList_1_GetEnumerator_m2522814971CB421FDF996D386A650A3F8FA0E30C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m5A4B8D4A9B0C82D40DA15721B3B921C93B23A930 (Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012*, const RuntimeMethod*))Enumerator_Dispose_m9E60B472E2E61202E9CFBED3DA607374973EA744_gshared)(__this, method);
}
// T System.Collections.Generic.LinkedList`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_mC45958BA717A06C63608C259F4CD728B1FA9D528_inline (Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012*, const RuntimeMethod*))Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mFB7A8AF84C1ABFA28C0E4E1A7E89C0765AA81C90 (Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012*, const RuntimeMethod*))Enumerator_MoveNext_m5148B3CE498B6E84B883D3EB4A7A080238A2609D_gshared)(__this, method);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelperCharacteristic::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperCharacteristic__ctor_mC1CFFED5328A02877AF502530441689359950451 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelperService::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperService__ctor_m80A0E268FACE194B04092A6CD867C83563049FD3 (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, String_t* ___name0, const RuntimeMethod* method) ;
// ArduinoBluetoothAPI.BluetoothHelperCharacteristic ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::FromJavaObject(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* AndroidBluetoothHelper_FromJavaObject_m15E1DC60F5EA41F5761A99D22C9E2AACD240283E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelperService::addCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperService_addCharacteristic_m720742F44EB3807A2268BB3F1CD3CE0A8D61A252 (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService>::.ctor()
inline void List_1__ctor_mF27FED532CABB81B6E83530EEF04919AD9BBB49E (List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t358B789ECF7E13934462A57CB614F3AA650F3981*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// ArduinoBluetoothAPI.BluetoothHelperService ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::ServiceFromJavaObject(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* AndroidBluetoothHelper_ServiceFromJavaObject_m0F705D9CEB92AC9266572FAB460725AE81652A76 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService>::Add(T)
inline void List_1_Add_m8B0A6D40FE8521FA7E7FED397E5427999FB075E4_inline (List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* __this, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t358B789ECF7E13934462A57CB614F3AA650F3981*, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>::AddLast(T)
inline LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160* LinkedList_1_AddLast_m460EC2796E4EEDC2B508DEC1C8F85106EFA9F154 (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* __this, BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160* (*) (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE*, const RuntimeMethod*))LinkedList_1_AddLast_mF5239C871EADC44D51C6B621592A9CAC43449A2E_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::FromJavaBluetoothDevicesList(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* AndroidBluetoothHelper_FromJavaBluetoothDevicesList_m7521B1EE307DF8AABF215627CE2C088DC80AD372 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___list0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::ServiceListFromJavaObject(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* AndroidBluetoothHelper_ServiceListFromJavaObject_mA749E82B471F3B40BF0AE437346CE117A47F612B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnScanEnded(System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnScanEnded_m6F1FBB8DC93A1F9EF952302B00D32F5A47E8A681 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr::Invoke(UnityEngine.AndroidJavaObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_inline (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_inline (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener::Invoke(System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_inline (NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method) ;
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m291959AD22CE5ECCF78555C39B22293B0B578C31 (U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F* __this, const RuntimeMethod* method) ;
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
// System.Void ArduinoBluetoothAPI.BluetoothDevice::set_DeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDevice_set_DeviceName_m9871BC8F4F488EC2E525B4CBA218D607FC0FDC96 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeviceNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String ArduinoBluetoothAPI.BluetoothDevice::get_DeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothDevice_get_DeviceName_m9401C4BA027FE2F1E2FA4D279C74CA5015698150 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeviceNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothDevice::set_DeviceAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDevice_set_DeviceAddress_mCD4ED117A7E5C6E89AAB56D4F81D0F937577C627 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeviceAddressU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceAddressU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String ArduinoBluetoothAPI.BluetoothDevice::get_DeviceAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothDevice_get_DeviceAddress_mD8FC9CBF9DE4933017B42B472D08124BDD3CC1B9 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeviceAddressU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothDevice::set_Rssi(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDevice_set_Rssi_m4FA15298FAFE7A9D1AEA4F886616B621247C7DDA (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CRssiU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 ArduinoBluetoothAPI.BluetoothDevice::get_Rssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BluetoothDevice_get_Rssi_m4887F2AF8F32C0588CEB7291B40C94E3D5C76BC8 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRssiU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothDevice::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDevice__ctor_m7BD4AB998CF3EC5D3058BF75AC75ACFC91E45CB6 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___deviceName0, String_t* ___deviceAddress1, int32_t ___rssi2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___deviceAddress1;
		BluetoothDevice_set_DeviceAddress_mCD4ED117A7E5C6E89AAB56D4F81D0F937577C627_inline(__this, L_0, NULL);
		String_t* L_1 = ___deviceName0;
		BluetoothDevice_set_DeviceName_m9871BC8F4F488EC2E525B4CBA218D607FC0FDC96_inline(__this, L_1, NULL);
		int32_t L_2 = ___rssi2;
		BluetoothDevice_set_Rssi_m4FA15298FAFE7A9D1AEA4F886616B621247C7DDA_inline(__this, L_2, NULL);
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.BluetoothDevice::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothDevice_Equals_m8E3B5A1FEC0F5E66DFE273C52661C66F9737C1F7 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE*)IsInstClass((RuntimeObject*)L_0, BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE*)CastclassClass((RuntimeObject*)L_1, BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var));
		String_t* L_2;
		L_2 = BluetoothDevice_get_DeviceAddress_mD8FC9CBF9DE4933017B42B472D08124BDD3CC1B9_inline(__this, NULL);
		BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = BluetoothDevice_get_DeviceAddress_mD8FC9CBF9DE4933017B42B472D08124BDD3CC1B9_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6;
		L_6 = BluetoothDevice_get_DeviceName_m9401C4BA027FE2F1E2FA4D279C74CA5015698150_inline(__this, NULL);
		BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = BluetoothDevice_get_DeviceName_m9401C4BA027FE2F1E2FA4D279C74CA5015698150_inline(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_8, NULL);
		return L_9;
	}

IL_0034:
	{
		return (bool)0;
	}

IL_0036:
	{
		RuntimeObject* L_10 = ___obj0;
		bool L_11;
		L_11 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_10, NULL);
		return L_11;
	}
}
// System.Int32 ArduinoBluetoothAPI.BluetoothDevice::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BluetoothDevice_GetHashCode_mF6B189CC49539D991AF7B5D20E70C9583E6DADD7 (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = BluetoothDevice_get_DeviceName_m9401C4BA027FE2F1E2FA4D279C74CA5015698150_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		String_t* L_2;
		L_2 = BluetoothDevice_get_DeviceAddress_mD8FC9CBF9DE4933017B42B472D08124BDD3CC1B9_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)il2cpp_codegen_add(L_1, L_3));
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnConnected(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnConnected_m3A4CE3231D3A0E933334696E5646ECAF55743A36 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnected_8;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___OnConnected_8);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnConnected(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnConnected_mC403C05232D74FA83E47DE124B1C5FD4A190C017 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnected_8;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___OnConnected_8);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnConnectionFailed(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnConnectionFailed_m594418A525274C8318D7292AD7C59CB1633F59FA (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnectionFailed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___OnConnectionFailed_9);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnConnectionFailed(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnConnectionFailed_m3674F76A582014189B307F4D049D727E84C3478C (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnectionFailed_9;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___OnConnectionFailed_9);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnDataReceived(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnDataReceived_mC68562D6072660551173DE056CA9A2BC029A6BF2 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnDataReceived_10;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___OnDataReceived_10);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnDataReceived(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnDataReceived_mBE9CE7B8D10987A86ABE101806C7788C4C611183 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnDataReceived_10;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___OnDataReceived_10);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnServiceNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnServiceNotFound_m4EB298080BD11E12D9C17E0F8EAB9DBFEE38663E (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_0 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_1 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_2 = NULL;
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_0 = __this->___OnServiceNotFound_11;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_1 = V_0;
		V_1 = L_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_2 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)CastclassSealed((RuntimeObject*)L_4, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var));
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11** L_5 = (&__this->___OnServiceNotFound_11);
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_6 = V_2;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_7 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_9 = V_0;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_9) == ((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnServiceNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnServiceNotFound_m2214C29ECAE41C49D599A1ACBDF3924AFAA3353B (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_0 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_1 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_2 = NULL;
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_0 = __this->___OnServiceNotFound_11;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_1 = V_0;
		V_1 = L_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_2 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)CastclassSealed((RuntimeObject*)L_4, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var));
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11** L_5 = (&__this->___OnServiceNotFound_11);
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_6 = V_2;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_7 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_9 = V_0;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_9) == ((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnCharacteristicNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnCharacteristicNotFound_m181C17000651BBAD9740DE5A6C6B6831B234D4A5 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_0 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_1 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_2 = NULL;
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_0 = __this->___OnCharacteristicNotFound_12;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_1 = V_0;
		V_1 = L_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_2 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)CastclassSealed((RuntimeObject*)L_4, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var));
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283** L_5 = (&__this->___OnCharacteristicNotFound_12);
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_6 = V_2;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_7 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_9 = V_0;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_9) == ((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnCharacteristicNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnCharacteristicNotFound_mBC9FAD9DFB3873D7FF1BB4056370B8A6DE43F4E3 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_0 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_1 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_2 = NULL;
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_0 = __this->___OnCharacteristicNotFound_12;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_1 = V_0;
		V_1 = L_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_2 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)CastclassSealed((RuntimeObject*)L_4, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var));
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283** L_5 = (&__this->___OnCharacteristicNotFound_12);
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_6 = V_2;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_7 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_9 = V_0;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_9) == ((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnScanEnded(ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnScanEnded_mB58D6382A4CB3A20B9FF4A81B84BF51057C35121 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* V_0 = NULL;
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* V_1 = NULL;
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* V_2 = NULL;
	{
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_0 = __this->___OnScanEnded_14;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_1 = V_0;
		V_1 = L_1;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_2 = V_1;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*)CastclassSealed((RuntimeObject*)L_4, BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C_il2cpp_TypeInfo_var));
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C** L_5 = (&__this->___OnScanEnded_14);
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_6 = V_2;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_7 = V_1;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_9 = V_0;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*)L_9) == ((RuntimeObject*)(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnScanEnded(ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnScanEnded_mDF73F83C10205D20B31A7436BDCF51EAEA860DB0 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* V_0 = NULL;
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* V_1 = NULL;
	BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* V_2 = NULL;
	{
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_0 = __this->___OnScanEnded_14;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_1 = V_0;
		V_1 = L_1;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_2 = V_1;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*)CastclassSealed((RuntimeObject*)L_4, BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C_il2cpp_TypeInfo_var));
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C** L_5 = (&__this->___OnScanEnded_14);
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_6 = V_2;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_7 = V_1;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_9 = V_0;
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*)L_9) == ((RuntimeObject*)(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::add_OnCharacteristicChanged(ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_add_OnCharacteristicChanged_m9033271CA3D5C6C83B04BEABA6E16C5CFCB92F09 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_0 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_1 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_2 = NULL;
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_0 = __this->___OnCharacteristicChanged_15;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_1 = V_0;
		V_1 = L_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_2 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)CastclassSealed((RuntimeObject*)L_4, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var));
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7** L_5 = (&__this->___OnCharacteristicChanged_15);
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_6 = V_2;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_7 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_9 = V_0;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_9) == ((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::remove_OnCharacteristicChanged(ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_remove_OnCharacteristicChanged_m10FDCCCB36E94862B7F746F5CF12B3EDB4406382 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_0 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_1 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_2 = NULL;
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_0 = __this->___OnCharacteristicChanged_15;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_1 = V_0;
		V_1 = L_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_2 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)CastclassSealed((RuntimeObject*)L_4, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var));
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7** L_5 = (&__this->___OnCharacteristicChanged_15);
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_6 = V_2;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_7 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_9 = V_0;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_9) == ((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothHelper_get_Available_m2B1E8044CD06627C97FE3379941E887F88AD0D04 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_0 = __this->___ReceivedData_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_inline(L_0, Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper__ctor_mB46354A34938D7859F962EFB627DE02AE6E62CAD (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSynchronizer_t99B06EF3D8441773407F41D605521082A322100E_mE764895AEC75ACBCCFFDC1BD7F21A337BD096A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA90F39B6C7D9463C8EE847F04195D71CD0F17E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_0 = (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*)il2cpp_codegen_object_new(Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845(L_0, Queue_1__ctor_m812A3A1FD43A1EA0186F6E128D4831D567728845_RuntimeMethod_var);
		__this->___ReceivedData_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ReceivedData_16), (void*)L_0);
		__this->___str_20 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___str_20), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralA90F39B6C7D9463C8EE847F04195D71CD0F17E12, NULL);
		__this->___syncronizerObj_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___syncronizerObj_19), (void*)L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___syncronizerObj_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteralA90F39B6C7D9463C8EE847F04195D71CD0F17E12, NULL);
		__this->___syncronizerObj_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___syncronizerObj_19), (void*)L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___syncronizerObj_19;
		NullCheck(L_5);
		Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* L_6;
		L_6 = GameObject_AddComponent_TisSynchronizer_t99B06EF3D8441773407F41D605521082A322100E_mE764895AEC75ACBCCFFDC1BD7F21A337BD096A08(L_5, GameObject_AddComponent_TisSynchronizer_t99B06EF3D8441773407F41D605521082A322100E_mE764895AEC75ACBCCFFDC1BD7F21A337BD096A08_RuntimeMethod_var);
	}

IL_0056:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_7 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_3;
		__this->___ble_18 = L_7;
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::setTerminatorBasedStream(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_setTerminatorBasedStream_mE5BA85A0B29010B9B878356FF5210F96989D7055 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___str0;
		VirtualActionInvoker2< String_t*, bool >::Invoke(5 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::setTerminatorBasedStream(System.String,System.Boolean) */, __this, L_0, (bool)1);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::DrawGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_DrawGUI_m41D52A458E04561C7137F15CCFDB75E29EA26430 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC86EC5531EBD8B51C4944FF50C7007F5F966250D);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), (0.0f), (0.0f), ((float)((int32_t)(L_0/6))), ((float)((int32_t)(L_1/((int32_t)15)))), /*hidden argument*/NULL);
		String_t* L_3 = __this->___str_20;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = GUI_TextField_mC04648FB72A5E899E579DC2EBB1E03F0EB4D3BE6(L_2, L_3, NULL);
		__this->___str_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___str_20), (void*)L_4);
		int32_t L_5;
		L_5 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)((int32_t)il2cpp_codegen_add(((int32_t)(L_5/6)), ((int32_t)20)))), (0.0f), ((float)((int32_t)(L_6/((int32_t)15)))), ((float)((int32_t)(L_7/((int32_t)15)))), /*hidden argument*/NULL);
		bool L_9;
		L_9 = GUI_Button_m92B7A836FB5463F20951B6BD9DB8F3B1BA56763C(L_8, _stringLiteralC86EC5531EBD8B51C4944FF50C7007F5F966250D, NULL);
		if (!L_9)
		{
			goto IL_0085;
		}
	}
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_10 = __this->___ReceivedData_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		String_t* L_12 = __this->___str_20;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, L_12);
		NullCheck(L_10);
		Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E(L_10, L_13, Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
		BluetoothHelper_InvokeOnDataReceived_mF18FB3D9D7E954B47A34A11193E44EAE0A08BD74(__this, NULL);
	}

IL_0085:
	{
		return;
	}
}
// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* BluetoothHelper_GetInstance_m83D921250640224A615E88CF573675D7E0F545DE (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___bluetoothHelperInstance_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___deviceName0;
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_2;
		L_2 = BluetoothHelper_GetNewInstance_m0F30C1E96CC2762B3F43526901DEFED03D6DAE64(L_1, NULL);
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___bluetoothHelperInstance_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___bluetoothHelperInstance_0), (void*)L_2);
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_3 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___bluetoothHelperInstance_0;
		return L_3;
	}
}
// ArduinoBluetoothAPI.BluetoothHelper ArduinoBluetoothAPI.BluetoothHelper::GetNewInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* BluetoothHelper_GetNewInstance_m0F30C1E96CC2762B3F43526901DEFED03D6DAE64 (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m75B9164C285CC81BDFA068E7E1D192A9E77D1735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m33A370A416360F0F7F558C3737520EF8D094A652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3F97D0BDC1419FD4DCE0692BFD85615F4F36904B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFA68865778A91264B58DF92CA8BD2CA6AEA114CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICreationListener_t45E3482DA70E9C02DDA956DE9B16A2B543DCC631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5499CF4587DC51E6FD313ED69A15F84E0C559209_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*)NULL;
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___deviceName0;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_2 = (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6*)il2cpp_codegen_object_new(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidBluetoothHelper__ctor_mCBD79B0FFBE62F42A6B31C1DABADA0486FE3CB0D(L_2, L_1, NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_0014:
	{
		String_t* L_3 = ___deviceName0;
		DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* L_4 = (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28*)il2cpp_codegen_object_new(DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DefaultBluetoothHelper__ctor_m5447AA61BA6B528927DB2B50434F46C7D7A4B629(L_4, L_3, NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 ArduinoBluetoothAPI.BluetoothHelper::getId() */, L_5);
		V_1 = L_6;
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E* L_7 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___instances_7;
		int32_t L_8 = V_1;
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_9 = V_0;
		NullCheck(L_7);
		Dictionary_2_set_Item_m75B9164C285CC81BDFA068E7E1D192A9E77D1735(L_7, L_8, L_9, Dictionary_2_set_Item_m75B9164C285CC81BDFA068E7E1D192A9E77D1735_RuntimeMethod_var);
		List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52* L_10 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___listeners_17;
		NullCheck(L_10);
		Enumerator_tD6F984A94883027EA06AC4F877721D1F8F941AFE L_11;
		L_11 = List_1_GetEnumerator_m5499CF4587DC51E6FD313ED69A15F84E0C559209(L_10, List_1_GetEnumerator_m5499CF4587DC51E6FD313ED69A15F84E0C559209_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m33A370A416360F0F7F558C3737520EF8D094A652((&V_2), Enumerator_Dispose_m33A370A416360F0F7F558C3737520EF8D094A652_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_12;
				L_12 = Enumerator_get_Current_mFA68865778A91264B58DF92CA8BD2CA6AEA114CB_inline((&V_2), Enumerator_get_Current_mFA68865778A91264B58DF92CA8BD2CA6AEA114CB_RuntimeMethod_var);
				BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_13 = V_0;
				NullCheck(L_12);
				InterfaceActionInvoker1< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* >::Invoke(0 /* System.Void ArduinoBluetoothAPI.ICreationListener::OnInstanceCreated(ArduinoBluetoothAPI.BluetoothHelper) */, ICreationListener_t45E3482DA70E9C02DDA956DE9B16A2B543DCC631_il2cpp_TypeInfo_var, L_12, L_13);
			}

IL_0048_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_m3F97D0BDC1419FD4DCE0692BFD85615F4F36904B((&V_2), Enumerator_MoveNext_m3F97D0BDC1419FD4DCE0692BFD85615F4F36904B_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_15 = V_0;
		return L_15;
	}
}
// System.String ArduinoBluetoothAPI.BluetoothHelper::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothHelper_Read_mF5EE5F66B6E23FEC938873A2CD1870C357B3842C (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		bool L_0;
		L_0 = BluetoothHelper_get_Available_m2B1E8044CD06627C97FE3379941E887F88AD0D04(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_2 = __this->___ReceivedData_16;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0(L_2, Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_5;
	}

IL_0024:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_7);
		return L_8;
	}
}
// System.Byte[] ArduinoBluetoothAPI.BluetoothHelper::ReadBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BluetoothHelper_ReadBytes_mF81FD423D1A605A3A3924D9C769057196E4BC44A (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = BluetoothHelper_get_Available_m2B1E8044CD06627C97FE3379941E887F88AD0D04(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_1 = __this->___ReceivedData_16;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0(L_1, Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::SendData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_SendData_mDED24B901792AE8805FD2F59538D053F7C68323A (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(17 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::SendData(System.Byte[]) */, __this, L_3);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnDataReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnDataReceived_mF18FB3D9D7E954B47A34A11193E44EAE0A08BD74 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_U3CInvokeOnDataReceivedU3Eb__76_0_m10CB2F9BEBE4C440FE5B78BC1D50C534D10F377D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnDataReceived_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_1 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_2 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)BluetoothHelper_U3CInvokeOnDataReceivedU3Eb__76_0_m10CB2F9BEBE4C440FE5B78BC1D50C534D10F377D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_2, L_3, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_0027:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_4 = __this->___OnDataReceived_10;
		NullCheck(L_4);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_4, __this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnConnected_mAAC78F980208458BBC79927776E0EDEE3FE66955 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_U3CInvokeOnConnectedU3Eb__77_0_m8E9A5EF976BEFDF1AE82B3F6E2328F6A09AAEE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnected_8;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_1 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_2 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)BluetoothHelper_U3CInvokeOnConnectedU3Eb__77_0_m8E9A5EF976BEFDF1AE82B3F6E2328F6A09AAEE3D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_2, L_3, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_0027:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_4 = __this->___OnConnected_8;
		NullCheck(L_4);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_4, __this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnConnectionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnConnectionFailed_mC8FB2A5AE00BE16337F78CD5EAA81E05156CA36B (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_U3CInvokeOnConnectionFailedU3Eb__78_0_mA044A3BF09480C015A8DD0DEFD02E1101EAEB243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnectionFailed_9;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_1 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_2 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)BluetoothHelper_U3CInvokeOnConnectionFailedU3Eb__78_0_mA044A3BF09480C015A8DD0DEFD02E1101EAEB243_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_2, L_3, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_0027:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_4 = __this->___OnConnectionFailed_9;
		NullCheck(L_4);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_4, __this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnServiceNotFound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnServiceNotFound_m9E0C1D6B0AE6AE1E035A8663EE6526A533257418 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, String_t* ___service0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass79_0_U3CInvokeOnServiceNotFoundU3Eb__0_m2BA1A5F7EEA716C443A6427E0B8194676F92A4D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* L_0 = (U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass79_0__ctor_mC8D3D0941173D0B9FECBB6AACF21464F71588E68(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* L_2 = V_0;
		String_t* L_3 = ___service0;
		NullCheck(L_2);
		L_2->___service_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___service_1), (void*)L_3);
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_4 = __this->___OnServiceNotFound_11;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_5 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_6 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass79_0_U3CInvokeOnServiceNotFoundU3Eb__0_m2BA1A5F7EEA716C443A6427E0B8194676F92A4D7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_6, L_8, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_003b:
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_9 = __this->___OnServiceNotFound_11;
		U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___service_1;
		NullCheck(L_9);
		BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_inline(L_9, __this, L_11, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnCharacteristicNotFound(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnCharacteristicNotFound_mF77D44DA3AA1EA0096B507693CC2ADCDD9ACE0D4 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, String_t* ___service0, String_t* ___characteristic1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass80_0_U3CInvokeOnCharacteristicNotFoundU3Eb__0_m90E55CE09AF3F47371A1A810FCBAC9DCC7629FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_0 = (U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass80_0__ctor_mBA4112622443A0FE87CA341AC10A52EE8459FB5D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_2 = V_0;
		String_t* L_3 = ___service0;
		NullCheck(L_2);
		L_2->___service_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___service_1), (void*)L_3);
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_4 = V_0;
		String_t* L_5 = ___characteristic1;
		NullCheck(L_4);
		L_4->___characteristic_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___characteristic_2), (void*)L_5);
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_6 = __this->___OnCharacteristicNotFound_12;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_7 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_8 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass80_0_U3CInvokeOnCharacteristicNotFoundU3Eb__0_m90E55CE09AF3F47371A1A810FCBAC9DCC7629FFB_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_8, L_10, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_0042:
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_11 = __this->___OnCharacteristicNotFound_12;
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___service_1;
		U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___characteristic_2;
		NullCheck(L_11);
		BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_inline(L_11, __this, L_13, L_15, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnDescriptorNotFound(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnDescriptorNotFound_mB7750FE02A4E41BF272FDB7E379CBBEA9362F620 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, String_t* ___service0, String_t* ___characteristic1, String_t* ___descriptor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass81_0_U3CInvokeOnDescriptorNotFoundU3Eb__0_m67D6B0C2E92515F16B944E2AFE626D00A1BA2654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_0 = (U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass81_0__ctor_m1D91743FD5D70EA417CD95B4CD7FA046DC3F91DD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_2 = V_0;
		String_t* L_3 = ___service0;
		NullCheck(L_2);
		L_2->___service_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___service_1), (void*)L_3);
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_4 = V_0;
		String_t* L_5 = ___characteristic1;
		NullCheck(L_4);
		L_4->___characteristic_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___characteristic_2), (void*)L_5);
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_6 = V_0;
		String_t* L_7 = ___descriptor2;
		NullCheck(L_6);
		L_6->___descriptor_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___descriptor_3), (void*)L_7);
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_8 = __this->___OnDescriptorNotFound_13;
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_9 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_10 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass81_0_U3CInvokeOnDescriptorNotFoundU3Eb__0_m67D6B0C2E92515F16B944E2AFE626D00A1BA2654_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_10, L_12, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_0049:
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_13 = __this->___OnDescriptorNotFound_13;
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___service_1;
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->___characteristic_2;
		U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->___descriptor_3;
		NullCheck(L_13);
		BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_inline(L_13, __this, L_15, L_17, L_19, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnCharacteristicChanged(System.Byte[],ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnCharacteristicChanged_mDD339886266EAAE59FC5D9B7655FB9EEE9EAD3A4 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_U3CInvokeOnCharacteristicChangedU3Eb__0_m835698085B76315C6B6C893353D59EE85AB26791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_0 = (U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass82_0__ctor_mE99986A73BF1CD4C4B667629C1D2E47A8772AB91(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value0;
		NullCheck(L_2);
		L_2->___value_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___value_1), (void*)L_3);
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_4 = V_0;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_5 = ___characteristic1;
		NullCheck(L_4);
		L_4->___characteristic_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___characteristic_2), (void*)L_5);
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_6 = __this->___OnCharacteristicChanged_15;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_7 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_8 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass82_0_U3CInvokeOnCharacteristicChangedU3Eb__0_m835698085B76315C6B6C893353D59EE85AB26791_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_8, L_10, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_0042:
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_11 = __this->___OnCharacteristicChanged_15;
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12->___value_1;
		U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* L_14 = V_0;
		NullCheck(L_14);
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_15 = L_14->___characteristic_2;
		NullCheck(L_11);
		BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_inline(L_11, __this, L_13, L_15, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::EnableBluetooth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_EnableBluetooth_m9393B2F09844C87585E237F364A91AA20F7D8CB4 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, bool ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FFCCF4C8D41843C54891174FD625B59850E11D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3FFCCF4C8D41843C54891174FD625B59850E11D4, NULL);
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.BluetoothHelper::IsBluetoothEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothHelper_IsBluetoothEnabled_m8ABA4E8F381CC2617E57F1F2077CE1D0B6390C33 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FFCCF4C8D41843C54891174FD625B59850E11D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3FFCCF4C8D41843C54891174FD625B59850E11D4, NULL);
		return (bool)1;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnScanEnded(System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_InvokeOnScanEnded_m6F1FBB8DC93A1F9EF952302B00D32F5A47E8A681 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass89_0_U3CInvokeOnScanEndedU3Eb__0_m330B4DD0CCA1E4887F00690BEBD5CDA2897D34E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* L_0 = (U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass89_0__ctor_mA053E04ABF863D3638F42038F90631651E6BD379(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* L_2 = V_0;
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_3 = ___nearbyDevices0;
		NullCheck(L_2);
		L_2->___nearbyDevices_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___nearbyDevices_1), (void*)L_3);
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_4 = __this->___OnScanEnded_14;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		bool L_5 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_6 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass89_0_U3CInvokeOnScanEndedU3Eb__0_m330B4DD0CCA1E4887F00690BEBD5CDA2897D34E0_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_6, L_8, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		return;
	}

IL_003b:
	{
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_9 = __this->___OnScanEnded_14;
		U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* L_10 = V_0;
		NullCheck(L_10);
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_11 = L_10->___nearbyDevices_1;
		NullCheck(L_9);
		BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_inline(L_9, __this, L_11, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::WriteCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_WriteCharacteristic_mCC8C26419D37DD69F0D6ED52C7927B41D99BD56F (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_0 = ___characteristic0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		String_t* L_2 = ___value1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		VirtualActionInvoker2< BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::WriteCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic,System.Byte[]) */, __this, L_0, L_3);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper__cctor_m72BD52B5354430B0DCC85DA1F233B35A0D446E61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69B841E3C29431E9BD6EF04266B6113554A9D59F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE439D94EC94ED8E683C444FEEDDB5304D124D36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___SERIAL_COMM_1 = (bool)0;
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLUETOOTH_SIMULATION_2 = (bool)0;
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_3 = (bool)0;
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___ASYNC_EVENTS_4 = (bool)0;
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_AS_CLIENT_5 = (bool)0;
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_SERVER_IP_6 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_SERVER_IP_6), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E* L_0 = (Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E*)il2cpp_codegen_object_new(Dictionary_2_tB921022599954978638196500A1CEDCC3359CF9E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m69B841E3C29431E9BD6EF04266B6113554A9D59F(L_0, Dictionary_2__ctor_m69B841E3C29431E9BD6EF04266B6113554A9D59F_RuntimeMethod_var);
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___instances_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___instances_7), (void*)L_0);
		List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52* L_1 = (List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52*)il2cpp_codegen_object_new(List_1_t2FF22683D328C16E6CFBCB69BEAFED797BD2CF52_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE439D94EC94ED8E683C444FEEDDB5304D124D36A(L_1, List_1__ctor_mE439D94EC94ED8E683C444FEEDDB5304D124D36A_RuntimeMethod_var);
		((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___listeners_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___listeners_17), (void*)L_1);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::<InvokeOnDataReceived>b__76_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_U3CInvokeOnDataReceivedU3Eb__76_0_m10CB2F9BEBE4C440FE5B78BC1D50C534D10F377D (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnDataReceived_10;
		NullCheck(L_0);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_0, __this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::<InvokeOnConnected>b__77_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_U3CInvokeOnConnectedU3Eb__77_0_m8E9A5EF976BEFDF1AE82B3F6E2328F6A09AAEE3D (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnected_8;
		NullCheck(L_0);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_0, __this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper::<InvokeOnConnectionFailed>b__78_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelper_U3CInvokeOnConnectionFailedU3Eb__78_0_mA044A3BF09480C015A8DD0DEFD02E1101EAEB243 (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* __this, const RuntimeMethod* method) 
{
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___OnConnectionFailed_9;
		NullCheck(L_0);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_0, __this, NULL);
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
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_Multicast(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* currentDelegate = reinterpret_cast<BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___helper0, ___value1, ___characteristic2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_Open(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___helper0, ___value1, ___characteristic2, method);
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenStaticInvoker(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(__this->___method_ptr_0, method, NULL, ___helper0, ___value1, ___characteristic2);
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_ClosedStaticInvoker(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___helper0, ___value1, ___characteristic2);
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenVirtual(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(il2cpp_codegen_method_get_slot(method), ___helper0, ___value1, ___characteristic2);
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenInterface(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___helper0, ___value1, ___characteristic2);
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenGenericVirtual(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(method, ___helper0, ___value1, ___characteristic2);
}
void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenGenericInterface(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(method, ___helper0, ___value1, ___characteristic2);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEDataEvent__ctor_m00FE4933EAD939780C7BF977426681041BB630CC (BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_Multicast;
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.Byte[],ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7 (BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___value1, ___characteristic2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_Multicast(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* currentDelegate = reinterpret_cast<BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___helper0, ___service1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_Open(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___helper0, ___service1, method);
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenStaticInvoker(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___helper0, ___service1);
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_ClosedStaticInvoker(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___helper0, ___service1);
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenVirtual(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___helper0, ___service1);
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenInterface(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___helper0, ___service1);
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenGenericVirtual(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___helper0, ___service1);
}
void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenGenericInterface(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___helper0, ___service1);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothServiceEvent__ctor_mE057B64A5A950826611FFA959425E713F85F76D2 (BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_Multicast;
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF (BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___service1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_Multicast(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* currentDelegate = reinterpret_cast<BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___helper0, ___service1, ___characteristic2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_Open(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___helper0, ___service1, ___characteristic2, method);
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenStaticInvoker(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___helper0, ___service1, ___characteristic2);
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_ClosedStaticInvoker(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___helper0, ___service1, ___characteristic2);
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenVirtual(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___helper0, ___service1, ___characteristic2);
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenInterface(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___helper0, ___service1, ___characteristic2);
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenGenericVirtual(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< String_t*, String_t* >::Invoke(method, ___helper0, ___service1, ___characteristic2);
}
void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenGenericInterface(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(method, ___helper0, ___service1, ___characteristic2);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothCharacteristicEvent__ctor_m9DEB2A0A49F73E432113378DB387101DB13C0FBA (BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_Multicast;
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7 (BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___service1, ___characteristic2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_Multicast(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* currentDelegate = reinterpret_cast<BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___helper0, ___service1, ___characteristic2, ___descriptor3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_Open(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___helper0, ___service1, ___characteristic2, ___descriptor3, method);
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenStaticInvoker(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___helper0, ___service1, ___characteristic2, ___descriptor3);
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_ClosedStaticInvoker(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___helper0, ___service1, ___characteristic2, ___descriptor3);
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenVirtual(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	VirtualActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___helper0, ___service1, ___characteristic2, ___descriptor3);
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenInterface(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___helper0, ___service1, ___characteristic2, ___descriptor3);
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenGenericVirtual(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker3< String_t*, String_t*, String_t* >::Invoke(method, ___helper0, ___service1, ___characteristic2, ___descriptor3);
}
void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenGenericInterface(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(method, ___helper0, ___service1, ___characteristic2, ___descriptor3);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDescriptorEvent__ctor_mFBDE1B7D4C02F4D1711B11B998988E081A06BEFD (BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_Multicast;
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532 (BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___service1, ___characteristic2, ___descriptor3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_Multicast(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* currentDelegate = reinterpret_cast<BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___helper0, ___nearbyDevices1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_Open(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___helper0, ___nearbyDevices1, method);
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenStaticInvoker(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(__this->___method_ptr_0, method, NULL, ___helper0, ___nearbyDevices1);
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_ClosedStaticInvoker(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___helper0, ___nearbyDevices1);
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenVirtual(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(il2cpp_codegen_method_get_slot(method), ___helper0, ___nearbyDevices1);
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenInterface(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___helper0, ___nearbyDevices1);
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenGenericVirtual(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(method, ___helper0, ___nearbyDevices1);
}
void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenGenericInterface(BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(method, ___helper0, ___nearbyDevices1);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothScanEvents__ctor_m8C2203FEF6AE863D973EBD3D30BB9A84A645A7B6 (BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_Multicast;
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothScanEvents::Invoke(ArduinoBluetoothAPI.BluetoothHelper,System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467 (BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___nearbyDevices1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_Multicast(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* currentDelegate = reinterpret_cast<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___helper0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_Open(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___helper0, method);
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenStaticInvoker(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* >::Invoke(__this->___method_ptr_0, method, NULL, ___helper0);
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_ClosedStaticInvoker(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___helper0);
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenVirtual(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___helper0);
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenInterface(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___helper0);
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenGenericVirtual(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___helper0);
}
void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenGenericInterface(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___helper0);
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothEvents__ctor_m61F7A88FC202FAC15A597F8AB84F3F0C2A630A12 (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_Multicast;
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents::Invoke(ArduinoBluetoothAPI.BluetoothHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052 (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothHelperException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5 (BluetoothHelperException_t9BD92929F77DCBFE91DA3B7B3E66D719FD79875C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotEnabledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotEnabledException__ctor_mE3B1A6CE1CE690DD9735EAD6E002CB84A48E00A1 (BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF6F6D9B53AE9628D312C8396CF326F5B1D1ECD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteralAF6F6D9B53AE9628D312C8396CF326F5B1D1ECD0, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotSupportedException__ctor_mDE4CAF7330C9CEA50CDF9FEC0A2A23569B0EDFE2 (BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AAD7E74D1BF82BAA84924187B8B994836B5856);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteral81AAD7E74D1BF82BAA84924187B8B994836B5856, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotReadyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotReadyException__ctor_m2D3A61E04F5EEA056211EE179AAEE9D8F491851C (BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED34F69C62E71E46918FB61B2999E0D983CA88C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteralED34F69C62E71E46918FB61B2999E0D983CA88C2, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothNotConnectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothNotConnectedException__ctor_m18CFFB79E12C258AC9510802C382A83AC0338437 (BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A646B138C28267C44DFE45B38AF9C364F4DD28);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteral84A646B138C28267C44DFE45B38AF9C364F4DD28, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BlueToothPermissionNotGrantedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlueToothPermissionNotGrantedException__ctor_mB07F7D1629EB6FB86C57CDF3A88968F3EEF4A300 (BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2BBA8EC1068B95B4A773950D0223AFC3FF5DB5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteralB2BBA8EC1068B95B4A773950D0223AFC3FF5DB5D, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/BluetoothListeningMethodIsNotSetException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothListeningMethodIsNotSetException__ctor_m9CBFE0865AAE48817143E9060EC2F8433665776D (BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01B3749BDB26BFC9161B239A7D3A0383474B92FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteral01B3749BDB26BFC9161B239A7D3A0383474B92FF, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/ServiceNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceNotFoundException__ctor_mF7CDD811C186088D24C092E3D6B4F0EDF0C30021 (ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F7EBA6CC1A85E052E6DC6BA06FC3638934D944);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteralE6F7EBA6CC1A85E052E6DC6BA06FC3638934D944, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/CharacteristicNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacteristicNotFoundException__ctor_mD63D5FDCF903F641EB8D70D1E3F1419190EF2C7E (CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BBDBEC3BF7920B0A4B3F8E54BAF65B04899430F);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteral8BBDBEC3BF7920B0A4B3F8E54BAF65B04899430F, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/MethodNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodNotSupportedException__ctor_m2591631D7960E7C9C1CD129DA7E6D1B7DB032592 (MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C4D8774FB87E085DB940023596C0AAA5A07260);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperException__ctor_m0729A4F37F773FD221539893608919A89E969EE5(__this, _stringLiteral17C4D8774FB87E085DB940023596C0AAA5A07260, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0__ctor_mC8D3D0941173D0B9FECBB6AACF21464F71588E68 (U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass79_0::<InvokeOnServiceNotFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0_U3CInvokeOnServiceNotFoundU3Eb__0_m2BA1A5F7EEA716C443A6427E0B8194676F92A4D7 (U3CU3Ec__DisplayClass79_0_tE92227B84AFC0B54A703A8F2D05B9EAA1FDA2595* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_1 = L_0->___OnServiceNotFound_11;
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_2 = __this->___U3CU3E4__this_0;
		String_t* L_3 = __this->___service_1;
		NullCheck(L_1);
		BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_inline(L_1, L_2, L_3, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0__ctor_mBA4112622443A0FE87CA341AC10A52EE8459FB5D (U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass80_0::<InvokeOnCharacteristicNotFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0_U3CInvokeOnCharacteristicNotFoundU3Eb__0_m90E55CE09AF3F47371A1A810FCBAC9DCC7629FFB (U3CU3Ec__DisplayClass80_0_t5337493E465EC8FE79570B787D362ED5903D90AF* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_1 = L_0->___OnCharacteristicNotFound_12;
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_2 = __this->___U3CU3E4__this_0;
		String_t* L_3 = __this->___service_1;
		String_t* L_4 = __this->___characteristic_2;
		NullCheck(L_1);
		BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_inline(L_1, L_2, L_3, L_4, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass81_0__ctor_m1D91743FD5D70EA417CD95B4CD7FA046DC3F91DD (U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass81_0::<InvokeOnDescriptorNotFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass81_0_U3CInvokeOnDescriptorNotFoundU3Eb__0_m67D6B0C2E92515F16B944E2AFE626D00A1BA2654 (U3CU3Ec__DisplayClass81_0_tC4396CEB78F5B0E6168D00DDFF186137F0757126* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_1 = L_0->___OnDescriptorNotFound_13;
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_2 = __this->___U3CU3E4__this_0;
		String_t* L_3 = __this->___service_1;
		String_t* L_4 = __this->___characteristic_2;
		String_t* L_5 = __this->___descriptor_3;
		NullCheck(L_1);
		BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_inline(L_1, L_2, L_3, L_4, L_5, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0__ctor_mE99986A73BF1CD4C4B667629C1D2E47A8772AB91 (U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass82_0::<InvokeOnCharacteristicChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0_U3CInvokeOnCharacteristicChangedU3Eb__0_m835698085B76315C6B6C893353D59EE85AB26791 (U3CU3Ec__DisplayClass82_0_tE5B67D4EA2D2B9EBBAC78002F7EB83F7BA15A80C* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_1 = L_0->___OnCharacteristicChanged_15;
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_2 = __this->___U3CU3E4__this_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___value_1;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_4 = __this->___characteristic_2;
		NullCheck(L_1);
		BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_inline(L_1, L_2, L_3, L_4, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0__ctor_mA053E04ABF863D3638F42038F90631651E6BD379 (U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelper/<>c__DisplayClass89_0::<InvokeOnScanEnded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0_U3CInvokeOnScanEndedU3Eb__0_m330B4DD0CCA1E4887F00690BEBD5CDA2897D34E0 (U3CU3Ec__DisplayClass89_0_t559CBED408E3A3082249A69A23F444C980C8C0A4* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* L_1 = L_0->___OnScanEnded_14;
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_2 = __this->___U3CU3E4__this_0;
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_3 = __this->___nearbyDevices_1;
		NullCheck(L_1);
		BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_inline(L_1, L_2, L_3, NULL);
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
// System.Void ArduinoBluetoothAPI.BluetoothHelperCharacteristic::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperCharacteristic__ctor_mC1CFFED5328A02877AF502530441689359950451 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_mF3DBBE1ED62ACED2B9C4092876AC035BCF71C040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* L_0 = (LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686*)il2cpp_codegen_object_new(LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_mF3DBBE1ED62ACED2B9C4092876AC035BCF71C040(L_0, LinkedList_1__ctor_mF3DBBE1ED62ACED2B9C4092876AC035BCF71C040_RuntimeMethod_var);
		__this->___descriptors_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descriptors_2), (void*)L_0);
		String_t* L_1 = ___name0;
		__this->___name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_1);
		return;
	}
}
// System.Collections.Generic.LinkedList`1<System.String> ArduinoBluetoothAPI.BluetoothHelperCharacteristic::getDescriptors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* BluetoothHelperCharacteristic_getDescriptors_mBCAE255E2C1BBCF87C61EC0EEE634E3CE6D13BB8 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) 
{
	{
		LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* L_0 = __this->___descriptors_2;
		return L_0;
	}
}
// System.String ArduinoBluetoothAPI.BluetoothHelperCharacteristic::getName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothHelperCharacteristic_getName_m98D5C3DD088FA90A8B3C8DF8B44D8A94B600A929 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelperCharacteristic::setService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperCharacteristic_setService_mE5C5312113973A3505CAD666150826A54B7E58E2 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, String_t* ___service0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___service0;
		__this->___service_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___service_1), (void*)L_0);
		return;
	}
}
// System.String ArduinoBluetoothAPI.BluetoothHelperCharacteristic::getService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothHelperCharacteristic_getService_mB79C760324898850B7227C0B8A397B4D2A675040 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___service_1;
		return L_0;
	}
}
// System.Boolean ArduinoBluetoothAPI.BluetoothHelperCharacteristic::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothHelperCharacteristic_Equals_m6291B45B43EE7FEF69826533C3B96EAD76189C3B (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___name_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*)IsInstClass((RuntimeObject*)L_1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = __this->___name_0;
		RuntimeObject* L_3 = ___obj0;
		NullCheck(((BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*)CastclassClass((RuntimeObject*)L_3, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var)));
		String_t* L_4 = ((BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*)CastclassClass((RuntimeObject*)L_3, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var))->___name_0;
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		return (bool)0;
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
// System.Void ArduinoBluetoothAPI.StreamManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManager__ctor_mD286B4B1E19939D1C9D5A48C5BE09C1267B4A355 (StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* __this, const RuntimeMethod* method) 
{
	{
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
void InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_Multicast(InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* currentDelegate = reinterpret_cast<InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_Open(InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buff0, method);
}
void InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_OpenStaticInvoker(InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___buff0);
}
void InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_ClosedStaticInvoker(InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buff0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494 (InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___buff0' to native representation
	uint8_t* ____buff0_marshaled = NULL;
	if (___buff0 != NULL)
	{
		____buff0_marshaled = reinterpret_cast<uint8_t*>((___buff0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____buff0_marshaled);

}
// System.Void ArduinoBluetoothAPI.StreamManager/InvokeDataReceivedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokeDataReceivedEvent__ctor_mAC23F2A4F60B4A4EDC6EC6B81AB52E07A224DB0B (InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF_Multicast;
}
// System.Void ArduinoBluetoothAPI.StreamManager/InvokeDataReceivedEvent::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokeDataReceivedEvent_Invoke_m760AAD88D799E70B82ED326973089A0B9276BFFF (InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper__ctor_m5447AA61BA6B528927DB2B50434F46C7D7A4B629 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		BluetoothHelper__ctor_mB46354A34938D7859F962EFB627DE02AE6E62CAD(__this, NULL);
		String_t* L_0 = ___deviceName0;
		__this->___deviceName_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceName_22), (void*)L_0);
		__this->___is_connected_21 = (bool)0;
		int32_t L_1 = ((DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_il2cpp_TypeInfo_var))->___counter_25;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		((DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_StaticFields*)il2cpp_codegen_static_fields_for(DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28_il2cpp_TypeInfo_var))->___counter_25 = L_2;
		__this->___id_24 = L_2;
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::DrawGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_DrawGUI_mCD4B669E2F698ED85C4E7BCB15C51973360AE50B (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_DrawGUI_m41D52A458E04561C7137F15CCFDB75E29EA26430(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_StartListening_mB0DD9B6F5F300BAFC2A3AFC90E4CB3C59339DD45 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_Connect_mBDA2F85380B75D78D4B37E5F64381977EB153C2C (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		__this->___is_connected_21 = (bool)1;
		VirtualActionInvoker0::Invoke(21 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnConnected() */, __this);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::SendData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_SendData_m4DBD118F64B74DE84EE407BD87902636D62B9026 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_Disconnect_mAC33EB50FE8F9159C6098DE6BDB0D28CFBDFF78E (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		__this->___is_connected_21 = (bool)0;
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.DefaultBluetoothHelper::isDevicePaired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultBluetoothHelper_isDevicePaired_mF530EB6F1FA02A49219644EB97905C01EC449824 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean ArduinoBluetoothAPI.DefaultBluetoothHelper::isConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultBluetoothHelper_isConnected_m0C4CEBB684AFA85A8EA4474B338404BC4DCA5607 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_connected_21;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::setLengthBasedStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_setLengthBasedStream_mD1C70E2C9F10A0FDCAE16A5517B75497BD44B214 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::setTerminatorBasedStream(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_setTerminatorBasedStream_mBF37866DD664A64CD8832B11AC2C57150A3A95BC (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, String_t* ___str0, bool ___x1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.DefaultBluetoothHelper::ScanNearbyDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultBluetoothHelper_ScanNearbyDevices_m56543841777084375B970DF8121076716D62D772 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.String ArduinoBluetoothAPI.DefaultBluetoothHelper::getDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultBluetoothHelper_getDeviceName_m3D8153ADFF316529FC00585D126E8257F93CFFB5 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___deviceName_22;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::setDeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_setDeviceName_mC69B9F045441BEDDC0AAE0A854A3D7F6DAE30324 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___deviceName0;
		__this->___deviceName_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceName_22), (void*)L_0);
		__this->___deviceAddress_23 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceAddress_23), (void*)(String_t*)NULL);
		return;
	}
}
// ArduinoBluetoothAPI.BluetoothDevice ArduinoBluetoothAPI.DefaultBluetoothHelper::getBluetoothDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* DefaultBluetoothHelper_getBluetoothDevice_m6C08532B564E58003CA54A321F43BFA046440364 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___deviceName_22;
		String_t* L_1 = __this->___deviceAddress_23;
		BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* L_2 = (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE*)il2cpp_codegen_object_new(BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BluetoothDevice__ctor_m7BD4AB998CF3EC5D3058BF75AC75ACFC91E45CB6(L_2, L_0, L_1, ((int32_t)127), NULL);
		return L_2;
	}
}
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice> ArduinoBluetoothAPI.DefaultBluetoothHelper::getPairedDevicesList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* DefaultBluetoothHelper_getPairedDevicesList_m4AD022E3E5E71AFA4C4710DEAD023CDE329064B3 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_0 = (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*)il2cpp_codegen_object_new(LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5(L_0, LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5_RuntimeMethod_var);
		return L_0;
	}
}
// System.Int32 ArduinoBluetoothAPI.DefaultBluetoothHelper::getId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultBluetoothHelper_getId_mC96E91F16521601280807333AC2E453A58BB108D (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___id_24;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::WriteCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_WriteCharacteristic_mEC0FF968EAE0C8513CC2345EA918029325AA4C54 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::ReadCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_ReadCharacteristic_mC69BA48B1616503028F9EFB059A8A578BD3E61C5 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characterstic0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::Subscribe(ArduinoBluetoothAPI.BluetoothHelperService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_Subscribe_m441C4A86B214F0A96B6FC6263AD6C63FAA6FA942 (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* ___service0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::setCustomStreamManager(ArduinoBluetoothAPI.StreamManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_setCustomStreamManager_m988CCE596BC3278AD857D1A37D893720B0BD820E (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* ___streamManager0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService> ArduinoBluetoothAPI.DefaultBluetoothHelper::getGattServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* DefaultBluetoothHelper_getGattServices_mEE718A8BF754EAC30DAAD660441FC365E7B1C34F (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, const RuntimeMethod* method) 
{
	{
		return (List_1_t358B789ECF7E13934462A57CB614F3AA650F3981*)NULL;
	}
}
// System.Void ArduinoBluetoothAPI.DefaultBluetoothHelper::Subscribe(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultBluetoothHelper_Subscribe_mF0E95D00B6DD3A49A0F53E5952097EC88A003E5D (DefaultBluetoothHelper_t988FA3754D033731983A77955F8E461BD5B7AC28* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) 
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
// System.Void ArduinoBluetoothAPI.BluetoothHelperService::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperService__ctor_m80A0E268FACE194B04092A6CD867C83563049FD3 (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m7F4D35970757526174E27C83FCC7F10F5B732E98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* L_1 = (LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF*)il2cpp_codegen_object_new(LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LinkedList_1__ctor_m7F4D35970757526174E27C83FCC7F10F5B732E98(L_1, LinkedList_1__ctor_m7F4D35970757526174E27C83FCC7F10F5B732E98_RuntimeMethod_var);
		__this->___characteristics_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characteristics_1), (void*)L_1);
		return;
	}
}
// System.String ArduinoBluetoothAPI.BluetoothHelperService::getName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BluetoothHelperService_getName_m3FA06B4F8CD7D5E1A9CAC294BE7A717821A9CC01 (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Void ArduinoBluetoothAPI.BluetoothHelperService::addCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothHelperService_addCharacteristic_m720742F44EB3807A2268BB3F1CD3CE0A8D61A252 (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m56CC254AD8FE5A0C086D0EAEC4AEB05B32A3A64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_0 = ___characteristic0;
		String_t* L_1 = __this->___name_0;
		NullCheck(L_0);
		BluetoothHelperCharacteristic_setService_mE5C5312113973A3505CAD666150826A54B7E58E2_inline(L_0, L_1, NULL);
		LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* L_2 = __this->___characteristics_1;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_3 = ___characteristic0;
		NullCheck(L_2);
		LinkedListNode_1_t6598D434CD378F4F504C3B860DB2FFBE08D23B6C* L_4;
		L_4 = LinkedList_1_AddLast_m56CC254AD8FE5A0C086D0EAEC4AEB05B32A3A64A(L_2, L_3, LinkedList_1_AddLast_m56CC254AD8FE5A0C086D0EAEC4AEB05B32A3A64A_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothHelperCharacteristic> ArduinoBluetoothAPI.BluetoothHelperService::getCharacteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* BluetoothHelperService_getCharacteristics_m176C3C3835EAC099CB44FC3139447892B4F19B88 (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, const RuntimeMethod* method) 
{
	{
		LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* L_0 = __this->___characteristics_1;
		return L_0;
	}
}
// System.Boolean ArduinoBluetoothAPI.BluetoothHelperService::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothHelperService_Equals_m3ADD51381B2D6DB61CB8BDED29D1EC4A59D0E81C (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___name_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36*)IsInstClass((RuntimeObject*)L_1, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = __this->___name_0;
		RuntimeObject* L_3 = ___obj0;
		NullCheck(((BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36*)CastclassClass((RuntimeObject*)L_3, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var)));
		String_t* L_4 = ((BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36*)CastclassClass((RuntimeObject*)L_3, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var))->___name_0;
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		return (bool)0;
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
// System.Void ArduinoBluetoothAPI.Synchronizer::setHelper(ArduinoBluetoothAPI.BluetoothHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synchronizer_setHelper_mBA54F01CEEF4DEE9350F52C853121E5F21D6984B (Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = ___helper0;
		__this->___helper_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___helper_6), (void*)L_0);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Synchronizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synchronizer_Start_m7136B0333A0E1BAC621F3815A246DC4E478D9D28 (Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Synchronizer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synchronizer_OnDestroy_mBCDAC6C1E07FBF46CF2854B435094D0F6FC720AC (Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* __this, const RuntimeMethod* method) 
{
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_0 = __this->___helper_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* L_1 = __this->___helper_6;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(18 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::Disconnect() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Synchronizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synchronizer_Update_m626EE1C7DFD7170FEFB15104F2FCD242AEF71A9D (Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_IsEmpty_m4B30FD73F81B0C69353B001DAA6AEA1D6729F673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_0 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_get_IsEmpty_m4B30FD73F81B0C69353B001DAA6AEA1D6729F673(L_0, ConcurrentQueue_1_get_IsEmpty_m4B30FD73F81B0C69353B001DAA6AEA1D6729F673_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0019;
	}

IL_000e:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___action_5;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_3 = ((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_4 = (&__this->___action_5);
		NullCheck(L_3);
		bool L_5;
		L_5 = ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC(L_3, L_4, ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_000e;
		}
	}

IL_002b:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Synchronizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synchronizer__ctor_mCE5D53818BC46AF3F168E8357E27B4619E6FE28E (Synchronizer_t99B06EF3D8441773407F41D605521082A322100E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Synchronizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Synchronizer__cctor_m7A7FD6E02EE641FAFB1CA89B73A81AE155135DED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_0 = (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*)il2cpp_codegen_object_new(ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374(L_0, ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374_RuntimeMethod_var);
		((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_StaticFields*)il2cpp_codegen_static_fields_for(Synchronizer_t99B06EF3D8441773407F41D605521082A322100E_il2cpp_TypeInfo_var))->___RunOnMainThread_4), (void*)L_0);
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
// System.Boolean ArduinoBluetoothAPI.Utils::IsBlank(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsBlank_mE528F66343F0C09AD203D5DF11ADB455581D8D3C (String_t* ___str0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// System.Void ArduinoBluetoothAPI.Utils::ValidateCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0 (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) 
{
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_0 = ___characteristic0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0_RuntimeMethod_var)));
	}

IL_0009:
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_2 = ___characteristic0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = BluetoothHelperCharacteristic_getName_m98D5C3DD088FA90A8B3C8DF8B44D8A94B600A929_inline(L_2, NULL);
		bool L_4;
		L_4 = Utils_IsBlank_mE528F66343F0C09AD203D5DF11ADB455581D8D3C(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral139DBBAD95D93141F9B38375040E09A096EA3718)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0_RuntimeMethod_var)));
	}

IL_0021:
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_6 = ___characteristic0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = BluetoothHelperCharacteristic_getService_mB79C760324898850B7227C0B8A397B4D2A675040_inline(L_6, NULL);
		bool L_8;
		L_8 = Utils_IsBlank_mE528F66343F0C09AD203D5DF11ADB455581D8D3C(L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ED379DEF7CC51C9188FBB01A428C4D92398DD17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0_RuntimeMethod_var)));
	}

IL_0039:
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
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy::.ctor(ArduinoBluetoothAPI.StreamManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidStreamManagerProxy__ctor_m57A15B7CC63CA55F4E3FC72FF9E71D76AD073298 (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* __this, StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* ___streamManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidStreamManagerProxy_StreamManager_OnDataReceived_m04FCBF608C38D48BC3E824BC8207CADA39C5594F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_0 = (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944*)il2cpp_codegen_object_new(IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IStreamManager__ctor_m3F92DE68DD8EE80E02B59C7C06C1222FB6B58739(L_0, NULL);
		__this->___androidStreamManager_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___androidStreamManager_0), (void*)L_0);
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_1 = __this->___androidStreamManager_0;
		StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* L_2 = ___streamManager0;
		StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* L_3 = L_2;
		byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* L_4 = (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84*)il2cpp_codegen_object_new(byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		byteByteDelegate__ctor_m305FFEB3967803D96CC8FA5C64E20DBBC08D0C04(L_4, L_3, (intptr_t)((void*)GetVirtualMethodInfo(L_3, 5)), NULL);
		NullCheck(L_1);
		L_1->____formatDataToSend_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____formatDataToSend_5), (void*)L_4);
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_5 = __this->___androidStreamManager_0;
		StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* L_6 = ___streamManager0;
		StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* L_7 = L_6;
		voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* L_8 = (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F*)il2cpp_codegen_object_new(voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		voidByteDelegate__ctor_m38EEDF2CDEF11A7B4812E94020E050F9A88D9E59(L_8, L_7, (intptr_t)((void*)GetVirtualMethodInfo(L_7, 4)), NULL);
		NullCheck(L_5);
		L_5->____handleReceivedData_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____handleReceivedData_4), (void*)L_8);
		StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* L_9 = ___streamManager0;
		InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494* L_10 = (InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494*)il2cpp_codegen_object_new(InvokeDataReceivedEvent_tB137BC951BC312E82EBCD2249CBBA2411A040494_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		InvokeDataReceivedEvent__ctor_mAC23F2A4F60B4A4EDC6EC6B81AB52E07A224DB0B(L_10, __this, (intptr_t)((void*)AndroidStreamManagerProxy_StreamManager_OnDataReceived_m04FCBF608C38D48BC3E824BC8207CADA39C5594F_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		L_9->___OnDataReceived_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___OnDataReceived_0), (void*)L_10);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy::StreamManager_OnDataReceived(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidStreamManagerProxy_StreamManager_OnDataReceived_m04FCBF608C38D48BC3E824BC8207CADA39C5594F (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9925210EBA03BBFA796E60D1721FC2EA7D04124D);
		s_Il2CppMethodInitialized = true;
	}
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buff0;
		V_0 = ((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var));
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_1 = __this->___androidStreamManager_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = L_1->___listener_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral9925210EBA03BBFA796E60D1721FC2EA7D04124D, L_4, NULL);
		return;
	}
}
// ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy::getIStreamManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* AndroidStreamManagerProxy_getIStreamManager_m20232F894D968B1DC6CDA65898D244A9FE8D542C (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* __this, const RuntimeMethod* method) 
{
	{
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_0 = __this->___androidStreamManager_0;
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
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamManager__ctor_m3F92DE68DD8EE80E02B59C7C06C1222FB6B58739 (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB5FCE77D9BCD1B31E051043C348112C11853B04);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralFB5FCE77D9BCD1B31E051043C348112C11853B04, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::handleReceivedData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamManager_handleReceivedData_mE05DBD6A763CB7F4C67CFE3D110FF5564E3B42D4 (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	{
		voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* L_0 = __this->____handleReceivedData_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* L_1 = __this->____handleReceivedData_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buff0;
		NullCheck(L_1);
		voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::handleReceivedData(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamManager_handleReceivedData_m2CAEADB4EB64D63AC9E6B7144E83270AAC06C4ED (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___buff0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* L_0 = __this->____handleReceivedData_4;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* L_1 = __this->____handleReceivedData_4;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___buff0;
		NullCheck(L_1);
		voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_inline(L_1, ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Byte[] ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::formatDataToSend(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IStreamManager_formatDataToSend_m15419109685A5ADEC20A404A08F26C98CFACB756 (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	{
		byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* L_0 = __this->____formatDataToSend_5;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000a:
	{
		byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* L_1 = __this->____formatDataToSend_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buff0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// System.SByte[] ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::formatDataToSend(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* IStreamManager_formatDataToSend_m6B9CBB03DDE874521C3CCB69B853653E54E58DEB (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___buff0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* L_0 = __this->____formatDataToSend_5;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)NULL;
	}

IL_000a:
	{
		byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* L_1 = __this->____formatDataToSend_5;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___buff0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_inline(L_1, ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		return ((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_3, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var));
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager::setInvokeOnDataReceived(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamManager_setInvokeOnDataReceived_m9BE26452D04BC3FA1E69733121587EE5B446C098 (IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___listener0, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___listener0;
		__this->___listener_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_6), (void*)L_0);
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
void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_Multicast(voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* currentDelegate = reinterpret_cast<voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_Open(voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buff0, method);
}
void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_OpenStaticInvoker(voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___buff0);
}
void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_ClosedStaticInvoker(voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buff0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___buff0' to native representation
	uint8_t* ____buff0_marshaled = NULL;
	if (___buff0 != NULL)
	{
		____buff0_marshaled = reinterpret_cast<uint8_t*>((___buff0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____buff0_marshaled);

}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voidByteDelegate__ctor_m38EEDF2CDEF11A7B4812E94020E050F9A88D9E59 (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_Multicast;
}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/voidByteDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_Multicast(byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* currentDelegate = reinterpret_cast<byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84*>(delegatesToInvoke[i]);
		typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_Open(byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buff0, method);
}
ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_OpenStaticInvoker(byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___buff0);
}
ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_ClosedStaticInvoker(byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buff0);
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DelegatePInvokeWrapper_byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84 (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef uint8_t* (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___buff0' to native representation
	uint8_t* ____buff0_marshaled = NULL;
	if (___buff0 != NULL)
	{
		____buff0_marshaled = reinterpret_cast<uint8_t*>((___buff0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uint8_t* returnValue = il2cppPInvokeFunc(____buff0_marshaled);

	// Marshaling of return value back from native representation
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, 1));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void byteByteDelegate__ctor_m305FFEB3967803D96CC8FA5C64E20DBBC08D0C04 (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_Multicast;
}
// System.Byte[] ArduinoBluetoothAPI.Android.AndroidStreamManagerProxy/IStreamManager/byteByteDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25 (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper__ctor_mCBD79B0FFBE62F42A6B31C1DABADA0486FE3CB0D (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_DataWrapperToList2018_m508E3ED3BE01545F508A7248F059F1260727E005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_DataWrapperToList2019_m3EDDE8D0EEF5F97E28E0C895514EDA7CD76461BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		BluetoothHelper__ctor_mB46354A34938D7859F962EFB627DE02AE6E62CAD(__this, NULL);
		String_t* L_0 = ___deviceName0;
		AndroidBluetoothHelper_getAndroidInstance_mA2987709E5D39833772FD7B005FF5F77438688A5(__this, L_0, NULL);
		bool L_1 = ((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___vChecked_23;
		if (L_1)
		{
			goto IL_0078;
		}
	}
	try
	{// begin try (depth: 1)
		{
			((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___isNew_25 = (bool)0;
			String_t* L_2;
			L_2 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
			NullCheck(L_2);
			String_t* L_3;
			L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, 0, 4, NULL);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			int16_t L_4;
			L_4 = Convert_ToInt16_m9BB26D534FA4E6E2D32DCA99AB95BDD056CBB7E4(L_3, NULL);
			if ((((int32_t)L_4) < ((int32_t)((int32_t)2019))))
			{
				goto IL_004b_1;
			}
		}
		{
			CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* L_5 = (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289*)il2cpp_codegen_object_new(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			CharWrapperToListPtr__ctor_mFB53D072FFE096B65450312DBC802289E4B391AA(L_5, NULL, (intptr_t)((void*)AndroidBluetoothHelper_DataWrapperToList2019_m3EDDE8D0EEF5F97E28E0C895514EDA7CD76461BB_RuntimeMethod_var), NULL);
			((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___DataWrapperToList_24 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___DataWrapperToList_24), (void*)L_5);
			((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___isNew_25 = (bool)1;
			goto IL_005c_1;
		}

IL_004b_1:
		{
			CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* L_6 = (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289*)il2cpp_codegen_object_new(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			CharWrapperToListPtr__ctor_mFB53D072FFE096B65450312DBC802289E4B391AA(L_6, NULL, (intptr_t)((void*)AndroidBluetoothHelper_DataWrapperToList2018_m508E3ED3BE01545F508A7248F059F1260727E005_RuntimeMethod_var), NULL);
			((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___DataWrapperToList_24 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___DataWrapperToList_24), (void*)L_6);
		}

IL_005c_1:
		{
			goto IL_0072;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005e;
		}
		throw e;
	}

CATCH_005e:
	{// begin catch(System.Exception)
		CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* L_7 = (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		CharWrapperToListPtr__ctor_mFB53D072FFE096B65450312DBC802289E4B391AA(L_7, NULL, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_DataWrapperToList2018_m508E3ED3BE01545F508A7248F059F1260727E005_RuntimeMethod_var))), NULL);
		((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))))->___DataWrapperToList_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))))->___DataWrapperToList_24), (void*)L_7);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0072;
	}// end catch (depth: 1)

IL_0072:
	{
		((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___vChecked_23 = (bool)1;
	}

IL_0078:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getAndroidInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_getAndroidInstance_mA2987709E5D39833772FD7B005FF5F77438688A5 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_0_m585DAB9DC71AA544BDD4E3BF7631439BE952A232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_1_m8B5D70BF59364658804B126313558C26CA1BB7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_2_m9935B1AACE68E113EC6D2269B93AFD016D06ACEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_3_m9EDD9F98274316A727EE30FD725A72C96C96EB19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_4_m58A0CD94A697B9F073F67ABEFB9C64AA03808D04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_5_mA47EA76C292BAA06E0C8AE33C50017CA6DA3E9BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_6_m6C231118EA2A33326FA5885BB693302B54669987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_7_m62BBD6B59328F29564555A8CC815EB1B912A516B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D595418218E58C3196FC80FCA17D7620DDE4FAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA1D53E82BD8552669E4DF13BDF4F7CAAC1E8A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF72077F1998003A75BCDB705C2B597C0BB678729);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
			NullCheck(L_0);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
			L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			V_0 = L_1;
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4FA1D53E82BD8552669E4DF13BDF4F7CAAC1E8A0, NULL);
			V_1 = L_2;
			String_t* L_3 = ___deviceName0;
			if (!L_3)
			{
				goto IL_0051_1;
			}
		}
		{
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
			String_t* L_9 = ___deviceName0;
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
			il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
			bool L_11 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_3;
			bool L_12 = L_11;
			RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_13);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
			L_14 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteral3D595418218E58C3196FC80FCA17D7620DDE4FAF, L_10, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
			__this->___bluetoothHelper_22 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___bluetoothHelper_22), (void*)L_14);
			goto IL_0079_1;
		}

IL_0051_1:
		{
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_15 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_0;
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, L_18);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
			il2cpp_codegen_runtime_class_init_inline(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var);
			bool L_20 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_StaticFields*)il2cpp_codegen_static_fields_for(BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A_il2cpp_TypeInfo_var))->___BLE_3;
			bool L_21 = L_20;
			RuntimeObject* L_22 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_21);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_22);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
			NullCheck(L_15);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23;
			L_23 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_15, _stringLiteral3D595418218E58C3196FC80FCA17D7620DDE4FAF, L_19, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
			__this->___bluetoothHelper_22 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___bluetoothHelper_22), (void*)L_23);
		}

IL_0079_1:
		{
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_24 = (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847*)il2cpp_codegen_object_new(AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847_il2cpp_TypeInfo_var);
			NullCheck(L_24);
			AndroidPluginCallback__ctor_m12C81552D0BAE988FA2A30C08C64DAD4FA39AD57(L_24, __this, NULL);
			__this->___callBackInterface_21 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___callBackInterface_21), (void*)L_24);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_25 = __this->___callBackInterface_21;
			DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_26 = (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)il2cpp_codegen_object_new(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			DataReceivedListener__ctor_m32FD588395FC03A8F8E73C91861293C9A56C21FF(L_26, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_0_m585DAB9DC71AA544BDD4E3BF7631439BE952A232_RuntimeMethod_var), NULL);
			NullCheck(L_25);
			AndroidPluginCallback_add_onDataReceived_mD59235474AC44C6334080539593DD45E6369650F(L_25, L_26, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_27 = __this->___callBackInterface_21;
			NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_28 = (NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)il2cpp_codegen_object_new(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var);
			NullCheck(L_28);
			NearByDevicesScanListener__ctor_mC7CCA74168EC07B51CC5335B9D96B180EDF1DA26(L_28, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_1_m8B5D70BF59364658804B126313558C26CA1BB7DC_RuntimeMethod_var), NULL);
			NullCheck(L_27);
			AndroidPluginCallback_add_onScanEnded_m544AA07CD42D86D085FF59CDF31A5D0130098911(L_27, L_28, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_29 = __this->___callBackInterface_21;
			BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_30 = (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)il2cpp_codegen_object_new(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
			NullCheck(L_30);
			BluetoothEvents__ctor_m61F7A88FC202FAC15A597F8AB84F3F0C2A630A12(L_30, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_2_m9935B1AACE68E113EC6D2269B93AFD016D06ACEC_RuntimeMethod_var), NULL);
			NullCheck(L_29);
			AndroidPluginCallback_add_onConnected_m422C709753C744F327116A0A1A716EAA0EF7369B(L_29, L_30, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_31 = __this->___callBackInterface_21;
			BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_32 = (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)il2cpp_codegen_object_new(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
			NullCheck(L_32);
			BluetoothEvents__ctor_m61F7A88FC202FAC15A597F8AB84F3F0C2A630A12(L_32, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_3_m9EDD9F98274316A727EE30FD725A72C96C96EB19_RuntimeMethod_var), NULL);
			NullCheck(L_31);
			AndroidPluginCallback_add_onConnectionFailed_m6629211AA26AD47FBFE405EF3ACA27B7501885DE(L_31, L_32, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_33 = __this->___callBackInterface_21;
			BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_34 = (BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)il2cpp_codegen_object_new(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var);
			NullCheck(L_34);
			BluetoothServiceEvent__ctor_mE057B64A5A950826611FFA959425E713F85F76D2(L_34, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_4_m58A0CD94A697B9F073F67ABEFB9C64AA03808D04_RuntimeMethod_var), NULL);
			NullCheck(L_33);
			AndroidPluginCallback_add_onServiceNotFound_m2EAA209CBE43E8665658EBAD5F4450349E5790C9(L_33, L_34, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_35 = __this->___callBackInterface_21;
			BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_36 = (BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)il2cpp_codegen_object_new(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var);
			NullCheck(L_36);
			BluetoothCharacteristicEvent__ctor_m9DEB2A0A49F73E432113378DB387101DB13C0FBA(L_36, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_5_mA47EA76C292BAA06E0C8AE33C50017CA6DA3E9BA_RuntimeMethod_var), NULL);
			NullCheck(L_35);
			AndroidPluginCallback_add_onCharacteristicNotFound_mB33DB9AB9574CEED5C3C817F8680B0A709FACA2E(L_35, L_36, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_37 = __this->___callBackInterface_21;
			BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_38 = (BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)il2cpp_codegen_object_new(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var);
			NullCheck(L_38);
			BluetoothDescriptorEvent__ctor_mFBDE1B7D4C02F4D1711B11B998988E081A06BEFD(L_38, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_6_m6C231118EA2A33326FA5885BB693302B54669987_RuntimeMethod_var), NULL);
			NullCheck(L_37);
			AndroidPluginCallback_add_onDescriptorNotFound_m011FD671585F6A02767153C59EECB5CF76BD4C9F(L_37, L_38, NULL);
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_39 = __this->___callBackInterface_21;
			BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_40 = (BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)il2cpp_codegen_object_new(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var);
			NullCheck(L_40);
			BluetoothLEDataEvent__ctor_m00FE4933EAD939780C7BF977426681041BB630CC(L_40, __this, (intptr_t)((void*)AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_7_m62BBD6B59328F29564555A8CC815EB1B912A516B_RuntimeMethod_var), NULL);
			NullCheck(L_39);
			AndroidPluginCallback_add_onCharacteristicChanged_m646E0F440C3BDD83DA363A17787BE2C334B161B6(L_39, L_40, NULL);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = __this->___bluetoothHelper_22;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
			AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* L_44 = __this->___callBackInterface_21;
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_44);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
			NullCheck(L_41);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_41, _stringLiteralF72077F1998003A75BCDB705C2B597C0BB678729, L_43, NULL);
			goto IL_0167;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015e;
		}
		throw e;
	}

CATCH_015e:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_2 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_45 = V_2;
		Exception_t* L_46;
		L_46 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_45, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_getAndroidInstance_mA2987709E5D39833772FD7B005FF5F77438688A5_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0167:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_StartListening_m98DA4BBD7D1AB254AEC9A7165A5607D289B94A0D (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B80E358773B2AC3B95211FCD0E82DD38677331);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral59B80E358773B2AC3B95211FCD0E82DD38677331, L_1, NULL);
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_2 = V_0;
		Exception_t* L_3;
		L_3 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_StartListening_m98DA4BBD7D1AB254AEC9A7165A5607D289B94A0D_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0020:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_Connect_m2C249EA3FAC8C34C1B291B5D4F04F8A7533A3E3F (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11, L_1, NULL);
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_2 = V_0;
		Exception_t* L_3;
		L_3 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_Connect_m2C249EA3FAC8C34C1B291B5D4F04F8A7533A3E3F_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0020:
	{
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::ScanNearbyDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBluetoothHelper_ScanNearbyDevices_m077A7F397640825A3FC1AEBCD500B2B8017CFCE9 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6345E5EA9A5E885E9F55C427818AB2726DDDDEBF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral6345E5EA9A5E885E9F55C427818AB2726DDDDEBF, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_1 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_3 = V_1;
		Exception_t* L_4;
		L_4 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_ScanNearbyDevices_m077A7F397640825A3FC1AEBCD500B2B8017CFCE9_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0021:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::SendData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_SendData_m1B133452369995E02ED2FC3F8DD1C5CD13C59D47 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C, L_2, NULL);
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_4 = V_0;
		Exception_t* L_5;
		L_5 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_SendData_m1B133452369995E02ED2FC3F8DD1C5CD13C59D47_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0025:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::SendData(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_SendData_m4426D84B147AEE572BEE76BEFA12C6CBFD60EEBE (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = ___data0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C, L_2, NULL);
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_4 = V_0;
		Exception_t* L_5;
		L_5 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_SendData_m4426D84B147AEE572BEE76BEFA12C6CBFD60EEBE_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0025:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::SendData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_SendData_mE08404EBC0F4C42A77B338B3465B592E9899D1DA (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSendDataU3Eb__13_0_m6A1FD7E3B6AE0F59DB29053E45ED74744D30999E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C);
		s_Il2CppMethodInitialized = true;
	}
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	try
	{// begin try (depth: 1)
		{
			bool L_0 = ((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___isNew_25;
			if (L_0)
			{
				goto IL_0023_1;
			}
		}
		{
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___bluetoothHelper_22;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___data0;
			NullCheck(L_3);
			ArrayElementTypeCheck (L_3, L_4);
			(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
			NullCheck(L_1);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralBE3EE9EC9381ACD07924593DA0E19A958091489C, L_3, NULL);
			goto IL_0050_1;
		}

IL_0023_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var);
			Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* L_6 = ((U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
			Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* L_7 = L_6;
			G_B3_0 = L_7;
			G_B3_1 = L_5;
			if (L_7)
			{
				G_B4_0 = L_7;
				G_B4_1 = L_5;
				goto IL_0043_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var);
			U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F* L_8 = ((U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* L_9 = (Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58*)il2cpp_codegen_object_new(Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Converter_2__ctor_m5841BCF52B4FCD2CCF8935BC29FF2E916F37B8A5(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CSendDataU3Eb__13_0_m6A1FD7E3B6AE0F59DB29053E45ED74744D30999E_RuntimeMethod_var), NULL);
			Converter_2_t9B699E6A45E402C515C48B66ADD134D1C4CD6C58* L_10 = L_9;
			((U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_10);
			G_B4_0 = L_10;
			G_B4_1 = G_B3_1;
		}

IL_0043_1:
		{
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11;
			L_11 = Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A(G_B4_1, G_B4_0, Array_ConvertAll_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8969238525CC5FB93D95924C2DC1984D97B6478A_RuntimeMethod_var);
			V_0 = L_11;
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = V_0;
			AndroidBluetoothHelper_SendData_m4426D84B147AEE572BEE76BEFA12C6CBFD60EEBE(__this, L_12, NULL);
		}

IL_0050_1:
		{
			goto IL_005b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_1 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_13 = V_1;
		Exception_t* L_14;
		L_14 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_SendData_mE08404EBC0F4C42A77B338B3465B592E9899D1DA_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_005b:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_Disconnect_m460F34F4FEE3D483F829C14C12EA0CD165EB9299 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC21AA4F5FE69346E31AFC76EDFE0CD96E3B75776);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralC21AA4F5FE69346E31AFC76EDFE0CD96E3B75776, L_1, NULL);
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_2 = V_0;
		Exception_t* L_3;
		L_3 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_Disconnect_m460F34F4FEE3D483F829C14C12EA0CD165EB9299_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0020:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::EnableBluetooth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_EnableBluetooth_m415F17FFF6E0AFDEA90FE4905917D853D938CEC4 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, bool ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A5FB47B8CC13D728F2FE0BA3835883335CAF69);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___status0;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralE1A5FB47B8CC13D728F2FE0BA3835883335CAF69, L_2, NULL);
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::IsBluetoothEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBluetoothHelper_IsBluetoothEnabled_m0145215F056A546E3F36A8B8502CCC1FE15290A0 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC73EF5A50FC5AF78438F0F6B283D6B84A1A49B5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteralC73EF5A50FC5AF78438F0F6B283D6B84A1A49B5F, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::DrawGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_DrawGUI_m1FA550CDE5B3B3AFD92A261359D7E7B83C5ADC6F (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::isDevicePaired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBluetoothHelper_isDevicePaired_m8FD6977EAE0D628F7E1E1A0D3F2A5FF5F68D7138 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B544AF00436E4EBD78DE386AEBA2BFEF4A21436);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral7B544AF00436E4EBD78DE386AEBA2BFEF4A21436, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::isConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBluetoothHelper_isConnected_m9506A277E45014B2AE6A910CF67F9197987E7F45 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8C90B128A1AFC4AED5AD0647B6D3CE00604855);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral6A8C90B128A1AFC4AED5AD0647B6D3CE00604855, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::setLengthBasedStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_setLengthBasedStream_m65088E43770EB70A794F897958435996022FD5DA (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378046CDCD278C7E0E695B050A103976C13A5C8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral378046CDCD278C7E0E695B050A103976C13A5C8C, L_1, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::setCustomStreamManager(ArduinoBluetoothAPI.StreamManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_setCustomStreamManager_m5FBC873C5B53334DAD2C84739A74AA479EBF8CC2 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* ___streamManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39DEA4CC7CA0F6F05D64424933E9C0069A7A94FA);
		s_Il2CppMethodInitialized = true;
	}
	AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral39DEA4CC7CA0F6F05D64424933E9C0069A7A94FA, NULL);
		StreamManager_tD0A179A568F9630AF4EA8F9E944AA120C6D3336C* L_0 = ___streamManager0;
		AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* L_1 = (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF*)il2cpp_codegen_object_new(AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidStreamManagerProxy__ctor_m57A15B7CC63CA55F4E3FC72FF9E71D76AD073298(L_1, L_0, NULL);
		V_0 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* L_5 = V_0;
		NullCheck(L_5);
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_6;
		L_6 = AndroidStreamManagerProxy_getIStreamManager_m20232F894D968B1DC6CDA65898D244A9FE8D542C_inline(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral39DEA4CC7CA0F6F05D64424933E9C0069A7A94FA, L_4, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::setTerminatorBasedStream(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_setTerminatorBasedStream_mCE1DDE6C72577E0D34ECF9FC8473780917056E33 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___str0, bool ___appendTerminator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E9FB555C44870419A1545D69ABB7272FE43024);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___appendTerminator1;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral47E9FB555C44870419A1545D69ABB7272FE43024, L_4, NULL);
		return;
	}
}
// System.Exception ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::findException(UnityEngine.AndroidJavaException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01B3749BDB26BFC9161B239A7D3A0383474B92FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C4D8774FB87E085DB940023596C0AAA5A07260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AAD7E74D1BF82BAA84924187B8B994836B5856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A646B138C28267C44DFE45B38AF9C364F4DD28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BBDBEC3BF7920B0A4B3F8E54BAF65B04899430F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF6F6D9B53AE9628D312C8396CF326F5B1D1ECD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE2BA00CAAA5E4D04CDF4B874F4A458AEE9EEB27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F7EBA6CC1A85E052E6DC6BA06FC3638934D944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED34F69C62E71E46918FB61B2999E0D983CA88C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_0 = ___ex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_1, _stringLiteralAF6F6D9B53AE9628D312C8396CF326F5B1D1ECD0, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6* L_3 = (BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6*)il2cpp_codegen_object_new(BlueToothNotEnabledException_tE1575065ACFA834F2251FD568C7D6A0BDC378BF6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BlueToothNotEnabledException__ctor_mE3B1A6CE1CE690DD9735EAD6E002CB84A48E00A1(L_3, NULL);
		return L_3;
	}

IL_0018:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_4 = ___ex0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, _stringLiteral81AAD7E74D1BF82BAA84924187B8B994836B5856, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1* L_7 = (BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1*)il2cpp_codegen_object_new(BlueToothNotSupportedException_tD0B92C21C7000A144ED062522618F0C6221790B1_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BlueToothNotSupportedException__ctor_mDE4CAF7330C9CEA50CDF9FEC0A2A23569B0EDFE2(L_7, NULL);
		return L_7;
	}

IL_0030:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_8 = ___ex0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		NullCheck(L_9);
		bool L_10;
		L_10 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_9, _stringLiteral84A646B138C28267C44DFE45B38AF9C364F4DD28, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916* L_11 = (BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916*)il2cpp_codegen_object_new(BlueToothNotConnectedException_t5FCA68E4F12793857728C67174EF0202E700F916_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BlueToothNotConnectedException__ctor_m18CFFB79E12C258AC9510802C382A83AC0338437(L_11, NULL);
		return L_11;
	}

IL_0048:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_12 = ___ex0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		NullCheck(L_13);
		bool L_14;
		L_14 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_13, _stringLiteralED34F69C62E71E46918FB61B2999E0D983CA88C2, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49* L_15 = (BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49*)il2cpp_codegen_object_new(BlueToothNotReadyException_tD2ADC20DDAF950D28645A076A751008FA5DD4A49_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		BlueToothNotReadyException__ctor_m2D3A61E04F5EEA056211EE179AAEE9D8F491851C(L_15, NULL);
		return L_15;
	}

IL_0060:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_16 = ___ex0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_17, _stringLiteralDE2BA00CAAA5E4D04CDF4B874F4A458AEE9EEB27, NULL);
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB* L_19 = (BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB*)il2cpp_codegen_object_new(BlueToothPermissionNotGrantedException_tE21DDE9DB5B4419EEC0B3F29CB0352E7C6ED43EB_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		BlueToothPermissionNotGrantedException__ctor_mB07F7D1629EB6FB86C57CDF3A88968F3EEF4A300(L_19, NULL);
		return L_19;
	}

IL_0078:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_20 = ___ex0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
		NullCheck(L_21);
		bool L_22;
		L_22 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_21, _stringLiteral01B3749BDB26BFC9161B239A7D3A0383474B92FF, NULL);
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE* L_23 = (BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE*)il2cpp_codegen_object_new(BluetoothListeningMethodIsNotSetException_tACBA0466E31CFB4FAFE7CB11AE1F50EED9FEBEDE_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		BluetoothListeningMethodIsNotSetException__ctor_m9CBFE0865AAE48817143E9060EC2F8433665776D(L_23, NULL);
		return L_23;
	}

IL_0090:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_24 = ___ex0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_24);
		NullCheck(L_25);
		bool L_26;
		L_26 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_25, _stringLiteralE6F7EBA6CC1A85E052E6DC6BA06FC3638934D944, NULL);
		if (!L_26)
		{
			goto IL_00a8;
		}
	}
	{
		ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1* L_27 = (ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1*)il2cpp_codegen_object_new(ServiceNotFoundException_t2210A85F253B4858CDA4BCA5838AE705052DCAE1_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ServiceNotFoundException__ctor_mF7CDD811C186088D24C092E3D6B4F0EDF0C30021(L_27, NULL);
		return L_27;
	}

IL_00a8:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_28 = ___ex0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_28);
		NullCheck(L_29);
		bool L_30;
		L_30 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_29, _stringLiteral8BBDBEC3BF7920B0A4B3F8E54BAF65B04899430F, NULL);
		if (!L_30)
		{
			goto IL_00c0;
		}
	}
	{
		CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2* L_31 = (CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2*)il2cpp_codegen_object_new(CharacteristicNotFoundException_tDABD9D77F1173FCDD233E2317249B2FB7E62EAC2_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		CharacteristicNotFoundException__ctor_mD63D5FDCF903F641EB8D70D1E3F1419190EF2C7E(L_31, NULL);
		return L_31;
	}

IL_00c0:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_32 = ___ex0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_32);
		NullCheck(L_33);
		bool L_34;
		L_34 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, _stringLiteral17C4D8774FB87E085DB940023596C0AAA5A07260, NULL);
		if (!L_34)
		{
			goto IL_00d8;
		}
	}
	{
		MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08* L_35 = (MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08*)il2cpp_codegen_object_new(MethodNotSupportedException_t310D38DBD38A1E31FD6EE3AD5A74208BC9AF4F08_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		MethodNotSupportedException__ctor_m2591631D7960E7C9C1CD129DA7E6D1B7DB032592(L_35, NULL);
		return L_35;
	}

IL_00d8:
	{
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_36 = ___ex0;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_36);
		Exception_t* L_38 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_38, L_37, NULL);
		return L_38;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::Subscribe(ArduinoBluetoothAPI.BluetoothHelperService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_Subscribe_mAD47B067AED919D26E88F4ACE36E168AA0D90CD8 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* ___service0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF200CE29E62C9B8D88777C9C1DFD58AADA5EE777);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_0 = ___service0;
		NullCheck(L_0);
		LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* L_1;
		L_1 = BluetoothHelperService_getCharacteristics_m176C3C3835EAC099CB44FC3139447892B4F19B88_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 L_2;
		L_2 = LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94(L_1, LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627((&V_0), Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_3;
				L_3 = Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_inline((&V_0), Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_RuntimeMethod_var);
				Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0(L_3, NULL);
			}

IL_001a_1:
			{
				bool L_4;
				L_4 = Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9((&V_0), Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
	}
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_8 = ___service0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidBluetoothHelper_GetAndroidObject_m3711607549A6B47EA68F64BBD56A12C543D0A58F(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_5);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_5, _stringLiteralF200CE29E62C9B8D88777C9C1DFD58AADA5EE777, L_7, NULL);
		goto IL_005e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_1 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_10 = V_1;
		Exception_t* L_11;
		L_11 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_Subscribe_mAD47B067AED919D26E88F4ACE36E168AA0D90CD8_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_005e:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::Subscribe(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_Subscribe_mD89546FA61DF2C0173A136FE464FDA70C4881C27 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF200CE29E62C9B8D88777C9C1DFD58AADA5EE777);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_0 = ___characteristic0;
		Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0(L_0, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_4 = ___characteristic0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidBluetoothHelper_GetAndroidObject_m4C8B33FB25391D447B807AC5269CD4523F5616AC(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralF200CE29E62C9B8D88777C9C1DFD58AADA5EE777, L_3, NULL);
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_6 = V_0;
		Exception_t* L_7;
		L_7 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_Subscribe_mD89546FA61DF2C0173A136FE464FDA70C4881C27_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0030:
	{
		return;
	}
}
// System.String ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidBluetoothHelper_getDeviceName_m0E9227751B9495FD9663ED7F45071FDC7EE8A8CC (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::setDeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_setDeviceName_mB74E3D56E80269162168322270055DD27F992E77 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4278EFDF6A815B99287F9759CF93000C3324794);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___deviceName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralC4278EFDF6A815B99287F9759CF93000C3324794, L_2, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::WriteCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_WriteCharacteristic_mCC9F6C9493A82B9F5816EDA1CCD808EAC4E1EA00 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral620BA0F93E5976480937E5E5244E0D180B242528);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_0 = ___characteristic0;
		Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0(L_0, NULL);
	}
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_4 = ___characteristic0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidBluetoothHelper_GetAndroidObject_m4C8B33FB25391D447B807AC5269CD4523F5616AC(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___value1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, ((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_7, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var)));
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_7, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral620BA0F93E5976480937E5E5244E0D180B242528, L_6, NULL);
		goto IL_0039;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_8 = V_0;
		Exception_t* L_9;
		L_9 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_WriteCharacteristic_mCC9F6C9493A82B9F5816EDA1CCD808EAC4E1EA00_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0039:
	{
		return;
	}
}
// ArduinoBluetoothAPI.BluetoothDevice ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getBluetoothDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* AndroidBluetoothHelper_getBluetoothDevice_mC4F10FAAB7750E7CDBC42EF6731C7EEB80C2B4D6 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA462BD5FA503E41E25F8369A668912DD6631873E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBEF6242DE86DA7DEEB2349414EB53DF54F441AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3392FCFA175E28A175F0456BB85D8A375F33F04);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* V_1 = NULL;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralA462BD5FA503E41E25F8369A668912DD6631873E, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_3, _stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_8;
		L_8 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_6, _stringLiteralE3392FCFA175E28A175F0456BB85D8A375F33F04, L_7, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_11;
		L_11 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_9, _stringLiteralDBEF6242DE86DA7DEEB2349414EB53DF54F441AD, L_10, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* L_12 = (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE*)il2cpp_codegen_object_new(BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BluetoothDevice__ctor_m7BD4AB998CF3EC5D3058BF75AC75ACFC91E45CB6(L_12, L_5, L_8, L_11, NULL);
		V_1 = L_12;
		goto IL_0057;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_2 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_13 = V_2;
		Exception_t* L_14;
		L_14 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_getBluetoothDevice_mC4F10FAAB7750E7CDBC42EF6731C7EEB80C2B4D6_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0057:
	{
		BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* L_15 = V_1;
		return L_15;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::ReadCharacteristic(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_ReadCharacteristic_m5E94D23BEF6BFAAD2426C568F32FDA6409B959B6 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF99E5B8BB587888B66986A5F3E5F335A15D9698E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_0 = ___characteristic0;
		Utils_ValidateCharacteristic_m977D9F2938A716E2B50D607C399D6604F35033D0(L_0, NULL);
	}
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_4 = ___characteristic0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidBluetoothHelper_GetAndroidObject_m4C8B33FB25391D447B807AC5269CD4523F5616AC(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralF99E5B8BB587888B66986A5F3E5F335A15D9698E, L_3, NULL);
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_0 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_6 = V_0;
		Exception_t* L_7;
		L_7 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_ReadCharacteristic_m5E94D23BEF6BFAAD2426C568F32FDA6409B959B6_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0030:
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::DataWrapperToList2019(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* AndroidBluetoothHelper_DataWrapperToList2019_m3EDDE8D0EEF5F97E28E0C895514EDA7CD76461BB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D12C57A2566D19E1FDA84485FDF66D76346DD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002f;
	}

IL_000a:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		int8_t L_8;
		L_8 = AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B(L_2, _stringLiteralD8D12C57A2566D19E1FDA84485FDF66D76346DD1, L_4, AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_1, (uint8_t)((int32_t)(uint8_t)L_8), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002f:
	{
		int32_t L_10 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_13;
		L_13 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_11, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, L_12, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_14 = V_0;
		return L_14;
	}
}
// System.Collections.Generic.List`1<System.Byte> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::DataWrapperToList2018(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* AndroidBluetoothHelper_DataWrapperToList2018_m508E3ED3BE01545F508A7248F059F1260727E005 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D12C57A2566D19E1FDA84485FDF66D76346DD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002e;
	}

IL_000a:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_2);
		uint8_t L_8;
		L_8 = AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162(L_2, _stringLiteralD8D12C57A2566D19E1FDA84485FDF66D76346DD1, L_4, AndroidJavaObject_Call_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A65BC4E147425F454355D2E28E81D2D18C52162_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_1, L_8, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002e:
	{
		int32_t L_10 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_13;
		L_13 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_11, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, L_12, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.AndroidJavaObject ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::GetAndroidObject(ArduinoBluetoothAPI.BluetoothHelperService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidBluetoothHelper_GetAndroidObject_m3711607549A6B47EA68F64BBD56A12C543D0A58F (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* ___service0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE26D9E81FC20496FFB99BF4B7956CB0384E6021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD23C70D352AA602D5491E7C7FCEB52064B117B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0CF46EA964AC51AC8CC20699B5EA083E8A2D7CC);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* V_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralC0CF46EA964AC51AC8CC20699B5EA083E8A2D7CC, L_0, NULL);
		V_0 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_5 = ___service0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = BluetoothHelperService_getName_m3FA06B4F8CD7D5E1A9CAC294BE7A717821A9CC01_inline(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralBD23C70D352AA602D5491E7C7FCEB52064B117B2, L_4, NULL);
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_7 = ___service0;
		NullCheck(L_7);
		LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* L_8;
		L_8 = BluetoothHelperService_getCharacteristics_m176C3C3835EAC099CB44FC3139447892B4F19B88_inline(L_7, NULL);
		NullCheck(L_8);
		Enumerator_tFF9EC57BE5047ADA0A37A1B8F87F94958F82EB20 L_9;
		L_9 = LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94(L_8, LinkedList_1_GetEnumerator_m578C823A857429572509752546FC746287F27A94_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627((&V_1), Enumerator_Dispose_m6FCF9919ADE2392422400306AFFAD85CE6C06627_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005a_1;
			}

IL_0038_1:
			{
				BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_10;
				L_10 = Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_inline((&V_1), Enumerator_get_Current_m8A8E3F183914A74F89557A55BC4051A9FDCDC2BF_RuntimeMethod_var);
				V_2 = L_10;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
				BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_14 = V_2;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15;
				L_15 = AndroidBluetoothHelper_GetAndroidObject_m4C8B33FB25391D447B807AC5269CD4523F5616AC(L_14, NULL);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_15);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
				NullCheck(L_11);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_11, _stringLiteralAE26D9E81FC20496FFB99BF4B7956CB0384E6021, L_13, NULL);
			}

IL_005a_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9((&V_1), Enumerator_MoveNext_mDE708B98B9FA44D400BB4212CC179174992E35A9_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.AndroidJavaObject ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::GetAndroidObject(ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidBluetoothHelper_GetAndroidObject_m4C8B33FB25391D447B807AC5269CD4523F5616AC (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5A4B8D4A9B0C82D40DA15721B3B921C93B23A930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFB7A8AF84C1ABFA28C0E4E1A7E89C0765AA81C90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC45958BA717A06C63608C259F4CD728B1FA9D528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_GetEnumerator_m800A2AC8C6BCAB6AFB6400E19615EDEF59F24D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BEEB610B1543CDCE112602F81810E6FFA216F94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21D57FDA1A4D833E618621E74CD4F9C33CBF42AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D2148C8BA0442B8B23E03F487A153405F77DCA);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_2 = ___characteristic0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = BluetoothHelperCharacteristic_getName_m98D5C3DD088FA90A8B3C8DF8B44D8A94B600A929_inline(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_4, _stringLiteral0BEEB610B1543CDCE112602F81810E6FFA216F94, L_1, NULL);
		V_0 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_8 = ___characteristic0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = BluetoothHelperCharacteristic_getService_mB79C760324898850B7227C0B8A397B4D2A675040_inline(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_5);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_5, _stringLiteral21D57FDA1A4D833E618621E74CD4F9C33CBF42AE, L_7, NULL);
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_10 = ___characteristic0;
		NullCheck(L_10);
		LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* L_11;
		L_11 = BluetoothHelperCharacteristic_getDescriptors_mBCAE255E2C1BBCF87C61EC0EEE634E3CE6D13BB8_inline(L_10, NULL);
		NullCheck(L_11);
		Enumerator_t7D2864EAF1DCED7CEA6D7D27903F38E4F2D6F012 L_12;
		L_12 = LinkedList_1_GetEnumerator_m800A2AC8C6BCAB6AFB6400E19615EDEF59F24D39(L_11, LinkedList_1_GetEnumerator_m800A2AC8C6BCAB6AFB6400E19615EDEF59F24D39_RuntimeMethod_var);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5A4B8D4A9B0C82D40DA15721B3B921C93B23A930((&V_1), Enumerator_Dispose_m5A4B8D4A9B0C82D40DA15721B3B921C93B23A930_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_0042_1:
			{
				String_t* L_13;
				L_13 = Enumerator_get_Current_mC45958BA717A06C63608C259F4CD728B1FA9D528_inline((&V_1), Enumerator_get_Current_mC45958BA717A06C63608C259F4CD728B1FA9D528_RuntimeMethod_var);
				V_2 = L_13;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
				String_t* L_17 = V_2;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, L_17);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
				NullCheck(L_14);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteral31D2148C8BA0442B8B23E03F487A153405F77DCA, L_16, NULL);
			}

IL_005f_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_mFB7A8AF84C1ABFA28C0E4E1A7E89C0765AA81C90((&V_1), Enumerator_MoveNext_mFB7A8AF84C1ABFA28C0E4E1A7E89C0765AA81C90_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_0;
		return L_19;
	}
}
// ArduinoBluetoothAPI.BluetoothHelperCharacteristic ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::FromJavaObject(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* AndroidBluetoothHelper_FromJavaObject_m15E1DC60F5EA41F5761A99D22C9E2AACD240283E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0C2972A0E12806BDD25F10EEAE5E29FF56227A);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_3 = (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*)il2cpp_codegen_object_new(BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BluetoothHelperCharacteristic__ctor_mC1CFFED5328A02877AF502530441689359950451(L_3, L_2, NULL);
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_7;
		L_7 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_5, _stringLiteral8F0C2972A0E12806BDD25F10EEAE5E29FF56227A, L_6, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_4);
		BluetoothHelperCharacteristic_setService_mE5C5312113973A3505CAD666150826A54B7E58E2_inline(L_4, L_7, NULL);
		return L_4;
	}
}
// ArduinoBluetoothAPI.BluetoothHelperService ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::ServiceFromJavaObject(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* AndroidBluetoothHelper_ServiceFromJavaObject_m0F705D9CEB92AC9266572FAB460725AE81652A76 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44FB7A38E2072F9F69C0308C2A798E81CC868AB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_3 = (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36*)il2cpp_codegen_object_new(BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BluetoothHelperService__ctor_m80A0E268FACE194B04092A6CD867C83563049FD3(L_3, L_2, NULL);
		V_0 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, _stringLiteral44FB7A38E2072F9F69C0308C2A798E81CC868AB4, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_9;
		L_9 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_7, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_8, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_2 = L_9;
		V_3 = 0;
		goto IL_0065;
	}

IL_003c:
	{
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_10 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
		L_17 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_11, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_13, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_18;
		L_18 = AndroidBluetoothHelper_FromJavaObject_m15E1DC60F5EA41F5761A99D22C9E2AACD240283E(L_17, NULL);
		NullCheck(L_10);
		BluetoothHelperService_addCharacteristic_m720742F44EB3807A2268BB3F1CD3CE0A8D61A252(L_10, L_18, NULL);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0065:
	{
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003c;
		}
	}
	{
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_22 = V_0;
		return L_22;
	}
}
// System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::ServiceListFromJavaObject(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* AndroidBluetoothHelper_ServiceListFromJavaObject_mA749E82B471F3B40BF0AE437346CE117A47F612B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8B0A6D40FE8521FA7E7FED397E5427999FB075E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF27FED532CABB81B6E83530EEF04919AD9BBB49E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t358B789ECF7E13934462A57CB614F3AA650F3981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* L_0 = (List_1_t358B789ECF7E13934462A57CB614F3AA650F3981*)il2cpp_codegen_object_new(List_1_t358B789ECF7E13934462A57CB614F3AA650F3981_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF27FED532CABB81B6E83530EEF04919AD9BBB49E(L_0, List_1__ctor_mF27FED532CABB81B6E83530EEF04919AD9BBB49E_RuntimeMethod_var);
		V_0 = L_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_2, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0044;
	}

IL_001b:
	{
		List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* L_4 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ___jo0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_5, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* L_12;
		L_12 = AndroidBluetoothHelper_ServiceFromJavaObject_m0F705D9CEB92AC9266572FAB460725AE81652A76(L_11, NULL);
		NullCheck(L_4);
		List_1_Add_m8B0A6D40FE8521FA7E7FED397E5427999FB075E4_inline(L_4, L_12, List_1_Add_m8B0A6D40FE8521FA7E7FED397E5427999FB075E4_RuntimeMethod_var);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::FromJavaBluetoothDevicesList(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* AndroidBluetoothHelper_FromJavaBluetoothDevicesList_m7521B1EE307DF8AABF215627CE2C088DC80AD372 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m460EC2796E4EEDC2B508DEC1C8F85106EFA9F154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBEF6242DE86DA7DEEB2349414EB53DF54F441AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3392FCFA175E28A175F0456BB85D8A375F33F04);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* V_4 = NULL;
	int32_t V_5 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___list0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_2;
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_3 = (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*)il2cpp_codegen_object_new(LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5(L_3, LinkedList_1__ctor_m1EE5E9CD36F52B9C14D970CF87A18203BCDB58B5_RuntimeMethod_var);
		V_4 = L_3;
		V_5 = 0;
		goto IL_0080;
	}

IL_001d:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___list0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = V_5;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
		L_10 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_4, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_6, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_13;
		L_13 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_11, _stringLiteralB9B0A34896DAB572428553AD70D838992D00A79C, L_12, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = L_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_16;
		L_16 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_14, _stringLiteralE3392FCFA175E28A175F0456BB85D8A375F33F04, L_15, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_2 = L_16;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_18;
		L_18 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_14, _stringLiteralDBEF6242DE86DA7DEEB2349414EB53DF54F441AD, L_17, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_3 = L_18;
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_19 = V_4;
		String_t* L_20 = V_1;
		String_t* L_21 = V_2;
		int32_t L_22 = V_3;
		BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* L_23 = (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE*)il2cpp_codegen_object_new(BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		BluetoothDevice__ctor_m7BD4AB998CF3EC5D3058BF75AC75ACFC91E45CB6(L_23, L_20, L_21, L_22, NULL);
		NullCheck(L_19);
		LinkedListNode_1_t2CCAA177AA11D37ADA72F75EC63E76B4BBF1C160* L_24;
		L_24 = LinkedList_1_AddLast_m460EC2796E4EEDC2B508DEC1C8F85106EFA9F154(L_19, L_23, LinkedList_1_AddLast_m460EC2796E4EEDC2B508DEC1C8F85106EFA9F154_RuntimeMethod_var);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0080:
	{
		int32_t L_26 = V_5;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_001d;
		}
	}
	{
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_28 = V_4;
		return L_28;
	}
}
// System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getPairedDevicesList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* AndroidBluetoothHelper_getPairedDevicesList_m90066201ED879B8ADB3915A8930FBFA1057A0E20 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527848B33C275DA369FA980C630608E3BF7C7852);
		s_Il2CppMethodInitialized = true;
	}
	LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* V_0 = NULL;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral527848B33C275DA369FA980C630608E3BF7C7852, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_3;
		L_3 = AndroidBluetoothHelper_FromJavaBluetoothDevicesList_m7521B1EE307DF8AABF215627CE2C088DC80AD372(L_2, NULL);
		V_0 = L_3;
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_1 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_4 = V_1;
		Exception_t* L_5;
		L_5 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_getPairedDevicesList_m90066201ED879B8ADB3915A8930FBFA1057A0E20_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0026:
	{
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_6 = V_0;
		return L_6;
	}
}
// System.Int32 ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidBluetoothHelper_getId_m6A9A2E4AC1FE2745D01D4F8122248380253B9688 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBFA7F41AA1206FFC1D57C437B2C8F2C4D2F797D);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, _stringLiteralBBFA7F41AA1206FFC1D57C437B2C8F2C4D2F797D, L_1, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<ArduinoBluetoothAPI.BluetoothHelperService> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::getGattServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* AndroidBluetoothHelper_getGattServices_mCEED72432DD098C24A28B6494AD66F11A2BC70AE (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18EC7D026E94EC0E2A2F82F674281F2F0B5615CB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* V_0 = NULL;
	AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bluetoothHelper_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral18EC7D026E94EC0E2A2F82F674281F2F0B5615CB, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* L_3;
		L_3 = AndroidBluetoothHelper_ServiceListFromJavaObject_mA749E82B471F3B40BF0AE437346CE117A47F612B(L_2, NULL);
		V_0 = L_3;
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(UnityEngine.AndroidJavaException)
		V_1 = ((AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)IL2CPP_GET_ACTIVE_EXCEPTION(AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*));
		AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_4 = V_1;
		Exception_t* L_5;
		L_5 = AndroidBluetoothHelper_findException_mADAC5129FC26395683CE269290F14BACFF6FEC51(__this, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidBluetoothHelper_getGattServices_mCEED72432DD098C24A28B6494AD66F11A2BC70AE_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0026:
	{
		List_1_t358B789ECF7E13934462A57CB614F3AA650F3981* L_6 = V_0;
		return L_6;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_0_m585DAB9DC71AA544BDD4E3BF7631439BE952A232 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_0 = ((BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*)__this)->___ReceivedData_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_0);
		Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E(L_0, L_1, Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
		BluetoothHelper_InvokeOnDataReceived_mF18FB3D9D7E954B47A34A11193E44EAE0A08BD74(__this, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_1(System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_1_m8B5D70BF59364658804B126313558C26CA1BB7DC (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method) 
{
	{
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_0 = ___nearbyDevices0;
		BluetoothHelper_InvokeOnScanEnded_m6F1FBB8DC93A1F9EF952302B00D32F5A47E8A681(__this, L_0, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_2(ArduinoBluetoothAPI.BluetoothHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_2_m9935B1AACE68E113EC6D2269B93AFD016D06ACEC (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(21 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnConnected() */, __this);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_3(ArduinoBluetoothAPI.BluetoothHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_3_m9EDD9F98274316A727EE30FD725A72C96C96EB19 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(22 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnConnectionFailed() */, __this);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_4(ArduinoBluetoothAPI.BluetoothHelper,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_4_m58A0CD94A697B9F073F67ABEFB9C64AA03808D04 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___service1;
		VirtualActionInvoker1< String_t* >::Invoke(23 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnServiceNotFound(System.String) */, __this, L_0);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_5(ArduinoBluetoothAPI.BluetoothHelper,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_5_mA47EA76C292BAA06E0C8AE33C50017CA6DA3E9BA (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___service1;
		String_t* L_1 = ___characteristic2;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(24 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnCharacteristicNotFound(System.String,System.String) */, __this, L_0, L_1);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_6(ArduinoBluetoothAPI.BluetoothHelper,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_6_m6C231118EA2A33326FA5885BB693302B54669987 (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___service1;
		String_t* L_1 = ___characteristic2;
		String_t* L_2 = ___descriptor3;
		VirtualActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnDescriptorNotFound(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper::<getAndroidInstance>b__7_7(ArduinoBluetoothAPI.BluetoothHelper,System.Byte[],ArduinoBluetoothAPI.BluetoothHelperCharacteristic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBluetoothHelper_U3CgetAndroidInstanceU3Eb__7_7_m62BBD6B59328F29564555A8CC815EB1B912A516B (AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value1;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_1 = ___characteristic2;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* >::Invoke(26 /* System.Void ArduinoBluetoothAPI.BluetoothHelper::InvokeOnCharacteristicChanged(System.Byte[],ArduinoBluetoothAPI.BluetoothHelperCharacteristic) */, __this, L_0, L_1);
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
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_Multicast(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* currentDelegate = reinterpret_cast<CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289*>(delegatesToInvoke[i]);
		typedef List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*FunctionPointerType) (RuntimeObject*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___jo0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_Open(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	typedef List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*FunctionPointerType) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___jo0, method);
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenStaticInvoker(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* >::Invoke(__this->___method_ptr_0, method, NULL, ___jo0);
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_ClosedStaticInvoker(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___jo0);
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenVirtual(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* >::Invoke(il2cpp_codegen_method_get_slot(method), ___jo0);
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenInterface(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___jo0);
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenGenericVirtual(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* >::Invoke(method, ___jo0);
}
List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenGenericInterface(CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* >::Invoke(method, ___jo0);
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharWrapperToListPtr__ctor_mFB53D072FFE096B65450312DBC802289E4B391AA (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_Multicast;
}
// System.Collections.Generic.List`1<System.Byte> ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/CharWrapperToListPtr::Invoke(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	typedef List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*FunctionPointerType) (RuntimeObject*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___jo0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onDataReceived(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onDataReceived_mD59235474AC44C6334080539593DD45E6369650F (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* V_0 = NULL;
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* V_1 = NULL;
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* V_2 = NULL;
	{
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_0 = __this->___onDataReceived_4;
		V_0 = L_0;
	}

IL_0007:
	{
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_1 = V_0;
		V_1 = L_1;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_2 = V_1;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)CastclassSealed((RuntimeObject*)L_4, DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var));
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4** L_5 = (&__this->___onDataReceived_4);
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_6 = V_2;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_7 = V_1;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_8;
		L_8 = InterlockedCompareExchangeImpl<DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*>(L_5, L_6, L_7);
		V_0 = L_8;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_9 = V_0;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_10 = V_1;
		if ((!(((RuntimeObject*)(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)L_9) == ((RuntimeObject*)(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onDataReceived(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onDataReceived_mABDEDDF40746C4216C6848F0F1121AC14A1007D6 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* V_0 = NULL;
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* V_1 = NULL;
	DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* V_2 = NULL;
	{
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_0 = __this->___onDataReceived_4;
		V_0 = L_0;
	}

IL_0007:
	{
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_1 = V_0;
		V_1 = L_1;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_2 = V_1;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)CastclassSealed((RuntimeObject*)L_4, DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4_il2cpp_TypeInfo_var));
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4** L_5 = (&__this->___onDataReceived_4);
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_6 = V_2;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_7 = V_1;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_8;
		L_8 = InterlockedCompareExchangeImpl<DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*>(L_5, L_6, L_7);
		V_0 = L_8;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_9 = V_0;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_10 = V_1;
		if ((!(((RuntimeObject*)(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)L_9) == ((RuntimeObject*)(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onScanEnded(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onScanEnded_m544AA07CD42D86D085FF59CDF31A5D0130098911 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* V_0 = NULL;
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* V_1 = NULL;
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* V_2 = NULL;
	{
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_0 = __this->___onScanEnded_5;
		V_0 = L_0;
	}

IL_0007:
	{
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_1 = V_0;
		V_1 = L_1;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_2 = V_1;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)CastclassSealed((RuntimeObject*)L_4, NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var));
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948** L_5 = (&__this->___onScanEnded_5);
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_6 = V_2;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_7 = V_1;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_8;
		L_8 = InterlockedCompareExchangeImpl<NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*>(L_5, L_6, L_7);
		V_0 = L_8;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_9 = V_0;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_10 = V_1;
		if ((!(((RuntimeObject*)(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)L_9) == ((RuntimeObject*)(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onScanEnded(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onScanEnded_mBBF82D612D1DB0EFAD6FE55BB0B482664D1147A7 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* V_0 = NULL;
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* V_1 = NULL;
	NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* V_2 = NULL;
	{
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_0 = __this->___onScanEnded_5;
		V_0 = L_0;
	}

IL_0007:
	{
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_1 = V_0;
		V_1 = L_1;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_2 = V_1;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)CastclassSealed((RuntimeObject*)L_4, NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948_il2cpp_TypeInfo_var));
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948** L_5 = (&__this->___onScanEnded_5);
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_6 = V_2;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_7 = V_1;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_8;
		L_8 = InterlockedCompareExchangeImpl<NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*>(L_5, L_6, L_7);
		V_0 = L_8;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_9 = V_0;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_10 = V_1;
		if ((!(((RuntimeObject*)(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)L_9) == ((RuntimeObject*)(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onConnected(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onConnected_m422C709753C744F327116A0A1A716EAA0EF7369B (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___onConnected_6;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___onConnected_6);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onConnected(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onConnected_mA6EB7255A53E915E9682C1BC0E4F8CB0F1D03629 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___onConnected_6;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___onConnected_6);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onConnectionFailed(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onConnectionFailed_m6629211AA26AD47FBFE405EF3ACA27B7501885DE (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___onConnectionFailed_7;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___onConnectionFailed_7);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onConnectionFailed(ArduinoBluetoothAPI.BluetoothHelper/BluetoothEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onConnectionFailed_mAD66911066A135B5E1BAC535C1690379C0A2787A (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_0 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_1 = NULL;
	BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* V_2 = NULL;
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___onConnectionFailed_7;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = V_0;
		V_1 = L_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_2 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)CastclassSealed((RuntimeObject*)L_4, BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520_il2cpp_TypeInfo_var));
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520** L_5 = (&__this->___onConnectionFailed_7);
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_6 = V_2;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_7 = V_1;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_9 = V_0;
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_9) == ((RuntimeObject*)(BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onServiceNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onServiceNotFound_m2EAA209CBE43E8665658EBAD5F4450349E5790C9 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_0 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_1 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_2 = NULL;
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_0 = __this->___onServiceNotFound_8;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_1 = V_0;
		V_1 = L_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_2 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)CastclassSealed((RuntimeObject*)L_4, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var));
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11** L_5 = (&__this->___onServiceNotFound_8);
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_6 = V_2;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_7 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_9 = V_0;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_9) == ((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onServiceNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothServiceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onServiceNotFound_mF5494E854184B2624310ADA1B50284374BC52397 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_0 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_1 = NULL;
	BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* V_2 = NULL;
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_0 = __this->___onServiceNotFound_8;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_1 = V_0;
		V_1 = L_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_2 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)CastclassSealed((RuntimeObject*)L_4, BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11_il2cpp_TypeInfo_var));
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11** L_5 = (&__this->___onServiceNotFound_8);
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_6 = V_2;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_7 = V_1;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_9 = V_0;
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_9) == ((RuntimeObject*)(BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onCharacteristicNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onCharacteristicNotFound_mB33DB9AB9574CEED5C3C817F8680B0A709FACA2E (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_0 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_1 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_2 = NULL;
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_0 = __this->___onCharacteristicNotFound_9;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_1 = V_0;
		V_1 = L_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_2 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)CastclassSealed((RuntimeObject*)L_4, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var));
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283** L_5 = (&__this->___onCharacteristicNotFound_9);
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_6 = V_2;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_7 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_9 = V_0;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_9) == ((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onCharacteristicNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothCharacteristicEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onCharacteristicNotFound_m713CD385D0F565A57B07D711ED18254D83FA0794 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_0 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_1 = NULL;
	BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* V_2 = NULL;
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_0 = __this->___onCharacteristicNotFound_9;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_1 = V_0;
		V_1 = L_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_2 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)CastclassSealed((RuntimeObject*)L_4, BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283_il2cpp_TypeInfo_var));
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283** L_5 = (&__this->___onCharacteristicNotFound_9);
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_6 = V_2;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_7 = V_1;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_9 = V_0;
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_9) == ((RuntimeObject*)(BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onDescriptorNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onDescriptorNotFound_m011FD671585F6A02767153C59EECB5CF76BD4C9F (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* V_0 = NULL;
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* V_1 = NULL;
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* V_2 = NULL;
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_0 = __this->___onDescriptorNotFound_10;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_1 = V_0;
		V_1 = L_1;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_2 = V_1;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)CastclassSealed((RuntimeObject*)L_4, BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var));
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A** L_5 = (&__this->___onDescriptorNotFound_10);
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_6 = V_2;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_7 = V_1;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_9 = V_0;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)L_9) == ((RuntimeObject*)(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onDescriptorNotFound(ArduinoBluetoothAPI.BluetoothHelper/BluetoothDescriptorEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onDescriptorNotFound_m0B2904F67A79B93001E9A5D1CD0559D6568778BF (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* V_0 = NULL;
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* V_1 = NULL;
	BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* V_2 = NULL;
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_0 = __this->___onDescriptorNotFound_10;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_1 = V_0;
		V_1 = L_1;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_2 = V_1;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)CastclassSealed((RuntimeObject*)L_4, BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A_il2cpp_TypeInfo_var));
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A** L_5 = (&__this->___onDescriptorNotFound_10);
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_6 = V_2;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_7 = V_1;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_9 = V_0;
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)L_9) == ((RuntimeObject*)(BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::add_onCharacteristicChanged(ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_onCharacteristicChanged_m646E0F440C3BDD83DA363A17787BE2C334B161B6 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_0 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_1 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_2 = NULL;
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_0 = __this->___onCharacteristicChanged_11;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_1 = V_0;
		V_1 = L_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_2 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)CastclassSealed((RuntimeObject*)L_4, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var));
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7** L_5 = (&__this->___onCharacteristicChanged_11);
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_6 = V_2;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_7 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_9 = V_0;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_9) == ((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::remove_onCharacteristicChanged(ArduinoBluetoothAPI.BluetoothHelper/BluetoothLEDataEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_onCharacteristicChanged_m8341F09546C0414A3B78CD809C18F20575915DDB (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_0 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_1 = NULL;
	BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* V_2 = NULL;
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_0 = __this->___onCharacteristicChanged_11;
		V_0 = L_0;
	}

IL_0007:
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_1 = V_0;
		V_1 = L_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_2 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)CastclassSealed((RuntimeObject*)L_4, BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7_il2cpp_TypeInfo_var));
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7** L_5 = (&__this->___onCharacteristicChanged_11);
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_6 = V_2;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_7 = V_1;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_8;
		L_8 = InterlockedCompareExchangeImpl<BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*>(L_5, L_6, L_7);
		V_0 = L_8;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_9 = V_0;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_10 = V_1;
		if ((!(((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_9) == ((RuntimeObject*)(BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::.ctor(ArduinoBluetoothAPI.Android.AndroidBluetoothHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback__ctor_m12C81552D0BAE988FA2A30C08C64DAD4FA39AD57 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* ___helper0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF526759D4641008EF5A7851CE6F73AA945A8FEC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralF526759D4641008EF5A7851CE6F73AA945A8FEC3, NULL);
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_0 = ___helper0;
		__this->___helper_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___helper_12), (void*)L_0);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnDataReceived(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnDataReceived_mE3D2B54B31034EECD29B1B846F4DFBC4CE34581D (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	{
		CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* L_0 = ((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___DataWrapperToList_24;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___jo0;
		NullCheck(L_0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2;
		L_2 = CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_inline(L_0, L_1, NULL);
		V_0 = L_2;
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_3 = __this->___onDataReceived_4;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* L_4 = __this->___onDataReceived_4;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_5, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		NullCheck(L_4);
		DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_inline(L_4, L_6, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnConnected_m399486012BDAF3A62BCE2A6696222C0027C115FA (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, const RuntimeMethod* method) 
{
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___onConnected_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = __this->___onConnected_6;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_2 = __this->___helper_12;
		NullCheck(L_1);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnConnectionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnConnectionFailed_m37128F42580DC044B9A134675B631A3CAE261FB7 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, const RuntimeMethod* method) 
{
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_0 = __this->___onConnectionFailed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* L_1 = __this->___onConnectionFailed_7;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_2 = __this->___helper_12;
		NullCheck(L_1);
		BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnScanEnded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnScanEnded_m897054D4F1ADEC5E414B8D156BC0D13C64D7BC0C (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___list0, const RuntimeMethod* method) 
{
	LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* V_0 = NULL;
	{
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_0 = __this->___onScanEnded_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___list0;
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_2;
		L_2 = AndroidBluetoothHelper_FromJavaBluetoothDevicesList_m7521B1EE307DF8AABF215627CE2C088DC80AD372(L_1, NULL);
		V_0 = L_2;
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* L_3 = __this->___onScanEnded_5;
		LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* L_4 = V_0;
		NullCheck(L_3);
		NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_inline(L_3, L_4, NULL);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnServiceNotFound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnServiceNotFound_mF84B40EB680F6952B7411864EBE52BBC1480D4DA (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, String_t* ___service0, const RuntimeMethod* method) 
{
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_0 = __this->___onServiceNotFound_8;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* L_1 = __this->___onServiceNotFound_8;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_2 = __this->___helper_12;
		String_t* L_3 = ___service0;
		NullCheck(L_1);
		BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_inline(L_1, L_2, L_3, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnCharacteristicNotFound(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnCharacteristicNotFound_m12F448A4897A463E658395AF674AD3E520BEB04E (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, String_t* ___service0, String_t* ___characteristic1, const RuntimeMethod* method) 
{
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_0 = __this->___onCharacteristicNotFound_9;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* L_1 = __this->___onCharacteristicNotFound_9;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_2 = __this->___helper_12;
		String_t* L_3 = ___service0;
		String_t* L_4 = ___characteristic1;
		NullCheck(L_1);
		BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnDescriptorNotFound(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnDescriptorNotFound_mF920C10B6C8406DDA297C5260A7C37EC86B2B859 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, String_t* ___service0, String_t* ___characteristic1, String_t* ___descriptor2, const RuntimeMethod* method) 
{
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_0 = __this->___onDescriptorNotFound_10;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* L_1 = __this->___onDescriptorNotFound_10;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_2 = __this->___helper_12;
		String_t* L_3 = ___service0;
		String_t* L_4 = ___characteristic1;
		String_t* L_5 = ___descriptor2;
		NullCheck(L_1);
		BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_inline(L_1, L_2, L_3, L_4, L_5, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback::OnCharacteristicChanged(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_OnCharacteristicChanged_m056820D725C4B431283CD5CF06385AF687B73388 (AndroidPluginCallback_tDC862FFD5587F97A38F41D66FF25B1EF8FDCC847* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___characteristic1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	{
		CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* L_0 = ((AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_StaticFields*)il2cpp_codegen_static_fields_for(AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6_il2cpp_TypeInfo_var))->___DataWrapperToList_24;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___jo0;
		NullCheck(L_0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2;
		L_2 = CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_inline(L_0, L_1, NULL);
		V_0 = L_2;
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_3 = __this->___onCharacteristicChanged_11;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* L_4 = __this->___onCharacteristicChanged_11;
		AndroidBluetoothHelper_t351F13A36B8F5325DF6BB7872232D8AF2E0C8CD6* L_5 = __this->___helper_12;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_6, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___characteristic1;
		BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* L_9;
		L_9 = AndroidBluetoothHelper_FromJavaObject_m15E1DC60F5EA41F5761A99D22C9E2AACD240283E(L_8, NULL);
		NullCheck(L_4);
		BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_inline(L_4, L_5, L_7, L_9, NULL);
	}

IL_0031:
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
void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_Multicast(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* currentDelegate = reinterpret_cast<DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_Open(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_OpenStaticInvoker(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_ClosedStaticInvoker(DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4 (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedListener__ctor_m32FD588395FC03A8F8E73C91861293C9A56C21FF (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_Multicast;
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/DataReceivedListener::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_Multicast(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* currentDelegate = reinterpret_cast<NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___nearbyDevices0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_Open(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___nearbyDevices0, method);
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenStaticInvoker(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(__this->___method_ptr_0, method, NULL, ___nearbyDevices0);
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_ClosedStaticInvoker(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___nearbyDevices0);
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenVirtual(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___nearbyDevices0);
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenInterface(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___nearbyDevices0);
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenGenericVirtual(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___nearbyDevices0);
}
void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenGenericInterface(NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___nearbyDevices0);
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearByDevicesScanListener__ctor_mC7CCA74168EC07B51CC5335B9D96B180EDF1DA26 (NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_Multicast;
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/AndroidPluginCallback/NearByDevicesScanListener::Invoke(System.Collections.Generic.LinkedList`1<ArduinoBluetoothAPI.BluetoothDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9 (NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___nearbyDevices0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3A27471853729FC95B192B4AA8676285304FC5F8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F* L_0 = (U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F*)il2cpp_codegen_object_new(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m291959AD22CE5ECCF78555C39B22293B0B578C31(L_0, NULL);
		((U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m291959AD22CE5ECCF78555C39B22293B0B578C31 (U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.SByte ArduinoBluetoothAPI.Android.AndroidBluetoothHelper/<>c::<SendData>b__13_0(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t U3CU3Ec_U3CSendDataU3Eb__13_0_m6A1FD7E3B6AE0F59DB29053E45ED74744D30999E (U3CU3Ec_t6F5F089D815849E5F11605C34B03C6A4DAB1C93F* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___b0;
		return ((int8_t)L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDevice_set_DeviceAddress_mCD4ED117A7E5C6E89AAB56D4F81D0F937577C627_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeviceAddressU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceAddressU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDevice_set_DeviceName_m9871BC8F4F488EC2E525B4CBA218D607FC0FDC96_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeviceNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDevice_set_Rssi_m4FA15298FAFE7A9D1AEA4F886616B621247C7DDA_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CRssiU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothDevice_get_DeviceAddress_mD8FC9CBF9DE4933017B42B472D08124BDD3CC1B9_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeviceAddressU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothDevice_get_DeviceName_m9401C4BA027FE2F1E2FA4D279C74CA5015698150_inline (BluetoothDevice_t9FAD876DB6E91D3CDC43C7B990FBF77540DD70FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeviceNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothEvents_Invoke_mECE13C095CDCDFEDD568BF626CC580CFFC545052_inline (BluetoothEvents_tFDE4D0CE51B35DA95E17396E036B0E39C35AA520* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothServiceEvent_Invoke_m74E7E1AE31916336255301CE4F267DC5E23E99CF_inline (BluetoothServiceEvent_t1C42C0930F6A38A4761B604A58246EFA956EDA11* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___service1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothCharacteristicEvent_Invoke_m559FF71E5197DDEBBE8310298114923130AEE4D7_inline (BluetoothCharacteristicEvent_t21D66EC91187311706491FE33AF8FF60BEAAB283* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___service1, ___characteristic2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothDescriptorEvent_Invoke_m717E2C76EAEE14A1841A0880B968BF463E5B4532_inline (BluetoothDescriptorEvent_t6FCD451FD1CB896972EC92DD735127D51197FF1A* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, String_t* ___service1, String_t* ___characteristic2, String_t* ___descriptor3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___service1, ___characteristic2, ___descriptor3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothLEDataEvent_Invoke_m1F07C63BBD5FCD36BEDCC7D42818C75F306AA0C7_inline (BluetoothLEDataEvent_t9D6E644653B32AF47A1EC889AFCE7A15F59856D7* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* ___characteristic2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___value1, ___characteristic2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothScanEvents_Invoke_m7BBA72FE2D005BE99203AE10FCF5AC6F6B272467_inline (BluetoothScanEvents_t77ED7CFE9B03443AC75007A5A6D2C29538A2AB4C* __this, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A* ___helper0, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BluetoothHelper_tEA5BF23C3475EDE47052DE8119AEEC2A6240FD4A*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___helper0, ___nearbyDevices1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BluetoothHelperCharacteristic_setService_mE5C5312113973A3505CAD666150826A54B7E58E2_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, String_t* ___service0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___service0;
		__this->___service_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___service_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothHelperCharacteristic_getName_m98D5C3DD088FA90A8B3C8DF8B44D8A94B600A929_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothHelperCharacteristic_getService_mB79C760324898850B7227C0B8A397B4D2A675040_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___service_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void voidByteDelegate_Invoke_mC2A72FC254C1EF5F2DC447F6D6ECAECAED71ABEE_inline (voidByteDelegate_tF0354C629AF6E292C8D05730A29D4EC7546CC00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* byteByteDelegate_Invoke_mBD6DBA518CDB97F9F7DF6074E1B20BD376B76B25_inline (byteByteDelegate_t1ED2871859B5C50A05D8F706FF22A51B8CF94D84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buff0, const RuntimeMethod* method) 
{
	typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buff0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* AndroidStreamManagerProxy_getIStreamManager_m20232F894D968B1DC6CDA65898D244A9FE8D542C_inline (AndroidStreamManagerProxy_t224B17131945E15CBC08978276091EDB93A703BF* __this, const RuntimeMethod* method) 
{
	{
		IStreamManager_tE1BB02207BB405E868F36282CB6A0CFFEFDBD944* L_0 = __this->___androidStreamManager_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* BluetoothHelperService_getCharacteristics_m176C3C3835EAC099CB44FC3139447892B4F19B88_inline (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, const RuntimeMethod* method) 
{
	{
		LinkedList_1_t5F317A851C1C1162AB64BA6604A4DD3E065512FF* L_0 = __this->___characteristics_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BluetoothHelperService_getName_m3FA06B4F8CD7D5E1A9CAC294BE7A717821A9CC01_inline (BluetoothHelperService_t096D9F76D00E053D0F2E4B845FCC2C4C059C5C36* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* BluetoothHelperCharacteristic_getDescriptors_mBCAE255E2C1BBCF87C61EC0EEE634E3CE6D13BB8_inline (BluetoothHelperCharacteristic_t5A952E3D133F64C52D441971855004D45B10ECC8* __this, const RuntimeMethod* method) 
{
	{
		LinkedList_1_tD9753195C54A27A9B2E5DDB7657142508EA96686* L_0 = __this->___descriptors_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CharWrapperToListPtr_Invoke_m9F47B4577B91EB8E691C0B1E3D0BC55076F38A3C_inline (CharWrapperToListPtr_tDD7BB8EDD35542A1D5A3AA3150CD10F990297289* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___jo0, const RuntimeMethod* method) 
{
	typedef List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*FunctionPointerType) (RuntimeObject*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___jo0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataReceivedListener_Invoke_mBD3FA4DF89AF004C81906BC7B0CE736AA44AB8EA_inline (DataReceivedListener_t88B117C2E0D1C82C8CA325054E553A9A8C75F5C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NearByDevicesScanListener_Invoke_mB250F71F03CA329F7879CB5DF9A4A504371E9FF9_inline (NearByDevicesScanListener_t3D82C260E9AB45A21D40F109B9E21AC7E6326948* __this, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791* ___nearbyDevices0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LinkedList_1_tA6A25EB4B676CAB6A01774330A638B975B46B791*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___nearbyDevices0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mCD39BA1871E5D5BE52D8AA0B27886D9B5B10BBF9_gshared_inline (Enumerator_tC25D6382B2C7E2606E12FC6637F714A98D52DE22* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___item0;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
