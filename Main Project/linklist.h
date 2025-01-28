#include "nodes.h"

#ifndef LINKLIST_H
#define LINKLIST_H

using Back::Nodes;

namespace Back{
    

class LinkList
{
private:
    Nodes* head;
    Nodes* tail;
    int size;

public:
    LinkList();
    void addFront(Employee*);
    void popNode(Employee& );
    Nodes* getHead();
    Nodes* getTail();
    int getSize();
    void setHead(Nodes* );
    void setTail(Nodes* );
    void setSize(int );
    Employee* operator[](std::string& );// for find employee
    void listEmployee();
};
};

#endif