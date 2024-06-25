cmake_minimum_required(VERSION 3.15.0)
project(CobraEngine VERSION 0.0.1)

file(GLOB SRCS
    src/*.c
    include/*.h
    src/**/*.c
    include/**/*.h
)

add_definitions(-DCBRA_SHARED)

include_directories(include)
add_library(${PROJECT_NAME} SHARED ${SRCS})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C_STANDARD)
