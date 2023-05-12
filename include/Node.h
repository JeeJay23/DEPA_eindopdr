#include <vector>
#include <string>

using namespace std;

class Node
{
private:
    vector<bool> inputs;
    vector<bool> outputs;
    string name;
    vector<Node*> nextNodes;

public:
    Node(string name) : name(name),{};
    virtual int run() = 0;

    void setValue(bool input)
    {
        inputs.push_back(input);
    };

public:
    int propagationDelay;
};