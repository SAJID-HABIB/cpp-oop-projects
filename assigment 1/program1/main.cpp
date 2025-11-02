#include "student.h"
using namespace std;

int main() {
    student s1;
    // for deflat constructor
    s1.display();

    s1.setName("sajid");
    s1.setRollNumber(2625);
    s1.setGpa(3.45);

    // fuction call here 
    s1.display();

    // use paramatize constructor 
    student s2("chughtai",2626,3.99);
    s2.display();
    return 0;
}