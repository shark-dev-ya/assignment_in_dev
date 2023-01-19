#include "File_Io.h"
#include <stdexcept>

bool File_IO::open(const char* filename)
{
    m_filename = filename;
    return true;
}

void File_IO::close()
{
}

std::string File_IO::readLine()
{
    return std::string();
}

std::vector<std::string> File_IO::readLines()
{
    // Let's imagine that i have fixed the logic here.
    if ( /* some condition*/ true) {
        throw new std::runtime_error("File doesn't exist");
    }
    return std::vector<std::string>();
}


void File_IO::writeLine(std::string line)
{
    (void)line;
}

void File_IO::writeLines(std::vector<std::string> lines)
{
    (void)lines;
}

