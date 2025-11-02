#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

class student
{
private:
    string name;
    int age;
    string grade;

 public:
    //constructor
    student();

    //setters
    void setName (string n);
    void setAge (int a);
    void setGrade (string g);

    //getters
    string gteName() const;
    int getAge() const;
    string getGrade() const;

    //fuction to display
    void display() const;
};

#endif
