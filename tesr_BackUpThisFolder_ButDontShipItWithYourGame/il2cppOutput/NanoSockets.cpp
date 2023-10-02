#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069;
IL2CPP_EXTERN_C String_t* _stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4BE65B6F1710D457344CD3459B2FF2272C0F4D0E 
{
};
struct Il2CppArrayBounds;

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

// NanoSockets.UDP
struct UDP_t8F24AAE5C64860650E21D6AB8397B4FE1DF09038  : public RuntimeObject
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

// NanoSockets.Address
struct Address_t0C64043894DC43092287210A04CAD369B08FDBF3 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt64 NanoSockets.Address::_address0
					uint64_t ____address0_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ____address0_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ____address1_1_OffsetPadding[8];
					// System.UInt64 NanoSockets.Address::_address1
					uint64_t ____address1_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ____address1_1_OffsetPadding_forAlignmentOnly[8];
					uint64_t ____address1_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Port_2_OffsetPadding[16];
					// System.UInt16 NanoSockets.Address::Port
					uint16_t ___Port_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Port_2_OffsetPadding_forAlignmentOnly[16];
					uint16_t ___Port_2_forAlignmentOnly;
				};
			};
		};
		uint8_t Address_t0C64043894DC43092287210A04CAD369B08FDBF3__padding[24];
	};
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// NanoSockets.Socket
struct Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 NanoSockets.Socket::handle
			int64_t ___handle_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___handle_0_forAlignmentOnly;
		};
	};
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// NanoSockets.Status
struct Status_t45C4B4BBD57041D59A667D0EE4709923472BB5C9 
{
	// System.Int32 NanoSockets.Status::value__
	int32_t ___value___2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean NanoSockets.Socket::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* __this, const RuntimeMethod* method) ;
// System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___other0, const RuntimeMethod* method) ;
// System.Boolean NanoSockets.Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 NanoSockets.Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// NanoSockets.Status NanoSockets.UDP::GetIP(NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_m0A5E0BCF613843E51A389A9F697B49B426D69A15 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___ip1, int32_t ___ipLength2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String NanoSockets.Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_initialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL nanosockets_create(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C void CDECL nanosockets_destroy(int64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_bind(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_set_nonblocking(int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_send(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_receive(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get(int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_set_ip(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL nanosockets_address_get_ip(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
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
// System.Boolean NanoSockets.Socket::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___handle_0;
		return (bool)((((int64_t)L_0) > ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 NanoSockets.Socket::op_Implicit(NanoSockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Socket_op_Implicit_m7BC3EDC627F0972C760B8B1D054DE2FC58E62CC2 (Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 ___socket0, const RuntimeMethod* method) 
{
	{
		Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 L_0 = ___socket0;
		int64_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
// NanoSockets.Socket NanoSockets.Socket::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 Socket_op_Implicit_m2AADAB5844E14B52F46AE1DC1A572D9B16EF5603 (int64_t ___handle0, const RuntimeMethod* method) 
{
	Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___handle0;
		(&V_0)->___handle_0 = L_0;
		Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 L_1 = V_0;
		return L_1;
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
// System.Boolean NanoSockets.Address::Equals(NanoSockets.Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___other0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->____address0_0;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_1 = ___other0;
		uint64_t L_2 = L_1.____address0_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_3 = __this->____address1_1;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_4 = ___other0;
		uint64_t L_5 = L_4.____address1_1;
		if ((!(((uint64_t)L_3) == ((uint64_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_6 = __this->___Port_2;
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_7 = ___other0;
		uint16_t L_8 = L_7.___Port_2;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6_AdjustorThunk (RuntimeObject* __this, Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___other0, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean NanoSockets.Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)((Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)UnBox(L_1, Address_t0C64043894DC43092287210A04CAD369B08FDBF3_il2cpp_TypeInfo_var))));
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_2 = V_0;
		bool L_3;
		L_3 = Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 NanoSockets.Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (&__this->____address0_0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (&__this->____address1_1);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		uint16_t* L_4 = (&__this->___Port_2);
		int32_t L_5;
		L_5 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_4, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1)), ((int32_t)31))), L_3)), ((int32_t)31))), L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F(_thisAdjusted, method);
	return _returnValue;
}
// System.String NanoSockets.Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A);
		s_Il2CppMethodInitialized = true;
	}
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_0 = (*(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*)__this);
		V_0 = L_0;
		V_1 = ((int32_t)64);
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_1, NULL);
		V_2 = L_2;
		intptr_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = UDP_GetIP_m0A5E0BCF613843E51A389A9F697B49B426D69A15((&V_0), L_3, L_4, NULL);
		intptr_t L_6 = V_2;
		String_t* L_7;
		L_7 = Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE(L_6, NULL);
		V_3 = L_7;
		intptr_t L_8 = V_2;
		Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_8, NULL);
		String_t* L_9 = V_3;
		uint16_t L_10 = __this->___Port_2;
		uint16_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral668A0814576A84F2A858D64078CA645AFEC4008A, _stringLiteral557FB10169DCBA7723885B2E54E8A0318602F069, L_9, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Address_t0C64043894DC43092287210A04CAD369B08FDBF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Address_t0C64043894DC43092287210A04CAD369B08FDBF3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NanoSockets.Status NanoSockets.UDP::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Initialize_m974288531A2E98B24DA7ABEB9B9660BC5478DFDF (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_initialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_initialize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int64 NanoSockets.UDP::Create(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UDP_Create_mB8E02749E2F906B084D65AEAA4237EAFFD3D5511 (int32_t ___sendBufferSize0, int32_t ___receiveBufferSize1, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_create)(___sendBufferSize0, ___receiveBufferSize1);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___sendBufferSize0, ___receiveBufferSize1);
	#endif

	return returnValue;
}
// System.Void NanoSockets.UDP::Destroy(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Destroy_mE612ACA3FADC31249F47E023FC44463E7B9B31D9 (int64_t* ___socket0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	reinterpret_cast<PInvokeFunc>(nanosockets_destroy)(___socket0);
	#else
	il2cppPInvokeFunc(___socket0);
	#endif

}
// System.Int32 NanoSockets.UDP::Bind(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Bind_m30068999BD8A3D8AC1C429C6BF513C21F8DBB071 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_bind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_bind)(___socket0, ___address1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetNonBlocking(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetNonBlocking_m6DDBB60E445125A636F166D07C5B21CA0AE50AFA (int64_t ___socket0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_set_nonblocking", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_set_nonblocking)(___socket0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Send(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Send_mB4E77C3253E93BA7E891736C5E44FA2A04F8ACDA (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, uint8_t* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_send)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// System.Int32 NanoSockets.UDP::Receive(System.Int64,NanoSockets.Address*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_Receive_mF91410B929B04D7FC8F04ECD7F81B4F4E0BB1DD9 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, uint8_t* ___buffer2, int32_t ___bufferLength3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_receive", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_receive)(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1, ___buffer2, ___bufferLength3);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetAddress(System.Int64,NanoSockets.Address&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetAddress_m68191BD29DB49C1C417B4D58C12A85D9A6B71B16 (int64_t ___socket0, Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int64_t, Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int64_t) + sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get)(___socket0, ___address1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___socket0, ___address1);
	#endif

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::SetIP(NanoSockets.Address&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_SetIP_m02D59F214C84478AA5948FB1EC76567CA09D8DB8 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, String_t* ___ip1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_set_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ip1' to native representation
	char* ____ip1_marshaled = NULL;
	____ip1_marshaled = il2cpp_codegen_marshal_string(___ip1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_set_ip)(___address0, ____ip1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ____ip1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___ip1' native representation
	il2cpp_codegen_marshal_free(____ip1_marshaled);
	____ip1_marshaled = NULL;

	return returnValue;
}
// NanoSockets.Status NanoSockets.UDP::GetIP(NanoSockets.Address&,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UDP_GetIP_m0A5E0BCF613843E51A389A9F697B49B426D69A15 (Address_t0C64043894DC43092287210A04CAD369B08FDBF3* ___address0, intptr_t ___ip1, int32_t ___ipLength2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Address_t0C64043894DC43092287210A04CAD369B08FDBF3*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_nanosockets_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Address_t0C64043894DC43092287210A04CAD369B08FDBF3*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("nanosockets"), "nanosockets_address_get_ip", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_nanosockets_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(nanosockets_address_get_ip)(___address0, ___ip1, ___ipLength2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___address0, ___ip1, ___ipLength2);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
