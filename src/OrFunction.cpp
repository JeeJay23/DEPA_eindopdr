#include "OrFunction.h"

OrFunction OrFunction::instance("OR");

OrFunction::OrFunction(std::string id) : LogicFunction(id)
{
}

int OrFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) || inputs.at(1);
}

std::shared_ptr<LogicFunction> OrFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new OrFunction(*this));
}
