#pragma once

#include "LogicFunction.h"

class NotFunction : public LogicFunction
{
    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;
};