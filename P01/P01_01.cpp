/*

Ramesh’s basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.


*/

#include <iostream>
using namespace std;

int main()
{

    double salary, dearAllo, rentAllo, grossSalary;

    cout << "Enter Your Salary : ";
    cin >> salary;

    dearAllo = (salary * 40) / 100;
    rentAllo = (salary * 20) / 100;

    grossSalary = salary + dearAllo + rentAllo;

    cout << "The Gross Salary of Ramesh is : " << grossSalary;
}
