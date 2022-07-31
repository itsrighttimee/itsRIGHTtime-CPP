/*

To Declare or make reference variable we need & sign

datatype & VariableName = variabe;

*/

#include <iostream>
using namespace std;

int main()
{

    int num1 = 10;
    int num2 = num1; // num2 = 10

    int sum1 = 20;
    int &sum2 = sum1; // sum2 = sum1

    cout << num1 << "  " << num2 << endl; // 10    10
    cout << sum1 << "  " << sum2 << endl  // 20    20
         << endl;

    num2 = 100; 
    sum2 = 200;

    cout << num1 << "  " << num2 << endl; // 10    100
    cout << sum1 << "  " << sum2 << endl  // 20    200  -----> 200   200
         << endl;

    num2 = 1500;
    sum2 = 80000;

    cout << num1 << "  " << num2 << endl; // 10    1500
    cout << sum1 << "  " << sum2 << endl  // 20    80000  -----> 80000   80000
         << endl;


    num1 = 1;
    sum1 = 2;
    num2 = 3;
    sum2 = 4;

    cout << num1 << "  " << num2 << endl; // 10    1500
    cout << sum1 << "  " << sum2 << endl  // 20    80000  -----> 80000   80000
         << endl;
}