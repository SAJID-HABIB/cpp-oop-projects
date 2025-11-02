#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>

using namespace std;

class student
{
private:
    char *name; //pointer
    int rollNumber;
    float gpa;
public:
    //constructor
    student(const char *n = "", int r = 0, float g = 0.0);
    //copy constrouctor
    student(const student& other);
    //prators overlods 
    student& operator=(const student& other);
    bool operator==(const student& other);
    bool operator>(const student& other);
    //member fuction
    void display() const;
    //destructor
    ~student();
};
#endif
