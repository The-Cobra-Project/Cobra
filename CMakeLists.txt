cmake_minimum_required(VERSION 3.15.0)
project(Cobra VERSION 0.0.1)

set(COBRA_DEBUG ON)


if (MSVC)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

file(GLOB SRCS
src/*.c
include/*.h
src/**/*.c
include/**/*.h
)

add_definitions(-DCBRA_SHARED)
add_definitions(-DCBRA_DEBUG)

add_library(${PROJECT_NAME} SHARED ${SRCS})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C_STANDARD)
target_include_directories(${PROJECT_NAME} PUBLIC include)

if (MSVC)
    target_link_libraries(${PROJECT_NAME} User32.lib)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS OFF)
endif()