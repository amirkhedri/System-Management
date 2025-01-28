#include "linklist.h"
#include <iostream>

void Back::LinkList::listEmployee(){
    Nodes* temp = this->getHead();
    int i=1;
    while (temp)
    { 
        std::cout << i << "- name : "<< temp->getData()->getName() << "\t\tID : " << temp->getData()->getID() << "\t\tdepartment ID : " << temp->getData()->getDepartmentID() <<std::endl;
        temp = temp->getNext();
        i++;
    }
    temp = nullptr;
    delete temp;
}
