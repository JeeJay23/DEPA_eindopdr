#include "LogicFunction.h"
#include "NodeFactory.h"

LogicFunction::LogicFunction()
{
}

LogicFunction::~LogicFunction()
{
}

int LogicFunction::execute(std::vector<int> inputs)
{
    return 0;
}

LogicFunction::LogicFunction(std::string id)
{
    NodeFactory::assign(id, std::shared_ptr<LogicFunction>(this));
}