#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H

class gradeActivity
{
private:
    double score;
public:
//defalt constructor
    gradeActivity (){
        score = 0.0;
    }
    //parametize constructor 
    gradeActivity (double s) {
        score = s;
    }
    // setters
    void setScore (double s) {
        score = s;
    }
    // getters
    double getSCore () {
        return score;
    }
    char getLetterGrade () const;
};

#endif

