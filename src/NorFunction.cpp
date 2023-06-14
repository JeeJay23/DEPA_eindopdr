#include "NorFunction.h"

NorFunction NorFunction::instance = NorFunction("NOR");

NorFunction::NorFunction(std::string id) : LogicFunction(id)
{
}

int NorFunction::execute(std::vector<int> inputs)
{
    return !(inputs.at(0) || inputs.at(1));
}

std::shared_ptr<LogicFunction> NorFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new NorFunction(*this));
}
