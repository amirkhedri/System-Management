#ifndef FUNC_H
#define FUNC_H

#include "linklist.h"
#include "manager.h"
#include "developer.h"
#include <iostream>

using namespace std;

void addEmployee(Back::LinkList&  ,string& , string& , string& , string& , string& , int );

double calculateTotalSalary(Back::LinkList&);

#endif
