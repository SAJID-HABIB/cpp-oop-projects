//chat gpt this file do own next day

#include <iostream>
#include "numDays.h"
using namespace std;

int main() {
    double h1, h2;

    cout << "Enter hours for first employee: ";
    cin >> h1;

    cout << "Enter hours for second employee: ";
    cin >> h2;

    numDays n1(h1), n2(h2);

    cout << "\n--- NumDays Results ---\n";
    cout << "Employee 1: " << n1.getHours() << " hours = " << n1.getDays() << " days\n";
    cout << "Employee 2: " << n2.getHours() << " hours = " << n2.getDays() << " days\n";

    numDays total = n1 + n2;
     cout << "\nCombined (n1 + n2): " << total.getHours() << " hours = " << total.getDays() << " days\n";

    numDays diff = n1 - n2;
    cout << "Difference (n1 - n2): " << diff.getHours() << " hours = " << diff.getDays() << " days\n";

    cout << "\nIncrementing Employee 1 (++n1):\n";
    ++n1;
    cout << "Hours: " << n1.getHours() << ", Days: " << n1.getDays() << endl;

    cout << "\nDecrementing Employee 2 (--n2):\n";
    --n2;
    cout << "Hours: " << n2.getHours() << ", Days: " << n2.getDays() << endl;

    return 0;
}
