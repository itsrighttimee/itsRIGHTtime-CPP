/*

A phone number, such as (212) 767-8900, can be thought of as having three parts:
the area code (212), the exchange (767), and the number (8900).
Write a program that uses a structure to store these three parts
of a phone number separately. Call the structure phone.
Create two structure variables of type phone. Initialize one,
and have the user input a number for the other one.
Then display both numbers. The interchange might look like this:

Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212


*/

#include <iostream>

using namespace std;

struct phnNo
{
    int area, exchage, number;
};

int main()
{
    phnNo n1, n2;

    n1.area = 201;
    n1.exchage = 767;
    n1.number = 8900;

    cout << "Enter your area code, and number : ";
    cin >> n2.area >> n2.exchage >> n2.number;

    cout << "\nMy number is (" << n1.area << ") " << n1.exchage << "-" << n1.number;
    cout << "\nYour number is (" << n2.area << ") " << n2.exchage << "-" << n2.number;
}