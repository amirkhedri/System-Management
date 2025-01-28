#ifndef NODES_H
#define NODES_H

#include "employee.h"
#include <iostream>

//QT_BEGIN_NAMESPACE
//namespace Back{class Nodes;}
//QT_END_NAMESPACE

//using Back::Employee;

namespace Back{
    
class Nodes
{
    Nodes* next;
    Nodes* prev;
    Employee* data;
    
public:
    Nodes();
    Nodes(Employee* emp);
    void setData(Employee* x);
    Employee* getData();
    void setNext(Nodes* n);
    Nodes* getNext();
    void setPrev(Nodes* n);
    Nodes* getPrev();
    
};
};

#endif