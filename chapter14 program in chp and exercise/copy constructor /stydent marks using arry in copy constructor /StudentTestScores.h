#ifndef STUDENTSCORES_H
#define STUDENTSCORES_H

#include<iostream>
using namespace std;

const double DefaultScore = 0.0;

class StudentTestScores
{
private:
    string studentName;
    double* testScore;
    int numTestScores;

    // Private helper function to create test score array
    void createTestScoreArray(int size );
public:

//constructor
StudentTestScores(string name, int numScores);

//copy constructor 
StudentTestScores(const StudentTestScores &obj);

//destructor 

~StudentTestScores();

//setters 
void setStudentName(string name);
void setTestScore(double score, int index);

///\gtters 

string getSudentName () const;
int getNumTestScores() const;
// int getTestScore () const;
double getTestScore (int index) const;
    
};

#endif