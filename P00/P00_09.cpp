/*

You can convert temperature from degrees Celsius to degrees Fahrenheit
 by multiplying by 9/5 and adding 32.

 Write a program that allows the user to enter a floating-point number representing degrees Celsius,
and then displays the corresponding degrees Fahrenheit.

45 degree = ( 45 X 9/5 + 32 ) feranh
x degree = ( x * 9/5 + 32 ) feranh

x = x*9/5 + 32


*/

#include <iostream>
using namespace std;

int main()
{

    float degree, fern;

    cout << "Enter the Temperature in Degree : ";
    cin >> degree;

    fern = degree * 5 / 9 + 32;
    cout << "The Temperature in Fehrenheit : " << fern;
}