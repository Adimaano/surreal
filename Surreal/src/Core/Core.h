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

#ifdef SR_ENABLE_ASSERTS
	#define SR_ASSERT(x, ...) { if(!(x)) { WS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define SR_CORE_ASSERT(x, ...) { if(!(x)) { WS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define SR_ASSERT(x, ...)
	#define SR_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1<<x)