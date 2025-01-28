#include "manager.h"

void Back::Manager::mohasebeMaliat(){
    if(getHour() < 104){ 
        // kamtar rozi 4 saat
        setMaliat(6/100);
    }
    else if(getHour() >= 104 && getHour() < 156){
        // ta rozi 6 saat
        setMaliat(8/100);
    }
    else{
        //bishtar rozi 6 saat
        setMaliat(1/10);
    }
}
void Back::Manager::mohasebeSalary(){
    double salary;
    if(getHour() < 104){ 
        // kamtar rozi 4 saat
        salary = getHour()*90000;
        salary = salary - salary*getMaliat();
    }
    else if(getHour() >= 104 && getHour() < 156){
        // ta rozi 6 saat
        salary = getHour()*105000;
        salary = salary - salary*getMaliat();
    }
    else{
        //bishtar az rozi 6 saat
        salary = getHour()*120000;
        salary = salary - salary*getMaliat();
    }
    salary += padash;
    setSalary(salary);
}


