#ifndef BUDGET_H
#define BUDGET_H

//class declaration 

class budget
{
private:
    //sataic veriable 
    static double corpBudget;
    double divisonBudget;
public:
//constructor 
budget () {
    divisonBudget = 0;
}

void addBudget (double b) {
    divisonBudget += b;
    corpBudget += b;
}

double getDivisionBudget() const {
    return divisonBudget;
}

double getCorpBudget() const {
    return corpBudget;

}

};

#endif

