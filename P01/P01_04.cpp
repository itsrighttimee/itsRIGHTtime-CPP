
/*

P00_09 :

You can convert temperature from degrees Celsius to degrees Fahrenheit
by multiplying by 9/5 and adding 32.

 Write a program that allows the user to enter a floating-point number representing degrees Celsius,
and then displays the corresponding degrees Fahrenheit.

45 degree = ( 45 X 9/5 + 32 ) feranh
x degree = ( x * 9/5 + 32 ) feranh

x degree = x*9/5 + 32 fereh


*/

/*
P01_04 :

Temperature of a city in Fahrenheit degrees is input through the keyboard.
 Write a program to convert this temperature into Centigrade degrees.

 x fern =  (x fern - 32 )*5/9 degree
*/

#include <iostream>
using namespace std;

int main()
{

    float degree, fern;

    cout << "Enter the Temperature in fehrenheit : ";
    cin >> fern;

    degree = (fern - 32) * 5 / 9;
    cout << "The Temperature in Degree : " << degree;
}