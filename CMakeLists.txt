cmake_minimum_required(VERSION 3.24)
project(osn_simulasi)

set(CMAKE_CXX_STANDARD 14)

add_executable(osn_simulasi
        ../osn-simulasi/Main.cpp Introduction/Main.cpp)
