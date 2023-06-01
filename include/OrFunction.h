#include "LogicFunction.h"

class OrFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
};