/*

Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180 degrees.


*/

#include <iostream>

using namespace std;

int main()
{
    int ang1, ang2, ang3;

    cout << "Enter 1st  Angle : ";
    cin >> ang1;

    cout << "Enter 2nd  Angle : ";
    cin >> ang2;

    cout << "Enter 3rd  Angle : ";
    cin >> ang3;

    if (ang1 + ang2 + ang3 == 180){
        cout <<"The triangle is valid";
    }else{
        cout <<"The triangle is not valid";

    }
}