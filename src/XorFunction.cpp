#include "XorFunction.h"

XorFunction XorFunction::instance = XorFunction("XOR");

XorFunction::XorFunction(std::string id) : LogicFunction(id)
{
}

XorFunction::~XorFunction()
{
}

int XorFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) ^ inputs.at(1);
}

std::shared_ptr<LogicFunction> XorFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new XorFunction(*this));
}