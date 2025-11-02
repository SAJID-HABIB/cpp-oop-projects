
#include <iostream>
using namespace std;

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    // Constructor with default values
    TestScores(double s1 = 0, double s2 = 0, double s3 = 0) {
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }

    // Mutators (Setters)
    void setScore1(double s1) { 
        score1 = s1;
     }

    void setScore2(double s2) {
         score2 = s2; 
        }

    void setScore3(double s3) { 
        score3 = s3; 
    }

    // Accessors (Getters)
    double getScore1() { 
        return score1; 
    }
    double getScore2() { 
        return score2; 
    }
    double getScore3() {
         return score3; 
        }

    // Function to calculate average
    double getAverage() {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    double s1, s2, s3;

    // Ask the user for 3 test scores
    cout << "Enter first test score: ";
    cin >> s1;

    cout << "Enter second test score: ";
    cin >> s2;

    cout << "Enter third test score: ";
    cin >> s3;

    // Create object with user input
    TestScores student(s1, s2, s3);

    // Display the scores and average
    cout << "\nTest Scores:" << endl;
    cout << "Score 1: " << student.getScore1() << endl;
    cout << "Score 2: " << student.getScore2() << endl;
    cout << "Score 3: " << student.getScore3() << endl;

    cout << "Average Score: " << student.getAverage() << endl;

    return 0;
}
