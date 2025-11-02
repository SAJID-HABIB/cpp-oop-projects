#include"numDays.h"
//heloer to calculate the days 
void numDays::calculateDays() {
    days = hours / 8.0;
}

//constructor
numDays::numDays(double h) {
    hours = h;
    calculateDays();
}

//setters 
void numDays::setHours(double h) {
    hours = h;
    calculateDays();
}
//getters
double numDays::getHours()const {
    return hours;
}
double numDays::getDays()const {
    return days;
}

//oprater overlord
numDays numDays::operator+(const numDays& right) const {
    return numDays(hours + right.hours);
}

numDays numDays::operator-(const numDays& right) const {
    return numDays(hours - right.hours);
}

// prefix incremet

numDays numDays::operator++() {
    ++hours;
    calculateDays();
    return *this;
}

//post increment 
numDays numDays::operator++(int) {
    numDays temp = *this;
    hours++;
    calculateDays();
    return temp;
}

//pre decrement 
numDays numDays::operator--(int) {
    --hours;
    calculateDays();
    return *this;
}

// post decrement 

numDays numDays::operator--(int) {
    numDays temp = *this;
    hours--;
    calculateDays();
    return temp;
}