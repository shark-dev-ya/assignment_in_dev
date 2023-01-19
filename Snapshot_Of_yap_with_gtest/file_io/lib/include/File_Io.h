#ifndef FILE_IO_H
#define FILE_IO_H

#include <string>
#include <vector>

class File_IO {
    public:
        bool open(const char* filename);
        void close();
        std::string readLine();
        std::vector<std::string> readLines();

        void writeLine(std::string line);
        void writeLines(std::vector<std::string> lines);
    private:
        const char* m_filename;
};

#endif //FILE_IO_H