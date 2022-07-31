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

student takeStudentDetails();
void printStudentDetails(student s);


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

    s1 = takeStudentDetails();
    printStudentDetails(s1);
}

student takeStudentDetails()
{
    student s;

    cout << "Enter Student First Name : ";
    cin >> s.fname;
    cout << "Enter Student Last Name : ";
    cin >> s.lname;
    cout << "Enter Student Roll Number : ";
    cin >> s.roll;
    cout << "Enter Student Class  : ";
    cin >> s.sClass;
    cout << "Enter Student Section : ";
    cin >> s.sec;

    return s;
}

void printStudentDetails(student s)
{
    cout << "\nStudent First Name : " << s.fname;
    cout << "\nStudent Last Name : " << s.lname;
    cout << "\nStudent Roll Number : " << s.roll;
    cout << "\nStudent Class  : " << s.sClass;
    cout << "\nStudent Section : " << s.sec;
}