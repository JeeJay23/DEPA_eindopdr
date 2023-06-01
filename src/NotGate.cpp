#include "NotGate.h"

int NotGate::run()
{
    if (inputs.size() != 1)
    {
        printf("NotGate::run() - NotGate %s has %d inputs, expected 1\n", name.c_str(), inputs.size());
        return -1;
    }

    outputs[0] = !inputs[0];

    return 0;
}