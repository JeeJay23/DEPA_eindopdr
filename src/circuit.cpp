#include <fstream>
#include "circuit.h"

Circuit::Circuit(/* args */)
{
}

Circuit::~Circuit()
{
}

void Circuit::run()
{
}

void Circuit::addNode(ANode *node)
{
}

Circuit Circuit::createCircuit(std::string path)
{
    Circuit circuit;
    std::ifstream ifs;

    ifs.open(path, std::ifstream::in);
    if (!ifs.is_open())
    {
        throw std::runtime_error("Could not open file");
    }

    while (!ifs.eof())
    {
        circuit.getNextNode(&ifs);
    }

    ifs.close();
    return circuit;
}

// TODO: fix this shit man
ANode Circuit::getNextNode(std::ifstream *file)
{
    char *line = new char[256];
    file->get(line, 256, '\n');

    
}
