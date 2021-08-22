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

// WidgetBlueprintGeneratedClass ChallengeInspectEntry_WidgetBP.ChallengeInspectEntry_WidgetBP_C
// 0x0028 (FullSize[0x0878] - InheritedSize[0x0850])
class UChallengeInspectEntry_WidgetBP_C : public UPortalWarsChallengeEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnSelectedAnim;                                            // 0x0858(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             BackgroundSwitcher;                                        // 0x0860(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      NormalButtonBG;                                            // 0x0868(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SelectedButtonBG;                                          // 0x0870(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeInspectEntry_WidgetBP.ChallengeInspectEntry_WidgetBP_C");
		return ptr;
	}



	void RefreshEntry_BP();
	void ExecuteUbergraph_ChallengeInspectEntry_WidgetBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
