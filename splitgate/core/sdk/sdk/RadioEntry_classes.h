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

// WidgetBlueprintGeneratedClass RadioEntry.RadioEntry_C
// 0x0500 (FullSize[0x0920] - InheritedSize[0x0420])
class URadioEntry_C : public UPortalWarsEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Shadow;                                                    // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                                DefaultButtonStyle;                                        // 0x0430(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                SelectedButtonStyle;                                       // 0x06A8(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadioEntry.RadioEntry_C");
		return ptr;
	}



	void RefreshEntry_BP();
	void ExecuteUbergraph_RadioEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
