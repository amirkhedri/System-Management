#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "employee.h"
#include <iostream>

namespace Back{
    

class Developer : public Employee
{
private:
    double padash;
    double ezafeHoghogh;
public:
    Developer(string& , string& , string& , string&  , string& , int );
    Developer();
    void setPadash(double s);
    double getPadash();
    void displayInfo();
    void mohasebeSalary();
    void mohasebeMaliat();
    ~Developer();
};
};
#endif