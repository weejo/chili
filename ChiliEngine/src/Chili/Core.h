#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHILI_API __declspec(dllexport)
	#else
		#define CHILI_API __declspec(dllimport)
	#endif
#else 
	#error ONLY WINDOWS SUPPORTED!
#endif


#ifdef CH_ENABLE_ASSERTS
	#define CH_ASSERT(x, ...) { if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define CH_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CH_ASSERT(x, ...)
	#define CH_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)