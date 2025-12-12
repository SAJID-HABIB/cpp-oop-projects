#include <iostream>
#include "gradeActivity.h"
using namespace std;
 int main () {
    double testScore;
    gradeActivity test;
    cout<<"Enter your nymaric test score";
    cin>>testScore;
    test.setScore(testScore);

    cout <<"The grade for that test is " <<test.getLetterGrade()<<endl;
    return 0;
 }