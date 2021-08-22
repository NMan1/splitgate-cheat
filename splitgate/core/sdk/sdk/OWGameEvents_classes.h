#pragma once

#include "..\..\pch.h"


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OWGameEvents.OWGameEventsUtility
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOWGameEventsUtility : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OWGameEvents.OWGameEventsUtility");
		return ptr;
	}



	bool STATIC_TriggerEventValue(const struct FString& Name, const struct FString& Value);
	bool STATIC_TriggerEvent(const struct FString& Name);
	bool STATIC_SetInfo(const struct FString& Category, const struct FString& Key, const struct FString& Value);
	bool STATIC_Commit();
	bool STATIC_BeginTransaction();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
