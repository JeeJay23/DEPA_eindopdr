#pragma once
#include "NorFunction.h"

int NorFunction::execute(std::vector<int> inputs)
{
    return !(inputs.at(0) || inputs.at(1));
}

std::shared_ptr<LogicFunction> NorFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new NorFunction(*this));
}
