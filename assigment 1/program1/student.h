#ifndef STUDENTMANAGMENT
#define STUDENTMANAGMENT

#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int rollNumber;
    float gpa;
public:
    // default constructor

    student ();
    //  {
    //     name = "unknown";
    //     rollNumber = 2625;
    //     gpa = 3.45;
    // }

    // parametize constructor

    student (string n, int rolNu, float g);
       //setters
       void setName(string n);
       void setRollNumber (int rolNu);
       void setGpa (float g) ;

    //    getters
    string getName();
    int getRollNumber();
    float getGpa();

    // display fuctin call
    void display();
    


};
#endif