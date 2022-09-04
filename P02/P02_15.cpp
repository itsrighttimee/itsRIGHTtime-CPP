/*

Any character is entered through the keyboard,
write a program to determine whether the
character entered is a capital letter, a small case letter,
a digit or a special symbol.
The following table shows the range of ASCII values for various characters.

Characters        ASCII Values
A – Z               65 – 90
a – z               97 – 122
0 – 9               48 – 57
special symbols     0 - 47, 58 - 64, 91 - 96, 123 - 127





*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int in;
    cout << "Enter Any Character : ";
    cin >> ch;
    in = ch;

    if (in >= 65 && in <= 90)
    {
        cout << "The Character is Uppercase Letter ";
    }
    else if (in >= 97 && in <= 122)
    { // 97 – 122
        cout << "The Character is lowercase Letter ";
    }
    else if (in >= 48 && in <= 57)//48 – 57
    { 
        cout << "The Character is a Number ";
    }
    else if ((in >= 0 && in <= 47) ||
             (in >= 58 && in <= 64) ||
             (in >= 91 && in <= 96) ||
             (in >= 123 && in <= 127)) // 0 - 47, 58 - 64, 91 - 96, 123 - 127
    {
        cout << "The Character is a Special Symbol";
    }

    cout << "\n\nCharacter : " << ch;
    cout << "\nASCII Value : " << in;
}