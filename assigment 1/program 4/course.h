#ifndef COURSE_H
#define COURSE_H

#include<iostream>
using namespace std;

class course
{
private:
    string courseName;
    int creditHours;
    // course* enrolledCourse;
    
public:
    //defalt  + parametize constructor
    course(string  name = "", int hours = 0);
    //copy constructor
    course(const course& other); //other is just a name — like a variable name.
    //assigment oprater 
    course& operator=(const course& other);

    //destructure
    ~course();

    //getters
    string getCourseName() const;
    int getCreditHours() const;
    //settres
    void setCourseName(string name);
    void setCreditHours(int hours);
    //fuction to display , fuction call
    void display() const;
};

#endif