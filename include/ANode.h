#pragma once

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class ANode
{
protected:
    vector<bool> inputs;
    vector<bool> outputs;
    string name;
    vector<ANode *> nextNodes;

public:
    

    virtual int run() = 0;

    void setValue(bool input)
    {
        inputs.push_back(input);
    };

public:
    int propagationDelay;
};
