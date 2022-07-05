#include <iostream>

using namespace std;

int main()
{

    // int num = 10;
    // int num1 = 20;

    int num = 10, num1 = 20, num3, num4;

    // Static Defination
    num = 50;   // 10 ---> 50
    num1 = 100; // 20 ---->100

    // Dynamic Defination
    num3 = num;  //  random -----> 50
    num4 = num1; // random ------>  100

    num = num4;  // 50  -----> 100
    num1 = num3; // 100 ------>50

    cout << "The final value of num " << num<<endl;   // 100
    cout << "The final value of num1 " << num1<<endl; // 50
    cout << "The final value of num3 " << num3<<endl; // 50
    cout << "The final value of num4 " << num4<<endl; // 100
}