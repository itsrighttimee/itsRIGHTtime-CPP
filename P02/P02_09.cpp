/*
Given the length and breadth of a rectangle,
write a program to find whether the area of the rectangle is greater than its perimeter.
For example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.



*/

#include <iostream>
using namespace std;

int main()
{
    int len, bre, area, peri;

    cout << "Enter the Lenght of Rectangle : ";
    cin >> len;
    cout << "Enter the Breath of Rectangle : ";
    cin >> bre;

    // area = len * bre;
    // peri = 2 * (len * bre);

    // if (area > peri)
    // {
    //     cout << "Yes, Area is Greater than Perimeter";
    // }
    // else
    // {
    //     cout << "No, Area is Not Greater than Perimeter";
    // }
    
    if (len * bre > 2 * (len * bre))
    {
        cout << "Yes, Area is Greater than Perimeter";
    }
    else
    {
        cout << "No, Area is Not Greater than Perimeter";
    }
}