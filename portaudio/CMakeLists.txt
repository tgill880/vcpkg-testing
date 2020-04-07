# CMakeLists.txt
# adapted from:
# https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
# PortAudio added to original demo
# Thurman Gillespy
# 2020-04-07
#
# package installations (Windows)
# vcpkg install portaudio:x64-windows
#
# build commands (starting from this directory)
# cd ../build
# cmake .. "-DCMAKE_TOOLCHAIN_FILE=C:\vcpkg\scripts\buildsystems\vcpkg.cmake"
# cmake --build .

cmake_minimum_required(VERSION 3.13)
project(test VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
# see Professional CMake, Ch 15.1
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(pa-demo pa-demo.cpp)

find_package(portaudio CONFIG REQUIRED)
target_link_libraries( pa-demo 
    PRIVATE
        portaudio
        portaudio_static
)

# not needed, but added for testing
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries ( pa-demo PRIVATE Threads::Threads )