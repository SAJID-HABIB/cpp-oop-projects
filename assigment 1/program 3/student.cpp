#include "student.h"
#include<cstring>

///\constructor
student::student(const char *n, int r, float g) {
    name = new char[strlen(n)+1];
    strcpy(name, n);
    rollNumber = r;
    gpa = g;

}
//copy comstructor (deep copy)
student::student(const student& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    rollNumber = other.rollNumber;
    gpa = other.gpa;
}

// oprated deep cpy 
student& student::operator=(const student& other) {
    if (this != &other)
    {
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        rollNumber = other.rollNumber;
        gpa = other.gpa;
    }
    return *this;
    
}

//oprator == (compare by gpa)
bool student::operator==(const student& other) {
    return this->rollNumber == other.rollNumber;

}
//oprator > (copare by gpa )
bool student::operator>(const student& other) {
    return this->gpa >other.gpa;
}

// display fuction
void student::display() const {
    cout<<"Name :" <<name <<", RollNumber :" <<rollNumber <<", Gpa :" <<gpa <<endl;
}

//desctuctor
student::~student() {
    delete[] name;
}