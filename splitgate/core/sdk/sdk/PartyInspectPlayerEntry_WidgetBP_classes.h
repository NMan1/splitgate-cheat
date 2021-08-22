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

// WidgetBlueprintGeneratedClass PartyInspectPlayerEntry_WidgetBP.PartyInspectPlayerEntry_WidgetBP_C
// 0x0010 (FullSize[0x0658] - InheritedSize[0x0648])
class UPartyInspectPlayerEntry_WidgetBP_C : public UPortalWarsSocialPlayerEntry
{
public:
	class UImage*                                      Image_181;                                                 // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MuteIndicator;                                             // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyInspectPlayerEntry_WidgetBP.PartyInspectPlayerEntry_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
