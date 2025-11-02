#include<iostream>
#include<string>
#include<limits>
#include "student.h"
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the number of the stydent :"<<endl;
    cin>>n;

    //dinamicallly allocate array of the student of object

    student *students = new student[n];

    //input data for each student
    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        string grade;

        cout<<"Enter the detail of the student "<<i + 1<<endl;
        cout<<"Name :";

       cin.ignore(numeric_limits<streamsize>::max(), '\n');// To clear newline character from buffe
        getline(cin, name);
        cout<<"Age :";
        cin>>age;
        cout<<"Grade :";
        cin>>grade;

        students[i].setName(name);
        students[i].setAge(age);
        students[i].setGrade(grade);
    }
    cout<<"****************student detail****************"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Students :"<<i + 1<<endl;
        students[i].display();
    }
    delete[] students;
    
}