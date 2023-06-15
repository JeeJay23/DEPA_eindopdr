#include <memory>
#include <stdio.h>

#include "Node.h"
#include "Circuit.h"
#include "NodeFactory.h"

#include "Circuit.h"

int main(int argc, char const *argv[])
{
    std::vector<std::string> nodeNames = {"AND", "OR", "NOT", "NAND", "NOR", "XOR"};
    std::vector<std::shared_ptr<Node>> nodes;

    // NodePtr node = NodeFactory::create("AND", "test");

    Circuit circuit = Circuit::createCircuit("circuit1.txt");

    return 0;
}
