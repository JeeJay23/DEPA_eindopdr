#pragma once

#include "LogicFunction.h"

class XorFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;
};