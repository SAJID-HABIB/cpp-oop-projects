#include "course.h"
#include <iostream>
using namespace std;

//student class aggeration 

int main () 
{
    cout<<"creting course 1"<<endl;
course c1("object orinted programing",4);
c1.display();

cout<<"creating course 2 using copy constructor"<<endl;
course c2 = c1; //call the copy constructor
c2.display();


cout<<"assigning course 2 to course :"<<endl;
c1 = c2;
c1.display();

cout<<"program end";
return 0;
    
}