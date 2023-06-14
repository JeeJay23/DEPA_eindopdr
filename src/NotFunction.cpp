#include "NotFunction.h"

NotFunction NotFunction::instance("NOT");

NotFunction::NotFunction(std::string id) : LogicFunction(id)
{
}

int NotFunction::execute(std::vector<int> inputs)
{
    return !inputs.at(0);
}

std::shared_ptr<LogicFunction> NotFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new NotFunction(*this));
}
