#include "include/AndFunction.h"

int AndFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) && inputs.at(1);
}