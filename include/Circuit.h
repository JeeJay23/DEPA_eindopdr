#include <vector>
#include <string>
#include <map>
#include <memory>

#include "Node.h"

typedef std::shared_ptr<Node> NodePtr;

class Circuit
{
private:
    std::vector<NodePtr> nodes;
    std::map<std::string, int> nodeNameToIdLookup;
    std::vector<int> sortedIds;
    std::vector<int> probes; // not sure if this will work

public:
    Circuit();
    ~Circuit();

    // calculate the output of the circuit
    // TODO: decide if vector is the best return type
    int run();

    static Circuit createCircuit(std::string);
    void addNode(NodePtr node);
    void sortNodes();
    int getNodeId(std::string nodeName);
    void addProbe(std::string nodeName);
    void printNodes();
};