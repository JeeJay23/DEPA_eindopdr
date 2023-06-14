#pragma once

#include "LogicFunction.h"

class NorFunction : public LogicFunction
{
    NorFunction(std::string id);

    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;

    static NorFunction instance;
};