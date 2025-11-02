#include "course.h"

//  default + parameterized constructor
course::course(string name, int hours) 
{
    courseName = name;
    creditHours = hours;
}

//copy constructor 
course::course(const course& other) 
{
    courseName = other.courseName;
    creditHours = other.creditHours;
}

// assigment opraters 
course& course::operator=(const course&  other)
{
    if (this != &other)
    {
        courseName = other.courseName;
        creditHours = other.creditHours;
    }

    return *this;  
}

// dectroctor
course::~course()
{

}

//setters 

string course::getCourseName() const {
    return courseName;
}

int course::getCreditHours()const
{
    return creditHours;
}

//setters 
void course::setCourseName(string name) 
{
    courseName = name;
}

void course::setCreditHours(int hours ) 
{
    creditHours = hours;
}

//display

void course::display() const
{
    cout<<"Corse name is :"<<courseName<<endl;
    cout<<"credit hours :"<<creditHours<<endl;
}