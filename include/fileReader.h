#pragma once
#include <io.h>
#include <string.h>
#include <fstream>
#include "Node.h"

class FileReader
{
public:
    FileReader(std::string);
    ~FileReader();
    std::vector<std::shared_ptr<Node>> read();
    void close();

private:
    std::string path;
    std::ifstream file;
};
