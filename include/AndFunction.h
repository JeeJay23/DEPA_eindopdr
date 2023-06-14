#pragma once 

#include "LogicFunction.h"

class AndFunction : public LogicFunction
{
    AndFunction(std::string id);

    int                             execute(std::vector<int> inputs)    override;
    std::shared_ptr<LogicFunction>  clone()                             override;

    static AndFunction instance;
};