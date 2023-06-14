#pragma once

#include "LogicFunction.h"

class NotFunction : public LogicFunction
{
    NotFunction(std::string id);
    
    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;

    static NotFunction instance;
};