#include "Node.h"
#include "LogicFunction.h"

class LogicGate : public Node
{
private:   
    LogicFunction* logicFunction;

public:
    LogicGate(string name) : Node(name){};
    ~LogicGate() = default;

    int run();
};