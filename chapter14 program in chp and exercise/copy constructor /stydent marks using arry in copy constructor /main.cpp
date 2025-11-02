#include<iostream>
#include "StudentTestScores.h"
using namespace std;

int main() 
{
    string name;
    int numScores;
    cout<<"Enetr the student name :";
    getline(cin ,name);

    cout<<"Enetr number of the test ccores :";
    cin>>numScores;

    //normal constructor
    StudentTestScores s1(name, numScores);

    double score;

    for (int i = 0; i < numScores; i++)
    {
        cout<<"Enetr the score " << i + 1 << ":";
        cin>>score;

        s1.setTestScore(score,i);
    }

    //copy constructor
    StudentTestScores s2= s1;
    cout<<"\nEnter the new name for the first student :";
    cin.ignore();
    getline(cin, name);
    s1.setStudentName(name);
    //diplay both student 
    
    cout<<"\nStudent 1:"<<s1.getSudentName() <<endl;
    for (int i = 0; i < s1.getNumTestScores() ;i++)
    cout <<"score" <<i + 1 <<s1.getTestScore(i)<<endl;

    cout<<"\nStudent 2 :"<<s2.getSudentName()<<endl;
    for (int i = 0; i < s2.getNumTestScores(); i++)
    cout<<"Score " <<i + 1<<":"<<s2.getTestScore(i)<<endl;  
    
    // StudentTestScores s1("sajid",3);
    // //set score
    // s1.setTestScore(90,0);
    // s1.setTestScore(85.0,1);
    // s1.setTestScore(70,2);

    // //craet second student as a copy of the first

    // StudentTestScores s2 = s1;

    // s1.setStudentName("chughtai");
    // //display both student 
    // cout<<"student 1:"<< s1.getSudentName() <<endl;
    // for (int i = 0; i < s1.getNumTestScores(); i++)
    // cout<<"score " <<i + 1 << ":" << s1.getTestScore(i) <<endl;
    // cout<<"\nstudent 2 :" <<s2.getSudentName() <<endl;
    // for (int i = 0; i < s2.getNumTestScores(); i++)
    // cout<<"score " << i + 1<<":" <<s2.getTestScore(i) <<endl;

    return 0;
}

