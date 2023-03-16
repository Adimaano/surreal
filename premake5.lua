workspace "SurrealEngine"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	IncludeDir = {}
	IncludeDir["GLFW"] = "Surreal/vendor/GLFW/include"

	include "Surreal/vendor/GLFW"
	
project "Surreal"
	location "Surreal"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "srpch.h"
	pchsource "Surreal/src/srpch.cpp"
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}"
	}

	links 
	{
		"GLFW",
		"opengl32.lib"
	}
	
	filter "system:windows"
		cppdialect "C++20"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"SR_PLATFORM_WINDOWS",
			"SR_BUILD_DLL"
		}
		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Game")
		}
		
	filter "configurations:Debug"
		defines "SR_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "SR_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "SR_DIST"
		optimize "On"

		
project "Game"
	location "Game"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"Surreal/vendor/spdlog/include",
		"Surreal/src"
	}
	
	links
	{
		"Surreal"
	}
	
	filter "system:windows"
		cppdialect "C++20"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"SR_PLATFORM_WINDOWS"
		}
		
		filter "configurations:Debug"
		defines "SR_DEBUG"
			symbols "On"
			
		filter "configurations:Release"
		defines "SR_RELEASE"
			optimize "On"
		
		filter "configurations:Dist"
		defines "SR_DIST"
			optimize "On"