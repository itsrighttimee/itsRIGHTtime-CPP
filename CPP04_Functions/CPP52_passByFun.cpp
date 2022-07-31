#include <iostream>
using namespace std;

/*

 ----->  CPP18  &

*/

void callByValue(int a, int b);      // Defination
void callByRefrence(int &a, int &b); // Formal Parameters

int main()
{
     int a = 10, b = 20; //
     cout << endl
          << "Before Function Call " << endl
          << "value of a : " << a; //
     cout << endl
          << "value of b: " << b; //

     // callByValue(a, b); //
     callByRefrence(a, b);

     cout << endl
          << "After Function Call " << endl
          << "value of a : " << a; //
     cout << endl
          << "value of b: " << b; //
}

void callByValue(int a, int b) // Formal Parameters
{
     int sum;

     a = 4;
     b = 10;

     cout << endl
          << "Inside  Function Call " << endl
          << "value of a : " << a; //
     cout << endl
          << "value of b: " << b; //
}

void callByRefrence(int &a, int &b) // Formal Parameters
{
     int sum;

     a = 4;
     b = 10;

     cout << endl
          << "Inside  Function Call " << endl
          << "value of a : " << a; //
     cout << endl
          << "value of b: " << b; //
}