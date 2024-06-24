#pragma once

#ifdef _WIN32
    #ifdef CBRA_DLL
        #define CBRA_API __declspec(dllexport)
    #else
        #define CBRA_API __declspec(dllimport)
    #endif
#elif __APPLE__
    // TODO: write apple preproccessor
#elif __linux__
    // TODO: write linux preproccessor
#endif