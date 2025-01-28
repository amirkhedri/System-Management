#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

namespace Back{

using std::string;
class Employee
{
private:
    std::string name;
    std::string ID;
    std::string department_id;
    double salary;
    int hour;
    float maliat;
    std::string phone_number;
    std::string codeMeli;
public:

    void setName(std::string& n);
    void setID(std::string& i);
    void setDepartmentID(std::string& i);
    void setSalary(int h);
    void setHour(int h);
    void setMaliat(float m);
    void setPhoneNumber(std::string&);
    void setCodeMeli(std::string&);
    std::string getPhoneNumber();
    std::string getCodeMeli();
    int getHour();
    float getMaliat();
    std::string getName();
    std::string getID();
    std::string getDepartmentID();
    double getSalary();
    long long int tavan(int , int );
    virtual void mohasebeSalary() = 0;
    virtual void mohasebeMaliat() = 0;
    virtual void displayInfo() = 0;
    virtual ~Employee();
};
};

#endif
