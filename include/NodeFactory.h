#pragma once 

#include <memory>
#include <map>

#include "LogicFunction.h"
#include "Node.h"

class NodeFactory
{
protected:
    static std::shared_ptr<NodeFactory> instance;
    std::map<std::string, std::shared_ptr<LogicFunction>> logicFunctions;
    NodeFactory();

public:
    ~NodeFactory();

    static void assign(std::string id, std::shared_ptr<LogicFunction> function);
    static NodeFactory* getInstance();
    static std::shared_ptr<Node> create(std::string id, std::string name);
};

