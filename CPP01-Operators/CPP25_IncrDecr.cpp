
/*
7 types of Operators

1. Arithmetic Operator
2. Relational Op
3. Logical op
4. bitwise op
5. Assignment op
6. Increment or Decrement Op
7. Special op



6. Increment or Decrement Op

Pre  (++A / --A) : First Incre / Decre  than use
Post (A++ / A--) : First use than icre/ Decre

Increment ( +1 )
    Pre Increment ---> ++A  ******> A = A+1
    Post Increment ---> A++ ******> A = A+1

Decrement ( -1 )
    Pre Decrement ---> --A ******>
    Post Decrement ---> A-- ******>



*/

#include <iostream>
using namespace std;

int main()
{

    int A = 0, B = 0;
    int ans1, ans2, ans3, ans4;

    A = 10;
    B = 20;

    ans1 = A++; // ans1 = 10
    // A = 11
    ans2 = ++A; // ans2 = 12

    ans3 = B--; // ans3 = 20
    //  B = 19
    ans4 = --B; // ans4  = 18

    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
}
