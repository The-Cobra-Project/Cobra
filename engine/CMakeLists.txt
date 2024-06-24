cmake_minimum_required(VERSION 3.15.0)
project(CobraEngine VERSION 0.0.1)

add_compile_definitions(CBRA_DLL)

file(GLOB SRCS
    src/*.c
    include/*.h
    src/**/*.c
    include/**/*.h
)

add_library(${PROJECT_NAME} SHARED ${SRCS})
target_include_directories(${PROJECT_NAME} PRIVATE include)
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C_STANDARD)
