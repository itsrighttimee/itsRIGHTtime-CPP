/*

The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feet, inches and centimeters.

1km = 1000m
4km = 4*1000
xkm = x  * 1000;

1m = 100cm
1m = 3.281 feet
1 feet  = 12 inches

*/

#include <iostream>
using namespace std;

int main()
{
    float km, m, cm, feet, inches;

    cout << "Enter the Distance of two cities in Km : ";
    cin >> km;

    m = km * 1000;
    cm = m * 100;

    feet = m * 3.281;
    inches = feet * 12;
    cout << "The Distance of two cities in m : " << m << endl;
    cout << "The Distance of two cities in feet : " << feet << endl;
    cout << "The Distance of two cities in inches : " << inches << endl;
    cout << "The Distance of two cities in cm : " << cm << endl;
}