
/*
7 types of Operators

1. Arithmetic Operator
2. Relational Op
3. Logical op
4. bitwise op
5. Assignment op
6. Increment or Decrement Op
7. Special op



2. Relational op  : Return value : true or false

     ---> Less than  ------------------ <
     ---> Greater Than  --------------- >
     ---> Less than equal to ---------- >=
     ---> Greater than equla to ------- <=
     --->  Equals to ------------------ ==
     --->  Not equals to  ------------ !=


*/

#include <iostream>
using namespace std;

int main()
{

    bool ans1, ans2, ans3, ans4, ans5;
    int num1 = 50;
    int num2 = 30, num3 = 60;

    ans1 = num1 < num2;  // 50 <  30 ---->  0
    ans2 = num2 <= num3; // 30 <= 60  --->  1
    ans3 = num3 != num1; // 60 != 50  --->  1
    ans4 = num3 == num1; // 60 == 50  --->  0
    ans5 = num1 > num3;  // 50  >  60 --->  0

    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    cout << ans5 << endl;
}
