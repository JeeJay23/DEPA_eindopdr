#pragma once

#include "LogicFunction.h"

class OrFunction : public LogicFunction
{
    OrFunction(std::string id);

    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;

    static OrFunction instance;
};