#include "developer.h"
#include <iostream>


void Back::Developer::displayInfo(){
    std::cout << "Developer\n";
    std::cout << "name : " << this->getName() << std::endl;
    std::cout << "ID : " << this->getID() << std::endl;
    std::cout << "department id : " << this->getDepartmentID() << std::endl; // **************************
    std::cout << "phone number : " << this->getPhoneNumber() << std::endl;
    std::cout << "code meli : " << this->getCodeMeli() << std::endl;
    std::cout << "work hour : " << this->getHour() << std::endl;
    std::cout << "salary : " << this->getSalary()/tavan(10 , 6) << " milion toman" << std::endl;
}
