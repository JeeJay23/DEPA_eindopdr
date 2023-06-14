#pragma once

#include "LogicFunction.h"

class XorFunction : public LogicFunction
{
public:
    XorFunction(std::string id);

    virtual ~XorFunction();

    int execute(std::vector<int> inputs) override;
    std::shared_ptr<LogicFunction> clone() override;

    static XorFunction instance;
};