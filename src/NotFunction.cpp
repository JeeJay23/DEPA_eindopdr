#include "NotFunction.h"

int NotFunction::execute(std::vector<int> inputs)
{
    return !inputs.at(0);
}
