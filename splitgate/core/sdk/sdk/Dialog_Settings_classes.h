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

// WidgetBlueprintGeneratedClass Dialog_Settings.Dialog_Settings_C
// 0x0010 (FullSize[0x03A0] - InheritedSize[0x0390])
class UDialog_Settings_C : public UPortalWarsDialogWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USettings_WidgetBP_C*                        Settings_WidgetBP;                                         // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Dialog_Settings.Dialog_Settings_C");
		return ptr;
	}



	class UWidget* GetWidgetToFocus();
	void BndEvt__Settings_WidgetBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Dialog_Settings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
