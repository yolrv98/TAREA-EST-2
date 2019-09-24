#include "NodeList.h"

//------------------------------CONSTRUCTORS----------------------------------//

NodeList::NodeList() {
    next = NULL;
}

NodeList::NodeList(string pValue) {
    value = pValue;
    next = NULL;
}

NodeList::NodeList(const NodeList& orig) {
}
//--------------------------------GET-S---------------------------------------//

NodeList* NodeList::getNext() {
    return next;
}

string NodeList::getValue(){
    return value;
}

//--------------------------------SET-S---------------------------------------//

void NodeList::setNext(NodeList* pNext){
    next = pNext;
}

void  NodeList::setValue(char pValue){
    value = pValue;
}

//----------------------------------------------------------------------------//

NodeList::~NodeList() {
}

