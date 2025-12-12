#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"
// ------------------drived class-----------
class ProductionWorker : public Employee
{
private:
    int shift;
    double payRate;
public:
    //-----------------constructor------------------
    ProductionWorker();
    ProductionWorker(string n, int num, string date, int sh, double rate);
    //---------------------setters--------------------
    void setShift(int sh);
    void setPayRate(int rate);
    //----------------------getters--------------------
    int getShift() const;
    double getPayRate() const;
};
#endif