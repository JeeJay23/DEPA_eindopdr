#pragma once

#include <vector>
#include <memory>

class LogicFunction
{
public:
    LogicFunction() = default;
    ~LogicFunction() = default;

    virtual int execute(std::vector<int> inputs) = 0;
    virtual std::shared_ptr<LogicFunction> clone() = 0;
};