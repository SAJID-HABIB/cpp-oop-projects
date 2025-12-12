#include<iostream>
using namespace std;

class personData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    int phone;
public:
    // ------------setters----------- 
    void setLastName (string ln) {
       lastName = ln ;
    }
    void setFirstName(string fn) {
        firstName = fn;
    }
    void setAddress (string add) {
        add = address;
    }
    void setCity(string cty) {
        cty = city;
    }
    void setState (string st) {
        st = state;
    }
    void setZip(int zp) {
        zp = zip;
    }
    void setPhone (int pn) {
        pn = phone;
    }
    // ------------getters-----------

    string getLastName() {
        return lastName;
    }
    string getFirstName() {
        return firstName;
    }
    string getAdddress(){
        return address;
    }
    string getCity(){
        return city;
    }
    string getState() {
        return state;
    }
    int getZip() {
        return zip;
    }

    int getPhone() {
        return phone;
    }

};


// ======================================
// CustomerData (Derived Class)
// ======================================

class customerData :public personData
{
private:
    int costomerNumber;
    bool mailingList;
    void setCustomerNumber(int num) {
        costomerNumber = num;
    }
public:
    //  -----------settters-----------
    void setCostomerNumber(int num) {
        costomerNumber = num;
    }    
      void setMailngList(int ml) {
        mailingList = ml;
    } 
    // -------------getters-------   
    int getCustomerNumber() const{
        return costomerNumber;
    }

    int getMilingList() const{
        return mailingList;
    }
};


int main () {
    string first, last, addr, city, state, zip, phone;
    string customer;
    char mailChoice;

   cout << "Enter First Name: ";
   getline(cin, first);
   customer.setFirstName(first);
   cout<<"n";
   
cout << "Enter Last Name: ";
getline(cin, last);
customer.setLastName(last);

cout << "Enter Address: ";
getline(cin, addr);
customer.setAddress(addr);

cout << "Enter City: ";
getline(cin, city);
customer.setCity(city);

cout << "Enter State: ";
getline(cin, state);
customer.setState(state);

cout << "Enter ZIP: ";
getline(cin, zip);
customer.setZip(zip);

cout << "Enter Phone: ";
getline(cin, phone);
customer.setPhone(phone);

cout << "Enter Customer Number: ";
cin >> custNum;
customer.setCustomerNumber(custNum);

cout << "Join Mailing List? (y/n): ";
cin >> mailChoice;
customer.setMailingList(mailChoice == 'y' || mailChoice == 'Y');

}
