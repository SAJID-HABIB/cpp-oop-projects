#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"
//------------------derived class--------------
class TeamLeader : public ProductionWorker{
private:
    double monthlyBonus;
    double requiredTrainingHours;
    double attendedTrainingHours;
public:
    //------------------constructor------------------
    TeamLeader();
    TeamLeader(string n, int num, string date, int sh, double rate, double);
    //---------------------setters--------------------
    void setMonthlyBonus(double bonus);
    void setRequiredTrainingHours(double reqHours);
    void setAttendedTrainingHours(double attHours);
    //----------------------getters--------------------
    double getMonthlyBonus() const;
    double getRequiredTrainingHours() const;
    double getAttendedTrainingHours() const;    
};
#endif 

