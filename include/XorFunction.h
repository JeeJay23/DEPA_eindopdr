#include "LogicFunction.h"

class XorFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
};