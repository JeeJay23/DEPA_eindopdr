#include "NandFunction.h"

NandFunction NandFunction::instance = NandFunction("NAND");

NandFunction::NandFunction(std::string id) : LogicFunction(id)
{
}

int NandFunction::execute(std::vector<int> inputs)
{
    return !(inputs.at(0) && inputs.at(1));
}

std::shared_ptr<LogicFunction> NandFunction::clone()
{
    return std::shared_ptr<LogicFunction>(new NandFunction(*this));
}
