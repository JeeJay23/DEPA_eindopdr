#include <stdio.h>
#include <vector>
#include <string>

class ANode
{
private:
    std::vector<bool> inputs;
    std::vector<bool> outputs;
    std::string name;
    std::vector<ANode *> nextNodes;

public:
    virtual int run() = 0;
    void setValue(bool input);

public:
    int propagationDelay;
};
