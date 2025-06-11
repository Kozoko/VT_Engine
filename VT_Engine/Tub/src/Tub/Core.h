#pragma once

#ifdef TUB_PLATFORM_WINDOWS
	#ifdef TUB_BUILD_DLL
		#define TUB_API __declspec(dllexport)
	#else
		#define TUB_API __declspec(dllexport)
	#endif
#else 
	#error Tub Only support Windows
#endif // TUB_PLATFORM_WINDOWS

