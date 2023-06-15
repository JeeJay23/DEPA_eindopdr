#pragma once 

#include <memory>
#include <map>

#include "Node.h"

class LogicFunction;

class NodeFactory
{
private:
    static std::shared_ptr<NodeFactory> instance;
    std::map<std::string, LogicFunction*> logicFunctions;
    NodeFactory();

public:
    ~NodeFactory();

    static void assign(std::string id, LogicFunction* function);
    static NodeFactory* getInstance();
    static std::shared_ptr<Node> create(std::string id, std::string name);
};

