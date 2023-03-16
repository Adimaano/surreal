#pragma once

#ifdef SR_PLATFORM_WINDOWS
	#ifdef SR_BUILD_DLL
		#define SURREAL_API __declspec(dllexport)
	#else
		#define SURREAL_API __declspec(dllimport)
	#endif
#else
	#error Surreal only supports Windows
#endif

#define BIT(x) (1<<x)