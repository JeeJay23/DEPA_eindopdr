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
    Node(std::string _name, std::shared_ptr<LogicFunction> _function) : name(_name), function(_function){};
    int run();

    std::string getName() { return name; };
    int getOutput() { return output; };


    std::vector<std::shared_ptr<Node>> getNextNodes() {
        return nextNodes;
    };

    void setValue(bool input) {
        inputs.push_back(input);
    };

public:
    int propagationDelay;
};