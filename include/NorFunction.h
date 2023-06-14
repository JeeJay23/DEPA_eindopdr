#include "LogicFunction.h"

class NorFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
};