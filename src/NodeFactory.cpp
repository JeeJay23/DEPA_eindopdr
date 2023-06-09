#include "NodeFactory.h"

std::shared_ptr<NodeFactory> NodeFactory::instance;

NodeFactory::NodeFactory()
{
}

NodeFactory::~NodeFactory()
{
}

NodeFactory* NodeFactory::getInstance()
{
    if (NodeFactory::instance == nullptr) {
        NodeFactory::instance = std::shared_ptr<NodeFactory>(new NodeFactory);
    }

    return NodeFactory::instance.get();
}

void NodeFactory::assign(std::string id, LogicFunction* function)
{
    NodeFactory* factory = NodeFactory::getInstance();

    if (factory->logicFunctions.find(id) == factory->logicFunctions.end()) {
        factory->logicFunctions.emplace(id, function);
    }
    else {
        // Function object already exists, throw error?
    }
}

std::shared_ptr<Node> NodeFactory::create(std::string id, std::string name)
{
    NodeFactory* factory = NodeFactory::getInstance();

    // lookup logicFunction in map
    if (factory->logicFunctions.find(id) != factory->logicFunctions.end())
    {
        std::shared_ptr<LogicFunction> function = factory->logicFunctions.at(id)->clone();
        return std::shared_ptr<Node>(new Node(name, function));
    }
    else
    {
        std::printf("Error: LogicFunction %s not found\n", id.c_str());
        return nullptr;
    }
}