#pragma once

#include "LogicFunction.h"

class NandFunction : public LogicFunction
{
    NandFunction(std::string id);

    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;

    static NandFunction instance;
};