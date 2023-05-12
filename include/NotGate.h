#include "ANode.h"

class NotGate : public ANode
{
public:
    NotGate() = default;

    int run() override;
};