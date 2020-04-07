# CMakeLists.txt
# adapted from:
# https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
# fftw3f added to original demo
#
# package installations (Windows)
# vcpkg install sqlite3:x64-windows
# vcpkg install fftw3:x64-windows
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

add_executable(fftw-demo fftw-demo.cpp)
add_executable(fftw-iostream fftw-demo-iostream.cpp)

find_package(sqlite3 CONFIG REQUIRED)
# options: FFTW3, FFTW3f, FFTW3l
find_package(FFTW3f CONFIG REQUIRED)

target_link_libraries(fftw-demo PRIVATE sqlite3)
target_link_libraries(fftw-iostream PRIVATE sqlite3)
# lower case must match above uppcase (FFTW3f => fftw3f, etc)
target_link_libraries(fftw-demo PRIVATE FFTW3::fftw3f)
target_link_libraries(fftw-iostream PRIVATE FFTW3::fftw3f)