#include <stdio.h>
#include <fstream>
#include "Circuit.h"

int main(int argc, char const *argv[])
{
    Node *gate = new Node("AND");

    std::printf("gate pointer: %#p\n", gate);

    Circuit circuit = Circuit::createCircuit("circuit1.txt");

    return 0;
}
