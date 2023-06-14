#pragma once
#include <iostream>
#include <string>
#include <regex>
#include <list>
#include "fileReader.h"
#include "nodeDescriptor.h"

std::list<std::string> nodeTypes = {"INPUT_HIGH", "INPUT_LOW", "PROBE", "OR", "AND", "NOT", "NAND", "NOR", "XOR"};

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
            std::string item = match.str();
            std::cout << item << std::endl;

            std::regex pattern(R"(\s*([^:\s]+)\s*:\s*([^;\s]+)\s*;)");
            std::smatch match;

            if (std::regex_search(item, match, pattern) && match.size() == 3)
            {
                std::string name = match[1];
                std::string type = match[2];

                if (std::find(nodeTypes.begin(), nodeTypes.end(), type) != nodeTypes.end())
                {
                    // TODO: implement the addition of the node to the circuit
                    std::cout << "Name: " << name << std::endl;
                    std::cout << "Type: " << type << std::endl;
                }
                else
                {
                    std::vector<std::string> connections;
                    std::regex pattern(R"(\s*([^,\s]+)\s*,?)");
                    std::sregex_token_iterator iter(type.begin(), type.end(), pattern, 1);
                    std::sregex_token_iterator end;

                    while (iter != end)
                    {
                        connections.push_back(*iter);
                        ++iter;
                    }

                    std::cout << "Name: " << name << std::endl;
                    std::cout << "Connections: ";
                    for (const std::string &connection : connections)
                    {
                        std::cout << connection << " ";
                    }
                    std::cout << std::endl;
                    // TODO: implement the addition of the connections to the node
                }
            }
        }
    }

    return "";
}
void FileReader::close()
{
    file.close();
}
