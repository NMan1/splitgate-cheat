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

// WidgetBlueprintGeneratedClass SideNavButton.SideNavButton_C
// 0x0500 (FullSize[0x0930] - InheritedSize[0x0430])
class USideNavButton_C : public UPortalWarsNavButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Shadow;                                                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                                DefaultButtonStyle;                                        // 0x0440(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                SelectedButtonStyle;                                       // 0x06B8(0x0278) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SideNavButton.SideNavButton_C");
		return ptr;
	}



	void RefreshEntry_BP();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SideNavButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
