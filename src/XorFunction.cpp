#include "include/XorFunction.h"

int XorFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) ^ inputs.at(1);
}