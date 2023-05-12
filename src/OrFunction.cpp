#include "include/OrFunction.h"

int OrFunction::execute(std::vector<int> inputs)
{
    return inputs.at(0) || inputs.at(1);
}