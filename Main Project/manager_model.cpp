#include "manager.h"
#include <iostream>

Back::Manager::Manager(std::string& name, std::string& id, std::string& d_id, std::string& phone , std::string&code , int hour = 0){
    setName(name);
    setID(id);
    setDepartmentID(d_id);
    setHour(hour);
    setCodeMeli(code);
    setPhoneNumber(phone);
    mohasebeMaliat();
    mohasebeSalary();
}
Back::Manager::Manager(){}

void Back::Manager::setPadash(double p){
    padash = p;
}
double Back::Manager::getPadash(){
    return padash;
}

Back::Manager::~Manager(){}
