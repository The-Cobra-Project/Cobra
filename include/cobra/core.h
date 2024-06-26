#pragma once

#ifdef _WIN32
    #define CBRA_PLAT_WIN32
    #ifdef CBRA_SHARED
        #define CBRA_API __declspec(dllexport)
    #else
        #define CBRA_API __declspec(dllimport)
    #endif
#elif __APPLE__
    #define CBRA_PLAT_MAC
    // TODO: write apple preproccessor
#elif __linux__
    #define CBRA_PLAT_LINUX
    // TODO: write linux preproccessor
#endif
