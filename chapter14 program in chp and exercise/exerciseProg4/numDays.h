#ifndef NUMDAYS_H
#define NUMDAYS_H
using namespace std;

class numDays
{
private:
    double hours;
    double days;
    
    void calculateDays(); //helper fuction
public:
    //constructor
    numDays(double h = 0);
    //setters
    void setHours(double h);
    double getHours() const;
    double getDays() const;

    //oprater overlord
    numDays operator+(const numDays& right) const;
    numDays operator-(const numDays& right) const;
    numDays operator++(); //prefix increment 
    numDays operator++(int);//decrement oprater
    numDays operator--(); //prefix edcreemnt oprater
    numDays operator--(int); //postfix decrement oprater

}; 


#endif
