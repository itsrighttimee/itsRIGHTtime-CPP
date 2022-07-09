
/*
7 types of Operators

1. Arithmetic Operator
2. Relational Op
3. Logical op
4. bitwise op
5. Assignment op
6. Increment or Decrement Op
7. Special op



3. Assignment op

     ---> =  ******>
     ---> += ******>
     ---> -= ******>
     ---> *= ******>
     ---> /= ******>
     ---> %= ******>



*/

#include <iostream>
using namespace std;

int main()
{

    int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5;
    int s1 = 100, s2 = 100, s3 = 100, s4 = 100, s5 = 100, s6 = 100;

    s1 = n1 + n2;
    cout << s1 << endl;

    s2 += n2; // s2 = s2 + n2
    cout << s2 << endl;

    s3 -= n2; // s3 = s3 - n2
    cout << s3 << endl;

    s4 *= n2; // s4 = s4 * n2
    cout << s4 << endl;

    s5 /= n2; // s5 = s5 / n2
    cout << s4 << endl;

    s6 %= n2; // s6 = s6 % n2
    cout << s6 << endl;
}
