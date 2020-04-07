/**
 * Simple demo for Windows of using vcpkg and CMake to use PortAudio
 * Adapted from
 * https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md
 * 
 * Thurman Gillespy
 * 2020-04-07
 */

#include <iostream>
#include <portaudio.h>

int main(int argc, char* argv[])
{
    int result = Pa_Initialize();
    if (result != paNoError) {
        std::cout << "Pa_Initialize failed.\n";
        return 1;
    }
    std::cout << "PortAudio simple demo\n";
    std::cout << "Version: " << Pa_GetVersionText() << std::endl;
    std::cout << "Number of devices: " << ((int)Pa_GetDeviceCount()) << std::endl;
    Pa_Terminate();

    return 0;
}
