#include "TeamLeader.h"
#include <iostream>
using namespace std;

int main() {
    // Create a TeamLeader object using parameterized constructor
    TeamLeader leader("Alice Johnson", 12345, "2020-01-15", 1, 25.50, 500.00);

    // Display initial values using getters
    cout << "Team Leader Details:" << endl;
    cout << "Name: " << leader.getName() << endl;
    cout << "Employee Number: " << leader.getEmployeeNumber() << endl;
    cout << "Hire Date: " << leader.getHireDate() << endl;
    cout << "Shift: " << leader.getShift() << endl;
    cout << "Pay Rate: $" << leader.getPayRate() << endl;
    cout << "Monthly Bonus: $" << leader.getMonthlyBonus() << endl;
    cout << "Required Training Hours: " << leader.getRequiredTrainingHours() << endl;
    cout << "Attended Training Hours: " << leader.getAttendedTrainingHours() << endl;

    // Modify some values using setters
    leader.setMonthlyBonus(600.00);
    leader.setAttendedTrainingHours(10.0);

    // Display updated values
    cout << "\nUpdated Team Leader Details:" << endl;
    cout << "Monthly Bonus: $" << leader.getMonthlyBonus() << endl;
    cout << "Attended Training Hours: " << leader.getAttendedTrainingHours() << endl;

    return 0;
}   