#include <map>
#include <string>

class Circuit
{
private:
    // std::map<char *, ANode *> nodes;

public:
    Circuit(/* args */);
    ~Circuit();
    void run();
    // void addNode(ANode *node);
    static Circuit createCircuit(std::string);

private:
};