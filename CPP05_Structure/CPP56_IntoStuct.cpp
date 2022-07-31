#include <iostream>

using namespace std;

/*

 Structure is a user defined data type

 it is created using " struct " keyword

*/

struct student
{
    string fname, lname;
    int roll, sClass;
    char sec;
};

int main()
{
    int a;

    student s1, s2, s3;

    s1.fname = "ram";
    s1.lname = "ram1";
    s1.roll = 26;
    s1.sClass = 6;
    s1.sec = 'B';

    s2.fname = "ram22";
    s2.lname = "ram122";
    s2.roll = 22;
    s2.sClass = 8;
    s2.sec = 'A';

    s3.fname = "ram33";
    s3.lname = "ram133";
    s3.roll = 60;
    s3.sClass = 2;
    s3.sec = 'D';

    cout << "\nStudent First Name : " << s1.fname;
    cout << "\nStudent Last Name : " << s1.lname;
    cout << "\nStudent Roll Number : " << s1.roll;
    cout << "\nStudent Class  : " << s1.sClass;
    cout << "\nStudent Section : " << s1.sec;
}