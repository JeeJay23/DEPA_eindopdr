#include <iostream>
#include <string>
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
    std::string line;

    while (std::getline(file, line))
    {

        ;
    }
}

std::string FileReader::nextLine()
{
}

void FileReader::close()
{
    file.close();
}
