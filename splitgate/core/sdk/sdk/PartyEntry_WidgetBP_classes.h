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

// WidgetBlueprintGeneratedClass PartyEntry_WidgetBP.PartyEntry_WidgetBP_C
// 0x0021 (FullSize[0x0789] - InheritedSize[0x0768])
class UPartyEntry_WidgetBP_C : public UPortalWarsPartyEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      GamepadKeyImage1;                                          // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      GamepadKeyImage2;                                          // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    XPBoost_Root;                                              // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsHoveringButton;                                          // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyEntry_WidgetBP.PartyEntry_WidgetBP_C");
		return ptr;
	}



	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void OnUnhovered_BP();
	void OnHovered_BP();
	void ExecuteUbergraph_PartyEntry_WidgetBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
