/**
 * Microsoft demo application to install and use SQLite package using vcpkg and CMake.
 * https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
 * Program altered to include fftw3f
 * <iostream> version with argc and argv
 * 
 * Thurman Gillespy
 * 2020-04-07
 */

#include <sqlite3.h>
#include <fftw3.h>
#include <iostream>

int main(int argc, char* argv[])
{
    fftw_plan plan;
    fftw_complex* in = nullptr;

    std::cout << "SQLite library version: " << sqlite3_libversion() << std::endl;
    return 0;
}