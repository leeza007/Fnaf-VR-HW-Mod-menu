
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOff
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::PuppetLightFlickerOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOff");

	AOffice02_GameManager_C_PuppetLightFlickerOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOn
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::PuppetLightFlickerOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlickerOn");

	AOffice02_GameManager_C_PuppetLightFlickerOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.GetPuppetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PuppetDataFound                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPuppetAIDataStruct     PuppetStructToUse1             (Parm, OutParm, IsPlainOldData)

void AOffice02_GameManager_C::GetPuppetData(bool* PuppetDataFound, struct FPuppetAIDataStruct* PuppetStructToUse1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.GetPuppetData");

	AOffice02_GameManager_C_GetPuppetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PuppetDataFound != nullptr)
		*PuppetDataFound = params.PuppetDataFound;
	if (PuppetStructToUse1 != nullptr)
		*PuppetStructToUse1 = params.PuppetStructToUse1;
}


// Function Office02_GameManager.Office02_GameManager_C.EnableLigtTransition
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::EnableLigtTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.EnableLigtTransition");

	AOffice02_GameManager_C_EnableLigtTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.SetFreddieMask
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::SetFreddieMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.SetFreddieMask");

	AOffice02_GameManager_C_SetFreddieMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.GetFreddieMask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFreddieMask_BP_C*> FreddieMask                    (Parm, OutParm, ZeroConstructor)

void AOffice02_GameManager_C::GetFreddieMask(TArray<class AFreddieMask_BP_C*>* FreddieMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.GetFreddieMask");

	AOffice02_GameManager_C_GetFreddieMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FreddieMask != nullptr)
		*FreddieMask = params.FreddieMask;
}


// Function Office02_GameManager.Office02_GameManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.UserConstructionScript");

	AOffice02_GameManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.LightFlicker__FinishedFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::LightFlicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.LightFlicker__FinishedFunc");

	AOffice02_GameManager_C_LightFlicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.LightFlicker__UpdateFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::LightFlicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.LightFlicker__UpdateFunc");

	AOffice02_GameManager_C_LightFlicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.LightFlicker__TeleportAi__EventFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::LightFlicker__TeleportAi__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.LightFlicker__TeleportAi__EventFunc");

	AOffice02_GameManager_C_LightFlicker__TeleportAi__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_0__FinishedFunc");

	AOffice02_GameManager_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_0__UpdateFunc");

	AOffice02_GameManager_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_1__FinishedFunc");

	AOffice02_GameManager_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_1__UpdateFunc");

	AOffice02_GameManager_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_1__Flip Camera__EventFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_1__Flip_Camera__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_1__Flip Camera__EventFunc");

	AOffice02_GameManager_C_Timeline_1__Flip_Camera__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_2__FinishedFunc");

	AOffice02_GameManager_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_2__UpdateFunc");

	AOffice02_GameManager_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_2__Flip Camera__EventFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_2__Flip_Camera__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_2__Flip Camera__EventFunc");

	AOffice02_GameManager_C_Timeline_2__Flip_Camera__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_3__FinishedFunc");

	AOffice02_GameManager_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_3__UpdateFunc");

	AOffice02_GameManager_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Timeline_3__TeleportAi__EventFunc
// (BlueprintEvent)

void AOffice02_GameManager_C::Timeline_3__TeleportAi__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Timeline_3__TeleportAi__EventFunc");

	AOffice02_GameManager_C_Timeline_3__TeleportAi__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice02_GameManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.ReceiveBeginPlay");

	AOffice02_GameManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.TriggerCameraFlicker
// (BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::TriggerCameraFlicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TriggerCameraFlicker");

	AOffice02_GameManager_C_TriggerCameraFlicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.TurnOffStaticScreen
// (BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::TurnOffStaticScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TurnOffStaticScreen");

	AOffice02_GameManager_C_TurnOffStaticScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.TurnOnStaticScreen
// (BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::TurnOnStaticScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TurnOnStaticScreen");

	AOffice02_GameManager_C_TurnOnStaticScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlicker
// (BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::PuppetLightFlicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetLightFlicker");

	AOffice02_GameManager_C_PuppetLightFlicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.PuppetExecutionSequence
// (BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::PuppetExecutionSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetExecutionSequence");

	AOffice02_GameManager_C_PuppetExecutionSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.Disable Puppet_Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_GameManager_C::Disable_Puppet_Animation(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.Disable Puppet_Animation");

	AOffice02_GameManager_C_Disable_Puppet_Animation_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.TriggerCameraLightFlicker
// (BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::TriggerCameraLightFlicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.TriggerCameraLightFlicker");

	AOffice02_GameManager_C_TriggerCameraLightFlicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.ExecuteUbergraph_Office02_GameManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_GameManager_C::ExecuteUbergraph_Office02_GameManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.ExecuteUbergraph_Office02_GameManager");

	AOffice02_GameManager_C_ExecuteUbergraph_Office02_GameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_GameManager.Office02_GameManager_C.PuppetIsAwake__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice02_GameManager_C::PuppetIsAwake__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_GameManager.Office02_GameManager_C.PuppetIsAwake__DelegateSignature");

	AOffice02_GameManager_C_PuppetIsAwake__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
