#include <fstream>
#include <iostream>
#include "circuit.h"
#include "fileReader.h"

Circuit::Circuit(/* args */)
{
}

Circuit::~Circuit()
{
}

void Circuit::run()
{
}

Circuit Circuit::createCircuit(std::string path)
{
    Circuit circuit;
    FileReader reader(path);

    reader.read();

    return circuit;
}