#include <iostream>
#include <string>

using namespace std;

// class defination

class contactInfo
{
private:
    string name;
    string phone;

public:
    // constructor
    contactInfo(string n, string p)
    {
        name = n;
        phone = p;
    }

    string getName() const { return name; }
    string getPhone() const { return phone; }
};

// main function
int main()
{
    contactInfo person1("John Doe", "555-1234");
    contactInfo person2("Jane Smith", "555-5678");
    cout << "Name :" << person1.getName()
         << "phone : " << person1.getPhone();

    cout << "Name :" << person2.getName()
         << "phone : " << person2.getPhone();
    return 0;
}
