#pragma once

#include <stdio.h>

#define CBRA_SHARED

#ifdef _WIN32
    #ifdef CBRA_SHARED
        #define CBRA_API __declspec(dllexport)
    #else
        #define CBRA_API __declspec(dllimport)
    #endif
#elif __APPLE__
    // TODO: write apple preproccessor
#elif __linux__
    // TODO: write linux preproccessor
#endif