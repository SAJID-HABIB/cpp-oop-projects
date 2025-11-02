#include<iostream>
#include<iomanip>
#include "memberFuct.h"


double Budget::corpBudget = 0;

void Budget::mainOffice(double mOffice) {
    corpBudget += mOffice;
}