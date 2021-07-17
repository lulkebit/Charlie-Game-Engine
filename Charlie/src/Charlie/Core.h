#pragma once

#ifdef CL_PLATFORM_WINDOWS
	#ifdef CL_BUILD_DLL
		#define CHARLIE_API __declspec(dllexport)
	#else
		#define CHARLIE_API __declspec(dllimport)
	#endif
#else
	#error Charlie only support Windows!
#endif