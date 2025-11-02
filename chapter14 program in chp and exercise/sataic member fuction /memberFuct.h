#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
private:
    static double corpBudget;
    double divisonBudget;
public:
 Budget() {
        divisonBudget = 0;
    }

    void addBudget (double b) {
        divisonBudget += b;
        corpBudget += b;
    }

    double getDivisionBudget() const {
        return divisonBudget;
    }

    double getCorpBudget() {
        return corpBudget;
    }

    //sataic member fuction 

    static void mainOffice(double);

};

#endif