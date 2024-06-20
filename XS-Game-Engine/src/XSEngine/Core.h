#pragma once

#ifdef XS_PLATFORM_WINDOWS
  #ifdef XS_BUILD_DLL
    #define XS_ENGINE_API __declspec(dllexport)
  #else
    #define XS_ENGINE_API __declspec(dllimport)
  #endif // XS_BUILD_DLL
#else
  #error XS GAME ENGINE only support Windows!
#endif // XS_ENGINE_PLATFORM_WINDOWS
