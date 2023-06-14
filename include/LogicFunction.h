#pragma once

#include <vector>
#include <memory>


class LogicFunction
{
protected:
    LogicFunction();
    LogicFunction(std::string id);

public:
    virtual ~LogicFunction();

public:
    virtual int                             execute(std::vector<int> inputs);
    virtual std::shared_ptr<LogicFunction>  clone() = 0;
};