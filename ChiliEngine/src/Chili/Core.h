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