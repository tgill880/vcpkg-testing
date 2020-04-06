# CMakeLists.txt
# adapted from:
# https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
#
# build commands (starting from this directory)
# cd ../build
# cmake .. "-DCMAKE_TOOLCHAIN_FILE=C:\vcpkg\scripts\buildsystems\vcpkg.cmake" 
# cmake --build .

cmake_minimum_required(VERSION 3.0)
project(test)

find_package(SQLite3 REQUIRED)

add_executable(sqlite-demo sqlite-demo.cpp)
target_link_libraries(sqlite-demo sqlite3)