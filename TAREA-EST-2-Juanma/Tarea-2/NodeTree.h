#ifndef NODETREE_H
#define NODETREE_H
#include"MyLibrary.h"

class NodeTree {
public:
    //----------CONSTRUCTORS-----------//
    NodeTree();
    NodeTree(string pValue);
    NodeTree(const NodeTree& orig);
    //-------------GET-S--------------//
    NodeTree* getHDer();
    NodeTree* getHIzq();
    string getValue();
    //-------------SET-S--------------//
    void setHDer(NodeTree* pHDer);
    void setHIzq(NodeTree* pHIzq);
    void setValue(char pValue);
    virtual ~NodeTree();

private:
    string value;
    NodeTree *HDer;
    NodeTree *HIzq;
};

#endif /* NODETREE_H */

