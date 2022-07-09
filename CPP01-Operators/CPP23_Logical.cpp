
/*
7 types of Operators

1. Arithmetic Operator
2. Relational Op
3. Logical op
4. bitwise op
5. Assignment op
6. Increment or Decrement Op
7. Special op



3. Logical op  : Return value : true or false | 0 or 1

     ---> And  ------------------>  &&  ******> Give ans true when all Values are true
     ---> or  ------------------->  ||  ******> Give ans false when all values are false
     ---> noto ------------------>  !   ******> if we give true it make that false
                                                if we give false it make that true



*/

#include <iostream>
using namespace std;

int main()
{

    bool ans1, ans2, ans3, ans4, ans5;
    int num1 = 50;
    int num2 = 30, num3 = 60;

    bool l1, l2, l3, l4, l5, l6;

    ans1 = num1 < num2;  // 50 <  30 ---->  0
    ans2 = num2 <= num3; // 30 <= 60  --->  1
    ans3 = num3 != num1; // 60 != 50  --->  1
    ans4 = num3 == num1; // 60 == 50  --->  0
    ans5 = num1 > num3;  // 50  >  60 --->  0

    l1 = 1 && 1 && 1 && 1;             // true
    l2 = ans1 && ans2 && ans3 && ans4; //  l2  = 0 && 1 && 1 && 0

    cout << l1 << endl; // 1
    cout << l2 << endl; // 0

    l3 = 0 || 0 || 0 || 0 || 0 || 0 || 0; // 0
    l4 = ans1 || ans2 || ans3 || ans4;    //  l4  = 0 || 1 || 1 || 0     ans true

    cout << l3 << endl; // 0
    cout << l4 << endl; // 1

    l5 = !0;
    l6 = !1;
    cout << l5 << endl; // 1
    cout << l6 << endl; // 0
}
