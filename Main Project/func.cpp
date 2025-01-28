#include "func.h"

void addEmployee(Back::LinkList& list ,string& name, string& id, string& d_id, string& phone , string&code , int hour = 0 )
{
    if(d_id == "1"){
        Back::Manager* ob = new Back::Manager(name , id , d_id , phone , code , hour);
        list.addFront(ob);
    }
    else{
        Back::Developer* ob = new Back::Developer(name , id , d_id , phone , code , hour);
        list.addFront(ob);
    }
}

double calculateTotalSalary(Back::LinkList& list)
{
    Nodes* temp = list.getHead();
    double totalSalary = 0;
    while(temp){
        totalSalary += temp->getData()->getSalary();
        temp = temp->getNext();
    }
    temp = nullptr;
    delete temp;
    return totalSalary;
}