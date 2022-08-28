/*
Find the absolute value of a number entered through the keyboard.

-4 => 4
5  => 5

*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    if (num < 0)
    {
        cout << "the absoltue value is : " << -1 * num;
    }
    else
    {
        cout << "the absoltue value is : " << num;
    }
}