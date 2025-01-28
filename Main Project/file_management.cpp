#include "file_management.h"

void saveEmployees(string filepath , Back::LinkList& list){

    ofstream out (filepath);
    Nodes* temp = list.getHead();
    while(temp){
        out << temp->getData()->getName() << endl;
        out << temp->getData()->getID() << " " << temp->getData()->getDepartmentID() << " " << temp->getData()->getPhoneNumber() << " ";
        out << temp->getData()->getCodeMeli() << " " << temp->getData()->getHour() << endl;
        temp = temp->getNext();
    }
    temp = nullptr;
    delete temp;
}

void loadEmployees(string filepath ,Back::LinkList& list){
    ifstream in (filepath);
    if(in.is_open()){
        string name;
        string ID;
        string departmentID;
        string phoneNumber;
        string codeMeli;
        int hour;
        while(getline(in , name)){
            in >> ID;
            in >> departmentID;
            in >> phoneNumber;
            in >> codeMeli;
            in >> hour;

            addEmployee(list , name , ID , departmentID , phoneNumber , codeMeli , hour);
            in.ignore();
        }
    }
    else{
        throw std::bad_alloc();
    }
}
