#include <iostream>
using namespace std;

/*

 while Loop

 while(codition){
    
 }

*/

int main()
{
    int i = 1;

    // for (i = 1; i <= 5 ; i++)
    // {
    //     if(i <= 5 && i != 4){

    //     }
    //     cout << "You are Learning through itsRIGHTtime with Danishan | Value of i : " << i << endl;
    // }

    while (i != 5) // 1 ! = 5 ---> true |  1 == 5 ---> false  | 5 != 5 --> false | 5 == 5 ---> true
    {

        cout << "You are Learning through itsRIGHTtime with Danishan | Value of i : " << i << endl;
        cout << "Enter the value of i : ";
        cin >> i;
    }
}

/*

 i                               Sum
 0  : sum = sum + i   | 10 + 0 = 10
 1  : sum = sum + i   | 10 + 1 = 11
 2  : sum = sum + i   | 11 + 2 = 13
 3  : sum = sum + i   | 13 + 3 = 16
 4  : sum = sum + i   | 16 + 4 = 20




*/