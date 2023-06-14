#include <memory>
#include <stdio.h>

#include "Node.h"
#include "Circuit.h"
#include "NodeFactory.h"

#include "NodeFunctions.h"
#include "Circuit.h"

int main(int argc, char const *argv[])
{
    NodeFactory::assign("AND", std::shared_ptr<LogicFunction>(new AndFunction()));
    NodeFactory::assign("OR", std::shared_ptr<LogicFunction>(new OrFunction()));
    NodeFactory::assign("NOT", std::shared_ptr<LogicFunction>(new NotFunction()));
    NodeFactory::assign("NAND", std::shared_ptr<LogicFunction>(new NandFunction()));
    NodeFactory::assign("NOR", std::shared_ptr<LogicFunction>(new NorFunction()));
    NodeFactory::assign("XOR", std::shared_ptr<LogicFunction>(new XorFunction()));

    std::vector<std::string> nodeNames = {"AND", "OR", "NOT", "NAND", "NOR", "XOR"};
    std::vector<std::shared_ptr<Node>> nodes;
    for (auto str : nodeNames){
        std::shared_ptr<Node> node = NodeFactory::create(str, str);
        nodes.push_back(node);
    }

    for (auto node : nodes){
        std::printf("Node %s\n", node->getName().c_str());
        node->run();
    }

    Circuit circuit = Circuit::createCircuit("circuit1.txt");

    return 0;
}
