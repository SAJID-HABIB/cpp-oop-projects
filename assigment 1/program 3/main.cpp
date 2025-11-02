#include "student.h"

int main() {
    student s1("sajid",2625, 3.45);
    student s2("chughtai",2624, 3.3);

    cout<<"student one :";
    s1.display();

    cout<<"student two :";
    s2.display();
    cout<<endl;
    // compare roll number
    if (s1 == s2)
    {
            cout<<"student one and student two have the same roll number"<<endl;
    } else
    cout<<"student one and student two have deffrent roll number"<<endl;
    //compare the gpa 
    if (s1 > s2)
    {
        cout<<"student one has higher gpa :"<<endl;
    } else
    cout<<"the student two has higher gpa :"<<endl;

    //copy constructor
    student s3 = s1 ;//copy constructor caled
    cout<<"\n copy student (s3) details : "<<endl;
    s3.display();
    return 0;
    
}