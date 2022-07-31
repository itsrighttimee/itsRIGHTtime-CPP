#include <iostream>
using namespace std;

/*

Default


*/

// void fun(int num, int num1 = 0);
void fun1(int num, const int num1);

int main()
{
    void fun(int num, int num1 = 0);

    int a = 10, b = 20; //
    cout << endl
         << "Before Function Call " << endl
         << "value of a : " << a; //
    cout << endl
         << "value of b : " << b; //

    fun1(a, b); // 10
}

void fun(int num, int num1 = 0) // Formal Parameters
{
    int sum;

    cout << endl
         << "Inside  Function Call " << endl
         << "value of num : " << num; // 10
    cout << endl
         << "value of num1 : " << num1; // 0
}
void fun1(int num, const int num1) // Formal Parameters
{
    int sum;
    num = 100;
   

    cout << endl
         << "Inside  Function Call " << endl
         << "value of num : " << num; //
    cout << endl
         << "value of num1 : " << num1; //
}