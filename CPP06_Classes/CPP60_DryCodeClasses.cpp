#include <iostream>

using namespace std;

/*

 Classes is a user defined data type

 it is created using " class " keyword

 Different Visiblity Modes in Classes

 1. Private :
 2. protected
 3. public

 class Classname{

    // Default is Private

 }

Data Members : the variable Which we make inside the class
memebr Function :  Functions that we made inside Class

*/

class student
{

    string fname, lname;
    int roll, sClass;
    char sec;

public:
    void takevalue()
    {
        cout << "\nEnter Student First Name : ";
        cin >> fname;
        cout << "Enter Student Last Name : ";
        cin >> lname;
        cout << "Enter Student Roll Number : ";
        cin >> roll;
        cout << "Enter Student Class  : ";
        cin >> sClass;
        cout << "Enter Student Section : ";
        cin >> sec;
    }

    void printValue()
    {
        cout << "\nStudent First Name : " << fname;
        cout << "\nStudent Last Name : " << lname;
        cout << "\nStudent Roll Number : " << roll;
        cout << "\nStudent Class  : " << sClass;
        cout << "\nStudent Section : " << sec;
    }
};

int main()
{
    int a; // a is variable

    student s1, s2, s3; // s1, s2, s3 is an Objects
    cout << "\nFor object s1 : \n";
    s1.takevalue();
    cout << "\nFor object s2 : \n";
    s2.takevalue();
    cout << "\nFor object s3 : \n";
    s3.takevalue();


    cout << "\n\nFrom object s1 : \n";
    s1.printValue();
    cout << "\n\nFrom object s2 : \n";
    s2.printValue();
    cout << "\n\nFrom object s3 : \n";
    s3.printValue();
}
