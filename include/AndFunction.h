#include "LogicFunction.h"

class AndFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
};