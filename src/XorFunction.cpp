#include "XorFunction.h"

int XorFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) ^ inputs.at(1);
}

std::shared_ptr<LogicFunction> XorFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new XorFunction(*this));
}
