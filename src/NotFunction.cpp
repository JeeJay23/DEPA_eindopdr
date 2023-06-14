#include "NotFunction.h"

int NotFunction::execute(std::vector<int> inputs)
{
    return !inputs.at(0);
}

std::shared_ptr<LogicFunction> NotFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new NotFunction(*this));
}
