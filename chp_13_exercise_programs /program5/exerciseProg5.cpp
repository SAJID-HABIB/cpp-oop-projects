#include<iostream>
#include<string>
using namespace std;
//retail item 
class Retailitems 
{
private:
    string description;
    int unitsOnHand;
    double price;
public:
    //constuucctor
    Retailitems(string desc,int units, double pr) {
        description = desc;
        unitsOnHand = units;
        price = pr;
    }
    void setDescription (string desc) {
        description = desc;
    }

    void setUnitsOnHand (int units) {
        unitsOnHand = units;
    }

    void setprice (int pr) {
        price = pr;
    }
    // setters
    
    
     string getDescription (string desc) {
        description = desc;
    }

    int getUnitsOnHand (int units) {
        unitsOnHand = units;
    }

    double getprice (int pr) {
        price = pr;
    }

    // fuction 

    void displayItem () const {
        cout<<"description :"<<description<<endl;

        cout<< "units on hands :"<<unitsOnHand<<endl;
        cout<<"price :" <<price<<endl;
    }

};

// main 

int main () {
    Retailitems item1("jacket",12,59.95);
    Retailitems item2("Designer Jeans", 40, 34.95);
    Retailitems item3("Shirt", 20, 24.95);


    cout<<"reatil item stored";

    // fustion call;
    item1.displayItem();
    item2.displayItem();
    item3.displayItem();


    return 0;
}