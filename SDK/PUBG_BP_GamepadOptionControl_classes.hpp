#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadOptionControl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_GamepadOptionControl.BP_GamepadOptionControl_C
// 0x0000 (0x0500 - 0x0500)
class UBP_GamepadOptionControl_C : public UTslGamepadOptionControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadOptionControl.BP_GamepadOptionControl_C");
		return ptr;
	}


	void HandleGamepadUpOfChild(TScriptInterface<class UTslNaviWidgetInterface>* Widget);
	void HandleGamepadDownOfChild(TScriptInterface<class UTslNaviWidgetInterface>* Widget);
	void HandleFocusReceivedOfChild(TScriptInterface<class UTslNaviWidgetInterface>* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
