#include <iostream>
#include <string>
using namespace std;

class employ {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Single constructor with default arguments
    employ(string n = "", int id = 0, string dept = "", string pos = "") {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }

    // Mutators (setters)
    void setName(string name) { 
        name = name; 
    }
    void setIdNumber(int idNumber) { 
        idNumber = idNumber; 
    }
    void setDepartment(string dept) {
         department = dept;
         }
    void setPosition(string pos) {
         position = pos;
         }

    // Accessors (getters)
    string getName() {
        return  name; 
    }
    int getIdNumber() {
        return this-> idNumber; 
    }
    string getDepartment() {
        return this-> department; 
    }
    string getPosition() {
        return this-> position; 
    }

    // Display function
    
};

int main () {
    // void display() {
    //     cout << name << "\t" << idNumber << "\t"
    //          << department << "\t" << position << endl;
    //          cout<<"my name sajid habib chughtai";
    // }

    
// Object creation and using setter/getter methods (Encapsulation in C++)

     employ emp;
    emp.setName("sajid");
    cout << "the name is :" << emp.getName() << endl;

     employ idNu;
     idNu.setIdNumber(12345678);
     cout<<"the id number is :" <<idNu.getIdNumber() <<endl;

     employ dept ;
     dept.setDepartment("computer science");
     cout<<"my deptament is :" <<dept.getDepartment() <<endl;

     employ pos;
     pos.setPosition("lahore :");
     cout<<"the position is :"<<pos.getPosition() <<endl;
    
    return 0;
}
