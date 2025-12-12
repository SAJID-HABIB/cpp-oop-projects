
// main.cpp
#include <iostream>
#include "ProductionWorker.h"
using namespace std;

//------------------Employee class------------------
Employee::Employee() {
    name = "";
    employeeNumber = 0;
    hireDate = "";
}

Employee::Employee(string n, int num, string date) {
    name = n;
    employeeNumber = num;
    hireDate = date;
}

void Employee::setName(string n) { name = n; }
void Employee::setEmployeeNumber(int num) { employeeNumber = num; }
void Employee::setHireDate(string date) { hireDate = date; }

string Employee::getName() const { return name; }
int Employee::getEmployeeNumber() const { return employeeNumber; }
string Employee::getHireDate() const { return hireDate; }

//------------------ProductionWorker class------------------
ProductionWorker::ProductionWorker() : Employee() {
    shift = 1;
    payRate = 0.0;
}

ProductionWorker::ProductionWorker(string n, int num, string date, int sh, double rate)
    : Employee(n, num, date) {
    shift = sh;
    payRate = rate;
}

void ProductionWorker::setShift(int sh) { shift = sh; }
void ProductionWorker::setPayRate(int rate) { payRate = rate; }

int ProductionWorker::getShift() const { return shift; }
double ProductionWorker::getPayRate() const { return payRate; }

//-----------main program---------------------
int main() {
    ProductionWorker worker("John Doe", 12345, "2023-01-15", 2, 25.50);

    cout << "Employee Name: " << worker.getName() << endl;
    cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
    cout << "Hire Date: " << worker.getHireDate() << endl;
    cout << "Shift: " << worker.getShift() << endl;
    cout << "Pay Rate: $" << worker.getPayRate() << endl;

    return 0;
}
