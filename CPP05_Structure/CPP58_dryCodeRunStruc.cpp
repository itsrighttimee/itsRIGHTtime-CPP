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

  
    s1 = takeStudentDetails();
    s2 = takeStudentDetails();
    s3 = takeStudentDetails();
    printStudentDetails(s1);
    printStudentDetails(s2);
    printStudentDetails(s3);
}

student takeStudentDetails()
{
    student s;

    cout << "Enter Student First Name : ";
    cin >> s.fname;// ram
    cout << "Enter Student Last Name : ";
    cin >> s.lname;//sham
    cout << "Enter Student Roll Number : ";
    cin >> s.roll;// 26
    cout << "Enter Student Class  : ";
    cin >> s.sClass;// 6
    cout << "Enter Student Section : ";
    cin >> s.sec; // B

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