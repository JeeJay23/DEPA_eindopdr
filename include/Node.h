#pragma once 

#include <vector>
#include <string>
#include <memory>
#include "LogicFunction.h"

class Node
{
protected:
    std::string name;
    std::vector<int> inputs;
    int output;
    std::vector<std::shared_ptr<Node>> nextNodes;
    std::shared_ptr<LogicFunction> function;

public:
    Node(std::string _name, std::shared_ptr<LogicFunction> _function) : name(_name), function(_function) {};

    std::string getName() { return name; };

    int run();

    void setValue(bool input)
    {
        inputs.push_back(input);
    };

public:
    int propagationDelay;
};