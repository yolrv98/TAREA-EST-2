#include "NodeTree.h"
//--------------------------------CONSTRUCTORS--------------------------------//

NodeTree::NodeTree() {
}

NodeTree::NodeTree(string pValue) {
    value = pValue;
    HDer, HIzq = NULL;
}

NodeTree::NodeTree(const NodeTree& orig) {
}
//----------------------------------GET-S-------------------------------------//

NodeTree * NodeTree::getHDer() {
    return HDer;
}

NodeTree * NodeTree::getHIzq() {
    return HIzq;
}

string NodeTree::getValue() {
    return value;
}

//-----------------------------------SET-S------------------------------------//

void NodeTree::setHDer(NodeTree* pHDer) {
    HDer = pHDer;
}

void NodeTree::setHIzq(NodeTree* pHIzq) {
    HIzq = pHIzq;
}

void NodeTree::setValue(char pValue) {
    value = pValue;
}
//----------------------------------------------------------------------------//

NodeTree::~NodeTree() {
}

