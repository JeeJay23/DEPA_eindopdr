#include <iostream>
#include <string>
#include <regex>
#include "fileReader.h"

FileReader::FileReader(std::string path)
{
    file.open(path);
}

FileReader::~FileReader()
{
    file.close();
}

std::string FileReader::read()
{

    std::regex pattern(R"((?!#).*?;)");
    std::string line;

    while (std::getline(file, line))
    {
        std::smatch match;
        if (std::regex_search(line, match, pattern))
        {
            std::cout << match.str() << std::endl;
        }
    }
}

std::string FileReader::nextLine()
{
}

void FileReader::close()
{
    file.close();
}
