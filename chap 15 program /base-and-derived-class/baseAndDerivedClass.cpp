#include <iostream>
using namespace std;

class Animal {      // this is a base class 
    public :
    virtual  void speak () {
    cout<<"Animal sound"<<endl;

    }
};

class Dog : public Animal {  // this is a drived class
    public :
    void speak() override {
        cout<<"waoo" <<endl;
    }
};


int main () {
    Dog dog;
    dog.speak();

    return 0;
}