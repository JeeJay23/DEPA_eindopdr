#include <vector>
#include <string>
#include "LogicFunction.h"

class Node
{
protected:
    std::string name;
    std::vector<int> inputs;
    int output;
    std::vector<Node *> nextNodes;
    LogicFunction *function;

public:
    Node(std::string _name) : name(_name){};
    int run();

    void setValue(bool input)
    {
        inputs.push_back(input);
    };

public:
    int propagationDelay;
};