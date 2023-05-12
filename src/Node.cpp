#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class ANode
{
private:
    vector<bool> inputs;
    vector<bool> outputs;
    string name;
    vector<ANode *> nextNodes;

public:
    virtual int run() = 0;

    void setValue(bool input)
    {
        inputs.emplace(inputs.end(), input);
    };

public:
    int propagationDelay;
};
