#include<iostream>
#include<iomanip>
#include "budge.h"
using namespace std;

int main () 
{
    int count;
    const int NUM_DIVISIOn = 4;
    budget division[NUM_DIVISIOn]; //array of the object
    for (count = 0; count < NUM_DIVISIOn; count++)
    {
        double budgetAmount;
        cout<<"Enter the budget ammount for the division";
        cout<< (count + 1) <<" :";
        cin>>budgetAmount;
        division[count].addBudget(budgetAmount);

    }

    cout << "\nHere are the division budget requests:\n";

    for (int count = 0; count < NUM_DIVISIOn; count++)
    {
        cout << "\tDivision " << (count + 1) << "\t$ ";
        cout << division[count].getDivisionBudget() << endl;
    }

    cout<<"\t TOTAL budget requied :";
    cout<< division[0].getCorpBudget()<<endl;

    return 0;
    
}