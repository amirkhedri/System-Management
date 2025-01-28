#include "developer.h"


void Back::Developer::mohasebeMaliat(){
    if(getHour() < 208){ 
        // kamtar rozi 8 saat
        setMaliat(9/100);
    }
    else if(getHour() >= 208 && getHour() < 260){
        // ta rozi 10 saat
        setMaliat(1/10);
    }
    else{
        //bishtar rozi 10 saat
        setMaliat(11/100);
    }
}


void Back::Developer::mohasebeSalary(){
    double salary = 0;
    if(getHour() < 104){ 
        // kamtar rozi 4 saat
        salary = getHour()*67000;
        salary = salary - salary*getMaliat();
    }
    else if(getHour() >= 104 && getHour() < 156){
        // ta rozi 6 saat
        salary = getHour()*80000;
        salary = salary - salary*getMaliat();
    }
    else{
        //bishtar rozi 6 saat
        salary = getHour()*95000;
        salary = salary - salary*getMaliat();
    }
    salary += padash;
    setSalary(salary);
}
