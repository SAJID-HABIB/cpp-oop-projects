#include<iostream>
#include<string>
using namespace std;
 //class defination
//  setter
 class personalInfo
 {
 private:
   string name;
   string adreses;
   int age;
   string phoneNumber;
 public:
   //stters
   void setName (string nam){
    name = nam;
   }
   void setAdress(string add) {
    adreses = add;
   }
   void setAge(int ag) {
    age = ag;
   }
   void setPhoneNumber (string phNu) {
    phoneNumber = phNu;
   }
   //settters
   string getName () {
    return name;
   }
   string getAddres () {
    return adreses;
   }
   int getAge () {
    return age;
   }
   string getPhoneNumber () {
    return phoneNumber;
   }
   //fuction to display detail
  //  memeberfuction
   void displayInfo () {
    cout<<"Nmae :" <<name<<endl;
    cout<<"Adress :"<<adreses<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Phone Number :"<<phoneNumber<<endl;
   }
 };

   //main

   int main () {
    personalInfo me , friend1,friend2;
    // set my info
    me.setName("sajid habib");
    me.setAdress("lahore");
    me.setAge(20);
    me.setPhoneNumber("0303");
    //friend 1 info
    friend1.setName("ali");
    friend1.setAdress("rahim yar khan");
    friend1.setAge(22);
    friend1.setPhoneNumber("0303");

    
    // friend 2 info
    friend2.setName("ahamad");
    friend2.setAdress("sardar garh");
    friend2.setAge(21);
    friend2.setPhoneNumber("0301");
    //display information 
    cout<<"my information :"<<endl;
    //fuction call
    me.displayInfo();

    cout<<"friend 1 information :"<<endl;
    //fuction call
    friend1.displayInfo();

    cout<<"friend 2 information :"<<endl;
    //fuction call
    friend2.displayInfo();
    return 0;

   }


 
 
