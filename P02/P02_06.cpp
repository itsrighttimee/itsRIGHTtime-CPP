/*

If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.


    if (ramAge == shyamAge && ramAge == ajayAge)

    else if (ramAge == shyamAge)

    else if (ajayAge == shyamAge)

    else if (ramAge == ajayAge)

    else if (ramAge < shyamAge && ramAge < ajayAge)

    else if (shyamAge < ramAge && shyamAge < ajayAge)

    else if (ajayAge < shyamAge && ajayAge < ramAge)



*/

#include <iostream>
using namespace std;

int main()
{
    int ramAge, shyamAge, ajayAge;

    cout << "Enter the Age of Ram : ";
    cin >> ramAge;
    cout << "Enter the Age of Shyam : ";
    cin >> shyamAge;
    cout << "Enter the Age of Ajay : ";
    cin >> ajayAge;

    if (ramAge == shyamAge && ramAge == ajayAge)
    {
        cout << "All are at the Same age";
    }
    else if (ramAge == shyamAge)
    {
        if (ramAge < ajayAge)
            cout << "Ram and Shyam are the Youngest";
        else
        {
            cout << "Ajay is the Youngest";
        }
    }
    else if (ajayAge == shyamAge)
    {
        if (shyamAge < ramAge)
            cout << "Shyam and ajay are the Youngest";
        else
        {
            cout << "Ram is the Youngest";
        }
    }
    else if (ramAge == ajayAge)
    {
        if (ramAge < shyamAge)
            cout << "Ram and Ajay are the Youngest";
        else
        {
            cout << "Shyam is the Youngest";
        }
    }
    else if (ramAge < shyamAge && ramAge < ajayAge)
    {
        cout << "Ram is the Youngest";
    }
    else if (shyamAge < ramAge && shyamAge < ajayAge)
    {
        cout << "Shyam is the Youngest";
    }
    else if (ajayAge < shyamAge && ajayAge < ramAge)
    {
        cout << "Ajay is the Youngest";
    }
}