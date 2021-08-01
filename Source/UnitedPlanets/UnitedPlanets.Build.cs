// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnitedPlanets : ModuleRules
{
	public UnitedPlanets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
