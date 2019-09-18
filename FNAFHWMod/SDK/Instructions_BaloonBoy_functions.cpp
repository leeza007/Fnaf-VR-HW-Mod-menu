
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

// Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.TriggerPullWidget
// (BlueprintCallable, BlueprintEvent)

void UInstructions_BaloonBoy_C::TriggerPullWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.TriggerPullWidget");

	UInstructions_BaloonBoy_C_TriggerPullWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_BaloonBoy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.Construct");

	UInstructions_BaloonBoy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_BaloonBoy_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.OnControllerTrackingChanged");

	UInstructions_BaloonBoy_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.ExecuteUbergraph_Instructions_BaloonBoy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_BaloonBoy_C::ExecuteUbergraph_Instructions_BaloonBoy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_BaloonBoy.Instructions_BaloonBoy_C.ExecuteUbergraph_Instructions_BaloonBoy");

	UInstructions_BaloonBoy_C_ExecuteUbergraph_Instructions_BaloonBoy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
