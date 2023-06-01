#include "LogicFunction.h"

class NandFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
};