#include "StudentTestScores.h"

//Private helper fuction 

// can access private members like testScore, numTestScores
void StudentTestScores::createTestScoreArray(int size)
{
    numTestScores = size;
    testScore = new double [numTestScores];

    for (int i = 0; i < numTestScores; i++)
    {
        testScore[i] = DefaultScore;
    }

}


    //constructor
StudentTestScores::StudentTestScores(string name, int numScores)
    {
        studentName = name;
        createTestScoreArray(numScores);
    }

    //copy constructor

    StudentTestScores::StudentTestScores(const StudentTestScores &obj) 
    {
        studentName = obj.studentName;
        numTestScores = obj.numTestScores;

    // creat new memrot 

    testScore = new double [numTestScores];
     for (int i = 0; i < numTestScores; i++)
     {
        testScore[i] = obj.testScore[i];
     }

     }

     //deconstructor

     StudentTestScores::~StudentTestScores()
     {
        delete[] testScore;
     }
     
     //setters 
     void StudentTestScores::setStudentName(string name)
     {
        studentName = name;
     }

     void StudentTestScores::setTestScore(double score, int index) 
     {
        testScore[index] = score;
     }

     //getters 

      string StudentTestScores::getSudentName() const 
      {
        return studentName;
      }

      int StudentTestScores::getNumTestScores() const 
      {
        return numTestScores;
      }

      double StudentTestScores::getTestScore(int index) const
    {
     return testScore[index];   
    }


     