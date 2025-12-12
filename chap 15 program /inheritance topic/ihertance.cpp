#include<iostream>
using namespace std;

class father
{
    protected :
    string surname = "habib";
};

class son1 : father {
    public:
    string name = "sajid";
       void show() {
        cout<< name <<"" << surname <<endl;
       }
    
};

class son2 : father {
    public:
    string name = "chughtai";
    void display() {
        cout << name << "" <<surname <<endl;
    }
};

int main () {
    son1 s1;
    s1.show();

    son2 s2;
    s2.display();
}
