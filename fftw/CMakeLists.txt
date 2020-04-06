# CMakeLists.txt
# adapted from:
# https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
# fftw3f added to original demo
#
# package installations
# vcpkg install sqlite3:x64-windows
# vcpkg install fftw3:x64-windows
#
# build commands (starting from this directory)
# cd ../build
# cmake .. "-DCMAKE_TOOLCHAIN_FILE=C:\vcpkg\scripts\buildsystems\vcpkg.cmake"
# cmake --build .

cmake_minimum_required(VERSION 3.0)
project(test)

add_executable(fftw-demo fftw-demo.cpp)

find_package(sqlite3 CONFIG REQUIRED)
# options: FFTW3, FFTW3f, FFTW3l
find_package(FFTW3f CONFIG REQUIRED)

target_link_libraries(fftw-demo PRIVATE sqlite3)
# lower case must match above uppcase (FFTW3f => fftw3f, etc)
target_link_libraries(fftw-demo PRIVATE FFTW3::fftw3f)