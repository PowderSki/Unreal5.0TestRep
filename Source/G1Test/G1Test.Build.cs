// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class G1Test : ModuleRules
{
	public G1Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
