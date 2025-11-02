#include <iostream>
#include <string>
using namespace std;
// Car class definition
class car {
private:
    int yearModel;
    string make;
    int speed;
public:
      // Constructor : ka name and class name same hota ha 
      //  y= year , m = make
      car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
      }

    //   getters
    int getYerModel() {
      return yearModel;
     }
    string getMake() {
      return make;
    }
    int getSpeed() {
      return speed;
    }

      // Member functions

      // asa fuction jo jo class ma hi serif use ho 

      void accelerate() {
        speed += 5;
      }
      void brake() {
        speed -= 5;
        if (speed < 0)
        speed = 0; 
      }
};

// main fuction 

int main() {
  //creat a car  object 
  car  myCar(2022,"toyota");
  //Accelerate 5 times 
  cout <<"Accelerating...."<<endl;
  for (int i = 0; i < 5; i++)
  {
    myCar.accelerate();
    cout<<"curret speed :"<< myCar.getSpeed() << "km/h"<<endl;
    }
    //brake 5 times 
    cout << "\nBraking..." << endl;
    for (int i = 0; i < 5; i++)
    {
      myCar.brake();
      cout << "current speed :"<< myCar.getSpeed() << "km/h"<< endl;
    }
    return 0;
}




