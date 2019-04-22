cmake_minimum_required(VERSION 3.13)
project(taller)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(test)

add_executable(taller
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/taller
        cmake-build-debug/taller.cbp
        datos/loremIpsum.txt
        datos/losprofetas.txt
        test/cases.cpp
        test/cases.h
        test/test.h
        CMakeLists.txt
        ejercicios.cpp
        ejercicios.h
        main.cpp)
