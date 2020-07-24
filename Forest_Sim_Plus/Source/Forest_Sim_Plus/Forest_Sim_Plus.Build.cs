// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Forest_Sim_Plus : ModuleRules
{
	public Forest_Sim_Plus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
