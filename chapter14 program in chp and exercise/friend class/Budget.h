#ifndef BUDGET_H
#define BUDGET_H

class Budget; // forward declare

class AuxiliaryOffice
{
private:
    double auxBudget;

public:
    AuxiliaryOffice() { auxBudget = 0; }
    void addBudget(double, Budget &);
};

class Budget
{
    friend void AuxiliaryOffice::addBudget(double, Budget &);

private:
    double corpBudget;

public:
    Budget() { corpBudget = 0; }
    double getCorpBudget() const { return corpBudget; }
};

#endif
