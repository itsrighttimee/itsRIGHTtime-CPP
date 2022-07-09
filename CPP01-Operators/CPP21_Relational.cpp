
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

    ans1 = 5 < 5;    // false =  0
    ans2 = 16 <= 30; // true  = 1
    ans3 = 25 != 30; // true
    ans4 = 36 == 60; // flase
    ans5 = 60 > 10;  // truue

    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    cout << ans5 << endl;
}
