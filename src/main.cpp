#include <stdio.h>
#include "LogicGate.h"

int main(int argc, char const *argv[])
{
    LogicGate *gate = new LogicGate("AND");

    std::printf("gate pointer: %p\n", gate);

    return 0;
}
