// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AndroidTopDown4271 : ModuleRules
{
	public AndroidTopDown4271(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
