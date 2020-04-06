/**
 * Microsoft demo application to install and use SQLite package using vcpkg and CMake.
 * https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
 * 
 * Thurman Gillespy
 * 2020-04-06
 */

#include <sqlite3.h>
#include <stdio.h>

int main()
{
    printf("%s\n", sqlite3_libversion());
    return 0;
}