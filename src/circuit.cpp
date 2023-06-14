#include <fstream>
#include <iostream>
#include <list>
#include <algorithm>
#include "Circuit.h"
#include "fileReader.h"

Circuit::Circuit(/* args */)
{
}

Circuit::~Circuit()
{
}

int Circuit::run()
{
    return 0;
}

Circuit Circuit::createCircuit(std::string path)
{
    Circuit circuit;
    FileReader reader(path);

    reader.read();

    return circuit;
}

void Circuit::sortNodes()
{
    // Check if first node in the list is part of nextNodes of all other nodes
    // If not, add to sortedIds
    // If yes, move to next node in the list
    // Repeat until all nodes are sorted

    while (nodes.size() > 0)
    {
        for (int i = 0; i < nodes.size(); i++) // Node to check
        {
            for (int j = 0; j < nodes.size(); j++) // Node to be checked against
            {
                std::vector<std::string> nextNodeNames;
                for (auto node : nodes[j]->getNextNodes())
                {
                    nextNodeNames.push_back(node->getName());
                }

                std::vector<std::string>::iterator it;

                it = std::find(nextNodeNames.begin(), nextNodeNames.end(), "test");

                if (it != nextNodeNames.end())
                {
                    std::cout << "Node found in nextNodes of another node | Skipping for now" << std::endl;
                    break;
                }
                else
                {
                    sortedNodes.push_back(nodes[i]);
                    nodes.erase(nodes.begin() + i);
                }
            }
        }
    }
}