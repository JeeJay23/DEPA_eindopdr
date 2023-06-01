#include "Node.h"

int Node::run()
{
    this->output = function->execute(inputs);
    return 0; // not sure what to return here
}