#include <stdio.h>
#include <iostream>
#include "fileReader.h"

int main(int argc, char const *argv[])
{
    FileReader reader("circuit1.txt");
    std::cout << reader.readNext();

    return 0;
}
