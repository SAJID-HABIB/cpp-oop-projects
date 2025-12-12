#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;
public:
    // -----------Constructor---------------
    Employee();
    //default constructor
    //perimeterized constructor
    Employee(string n, int num, string date);
    //-----------------setters-------------
    void setName(string n);
    void setEmployeeNumber(int num);
    void setHireDate(string date);
    // ------------getters-----------
    // ----------------------getters----------------
    string getName ()const;
    int getEmployeeNumber ()const;
    string getHireDate ()const;

};

#endif