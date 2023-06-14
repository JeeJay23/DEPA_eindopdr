#include <stdio.h>
#include "Node.h"

int main(int argc, char const *argv[])
{
    Node *gate = new Node("AND");

    std::printf("gate pointer: %#p\n", gate);

    return 0;
}
