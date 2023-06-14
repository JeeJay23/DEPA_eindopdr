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

    for (auto str : nodeNames)
    {
        std::shared_ptr<Node> node = NodeFactory::create(str, str);
        nodes.push_back(node);
    }

    for (auto node : nodes)
    {
        if (node != nullptr)
            std::printf("Node %s\n", node->getName().c_str());
    }

    return 0;
}
