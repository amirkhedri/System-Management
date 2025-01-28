#include "linklist.h"
#include <iostream>

using Back::Employee;
using Back::LinkList;
Employee* LinkList::operator[] (std::string& id){
    Nodes* temp = this->getHead();
    Employee* data = nullptr;
    while(temp){
        if(temp->getData()->getID() == id){
            data = temp->getData();
            break;
        }
        else{
            temp = temp->getNext();
        }
    }
    temp = nullptr;
    delete temp;
    return data;
}

void LinkList::addFront(Employee* d)
{
    Nodes* node = new Nodes(d);
    node->setNext(this->head);
    if(this->head)
        this->head->setPrev(node);
    
    this->head = node;

    if(this->tail == nullptr){
        this->tail = node;
    }
    this->size++;
}

void LinkList::popNode(Employee& d){
    std::string id = d.getID();
    Nodes* temp = this->getHead();
    while(temp){
        if(temp->getData()->getID() == id){
            temp->setData(nullptr);
            temp->getPrev()->setNext(temp->getNext());
            this->setSize(this->getSize()-1);
            break;
        }
        else{
            temp = temp->getNext();
        }
    }
    temp = nullptr;
    delete temp;
}
