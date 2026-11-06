cmake_minimum_required(VERSION 3.16)

project(OpenMP_Integral_CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type (Debug or Release)" FORCE)
endif()

find_package(OpenMP REQUIRED)

add_executable(integral_cpp apps/main.cpp)

target_compile_options(integral_cpp PRIVATE -Wall -Wextra)

target_link_libraries(integral_cpp PRIVATE OpenMP::OpenMP_CXX)
