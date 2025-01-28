#include "developer.h"
#include <iostream>
Back::Developer::Developer(std::string& name, std::string& id, std::string& d_id, std::string& phone , std::string&code , int hour = 0){
    setName(name);
    setID(id);
    setDepartmentID(d_id);
    setHour(hour);
    setCodeMeli(code);
    setPhoneNumber(phone);
    mohasebeMaliat();
    mohasebeSalary();

}
Back::Developer::Developer(){}
void Back::Developer::setPadash(double s){
    padash = s;
}

double Back::Developer::getPadash(){
    return padash;
}


Back::Developer::~Developer(){}
