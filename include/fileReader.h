#pragma once
#include <io.h>
#include <string.h>
#include <fstream>

class FileReader
{
public:
    FileReader(std::string);
    ~FileReader();
    std::string read();
    void close();

private:
    std::string path;
    std::ifstream file;
};
