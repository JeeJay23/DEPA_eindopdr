#pragma once 

#include "LogicFunction.h"

class AndFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;
};