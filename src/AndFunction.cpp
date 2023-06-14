#include "AndFunction.h"

AndFunction AndFunction::instance("AND");

AndFunction::AndFunction(std::string id) : LogicFunction(id)
{
}

int AndFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) && inputs.at(1);
}

std::shared_ptr<LogicFunction> AndFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new AndFunction(*this));
}
