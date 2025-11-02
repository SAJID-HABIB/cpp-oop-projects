#include "student.h"

//defalte constructor 

student :: student() {
    name = "unknown";
    rollNumber = 0;
    gpa = 3.45;
    cout<<"defalt constructor called !"<<endl;
}
    // parametize constructor 
    student::student(string n, int rolNu, float g) {
        name = n;
        rollNumber = rolNu;
        gpa = g;
        // cout<<"parametize constructor called!";
    }

    //setters 

    void student::setName(string n) {
        name = n;
    }

     void student::setRollNumber(int rolNu) {
    rollNumber = rolNu;
}

void student::setGpa(float g) {
    gpa = g;
}

//gettres
 string student::getName() {
    return name;
 }

 int student::getRollNumber() {
    return rollNumber;
 }

 float student::getGpa() {
    return gpa;
 }

 void student::display () {
    cout<<"the name of the student is "<<name<<endl;
    cout<<"the roll Number of the student is "<<rollNumber<<endl;
    cout<<"the GPA is "<<gpa<<endl;
 }



