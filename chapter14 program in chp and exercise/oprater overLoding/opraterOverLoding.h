#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORE_H

#include<iostream>
#include<string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class studentTestScore
{
private:
    string studentName;
    double *testScore;
    int numTestScores;
    void creatScoresArray(int size) 
    {
        numTestScores = size;
        testScore = new double [size];
        for (int i = 0; i < size; i++)
        {
            testScore[i] = DEFAULT_SCORE;
        }
        
    }
public:
//constructor

studentTestScore(string name, int numScores)
{
   studentName = name;
   creatScoresArray(numScores);
}
//copy constructor

studentTestScore(const studentTestScore)
{
    studentName = obj.studentName;

}
    


#endif


