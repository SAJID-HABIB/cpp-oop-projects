#include<iostream>
#include "student.h"
using namespace std;

student::student() {
    name = "";
    age = 0;
    grade = "";
}

//setters 
 void student::setName(string n){
    name = n;
 }
void student::setGrade(string g){
    grade = g;
 }

 void student::setAge(int a){
    age = a;
 }

//  getters

string student::gteName() const{
    return name;
}

int student::getAge() const {
    return age;
}

string student::getGrade() const {
    return grade;
}

//display 
void student::display() const {
    cout<<"Name :" << name<<endl;
    cout<<"Age :" <<age <<endl;
    cout<<"Grade :" <<grade<<endl;
}