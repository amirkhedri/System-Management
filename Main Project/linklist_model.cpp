#include "linklist.h"

using Back::LinkList;

Nodes::Nodes(){
    this->next = this->prev = nullptr;
    this->data = nullptr;
}
Nodes::Nodes(Employee* emp){
    this->next = this->prev = nullptr;
    this->data = emp;
}
void Nodes::setData(Employee* x){
    this->data = x;
}
Back::Employee* Nodes::getData(){
    return this->data;
}
void Nodes::setNext(Nodes* n){
    this->next = n;
}
Nodes* Nodes::getNext(){
    return this->next;
}
void Nodes::setPrev(Nodes* n){
    this->prev = n;
}
Nodes* Nodes::getPrev(){
    return this->prev;
}

//////////////////////////////////////////////

LinkList::LinkList(){ 
    this->head = this->tail = nullptr;
    this->size = 0;
};
Nodes* LinkList::getHead(){
    return head;
}
Nodes* LinkList::getTail(){
    return tail;
}
int LinkList::getSize(){
    return size;
}
void LinkList::setHead(Nodes* n){
    head = n;
}
void LinkList::setTail(Nodes* n){
    tail = n;
}
void LinkList::setSize(int n){
    size = n;
}
