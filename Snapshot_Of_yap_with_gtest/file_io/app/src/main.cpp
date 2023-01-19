#include "File_Io.h"
#include <iostream>

int main(int argc, char* argv[]) {

    File_IO myFile;
    std::cout << myFile.open("test") << std::endl;

    return 0;
}