#include <iostream>
using namespace std;

/*

 do while Loop

 do{

 }while(condition);

Any number is true
0  ---> flase

*/

int main()
{
    int i = 5;

    // while (i != 5) // 1 ! = 5 ---> true |  1 == 5 ---> false  | 5 != 5 --> false | 5 == 5 ---> true
    // {

    //     cout << "You are Learning through itsRIGHTtime with Danishan | Value of i : " << i << endl;
    //     cout << "Enter the value of i : ";
    //     cin >> i;
    // }

    
    // do
    // {

    //     cout << "You are Learning through itsRIGHTtime with Danishan | Value of i : " << i << endl;
    //     cout << "Enter the value of i : ";
    //     cin >> i;
    // }
    // while (i != 5); // 1 ! = 5 ---> true |  1 == 5 ---> false  | 5 != 5 --> false | 5 == 5 ---> true
    do
    {

        cout << "You are Learning through itsRIGHTtime with Danishan | Value of i : " << i << endl;
        cout << "Enter the value of i : ";
        cin >> i;
    }
    while (i); // Any number --> true  | 0  ---> false

    cout << "\nOutside the Loop";
}

/*

 i                               Sum
 0  : sum = sum + i   | 10 + 0 = 10
 1  : sum = sum + i   | 10 + 1 = 11
 2  : sum = sum + i   | 11 + 2 = 13
 3  : sum = sum + i   | 13 + 3 = 16
 4  : sum = sum + i   | 16 + 4 = 20




*/