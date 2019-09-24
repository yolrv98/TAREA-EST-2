#ifndef NODELIST_H
#define NODELIST_H
#include"MyLibrary.h"

class NodeList {
public:
    //-------CONSTRUCTOR-----------//
    NodeList();
    NodeList(const NodeList& orig);
    //----------GET-S------------//
    NodeList* getNext();
    string getValue();
    //----------SET-S------------//
    void setNext(NodeList* pNext);
    void setValue(char pValue);
    //--------------------------//
    virtual ~NodeList();

private:
    string value;
    NodeList *next;

};

#endif /* NODELIST_H */

