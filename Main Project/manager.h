#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"
#include <iostream>

namespace Back{ 
    

class Manager : public Employee
{
private:
    double padash;
    int level;
public:
    Manager(std::string& , std::string& , std::string& , std::string& , std::string&, int );
    Manager();
    void setPadash(double);
    double getPadash();
    void displayInfo();
    void mohasebeSalary();
    void mohasebeMaliat();
    ~Manager();
};
};

#endif