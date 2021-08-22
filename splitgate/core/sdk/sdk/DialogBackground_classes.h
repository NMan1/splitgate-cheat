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

// WidgetBlueprintGeneratedClass DialogBackground.DialogBackground_C
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UDialogBackground_C : public UUserWidget
{
public:
	class UBackgroundBlur*                             BackgroundBlur_1;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlurBackground;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DialogBackground.DialogBackground_C");
		return ptr;
	}



	void SetComponentVisibility(class UWidget* Widget, bool Visible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
