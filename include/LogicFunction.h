#include <vector>

class LogicFunction
{
public:
    LogicFunction() = default;
    ~LogicFunction() = default;

    virtual int execute(std::vector<int> inputs) = 0;
};