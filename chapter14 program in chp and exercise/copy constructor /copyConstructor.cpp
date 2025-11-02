//copy constructor synatax 

//  className (const className &oldObject);

#include<iostream>
using namespace std;

class student
{
private:
    int age;
public:
    // normal constructor 
    student(int a) {
        age = a; 
    }
    // copy constructor
    student (const student &s) 
    {
        age = s.age; // copy the value
    }

    // fuction 
    void display () 
    {
        cout<< "my age is :" <<age << endl;
        cout<< "my age is :" <<age << endl;
    }
};

int main () 
{
    student s1 (20); //normal constructor call
    student s2 = s1; //copy constructor call
    //  value s1 copy in s2 
    s1.display();
    s2.display();

    return 0;

};

