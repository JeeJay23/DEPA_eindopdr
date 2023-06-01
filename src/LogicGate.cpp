#include "include/LogicGate.h"

int LogicGate::run()
{
    this->output = logicFunction->execute(inputs);
    return 0; // not sure what to return here
}