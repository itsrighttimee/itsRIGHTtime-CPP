/*

Write a temperature-conversion program that gives
the user the option of converting
      Fahrenheit to Celsius or
      Celsius to Fahrenheit.
Then carry out the conversion.
Use floating-point numbers.
Interaction with the program might look like this:

*/

#include <iostream>
using namespace std;

int main()
{
    int swi;

    cout << "For Converting Fahrenheit to Celsius, Enter 1\n";
    cout << "For Converting Celsius to Fahrenheit, Enter 2\n";
    cout << "Enter : ";
    cin >> swi;

    float tempr, chTemp;
    if (swi == 1)
    {
        cout << "Enter the Temprature in Fahrenheit : ";
        cin >> tempr;
        chTemp = 5 * (tempr - 32) / 9;
        cout << "Temprature in Celsius of " << tempr << "F : " << chTemp;
    }
    else
    {
        cout << "Enter the Temprature in Celsius : ";
        cin >> tempr;
        chTemp = 9 * (tempr) / 5 + 32;
        cout << "Temprature in Fahrenheit of " << tempr << "C : " << chTemp;
    }
}