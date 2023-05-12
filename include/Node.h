#include <vector>
#include <string>

class Node
{
protected:
    std::string name;
    std::vector<int> inputs;
    int output;
    std::vector<Node*> nextNodes;

public:
    Node(std::string _name) : name(_name) {};
    virtual int run() = 0;

    void setValue(bool input)
    {
        inputs.push_back(input);
    };

public:
    int propagationDelay;
};