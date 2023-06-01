#include "NandFunction.h"

int NandFunction::execute(std::vector<int> inputs)
{
    return !(inputs.at(0) && inputs.at(1));
}