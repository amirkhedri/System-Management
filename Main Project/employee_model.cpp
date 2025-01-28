#include "employee.h"
#include <iostream>
using Back::Employee;
void Employee::setName(std::string& n){
    name = n;
}
void Employee::setID(std::string& i){
    ID = i;
}
void Employee::setDepartmentID(std::string& i){
    department_id = i;
}
void Employee::setSalary(int h){
    salary = h;
}
void Employee::setHour(int h){
    hour = h;
}
void Employee::setMaliat(float m){
    maliat = m;
}
int Employee::getHour(){
    return hour;
}
float Employee::getMaliat(){
    return maliat;
}
std::string Employee::getName(){
    return name;
}
std::string Employee::getID(){
    return ID;
}
std::string Employee::getDepartmentID(){
    return department_id;
}
double Employee::getSalary(){
    return salary;
}
void Employee::setPhoneNumber(std::string& p){
    phone_number = p;
}
void Employee::setCodeMeli(std::string& e){
    codeMeli = e;
}
std::string Employee::getPhoneNumber(){
    return phone_number;
}
std::string Employee::getCodeMeli(){
    return codeMeli;
}
long long int Employee::tavan(int a , int b){
    long long int res=1;
    for(int i=0 ; i<b ; i++)
        res *= a;

    return res;
}
Employee::~Employee(){}

