#pragma once

#ifdef SH_PLATFORM_WINDOWS
	#ifdef SH_BUILD_DLL
		#define SHADE_API __declspec(dllexport)
	#else
		#define SHADE_API __declspec(dllimport)
	#endif
#else
	#error Shade only supports windows
#endif