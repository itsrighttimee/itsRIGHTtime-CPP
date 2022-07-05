/*

rvalue and lvalue

*/

#include <iostream>
using namespace std;

int main()
{
    int me;

    me = 12; // lvalue = rvalue

    me = 18; // me --> lvalue   |   18 --> rvalue

    int you;
    // the changes which I do, will save in lvalue variable

    you = me; // you = 18      you --> lvalue |  me --> rvalue

    cout << you << endl; // 18
    cout << me << endl;  // 18

    you = 200; // you --> lvalue |  200 --> rvalue

    me = you; // me = 200     me --> lvalue |  you --> rvalue

    cout << you << endl; // 200
    cout << me << endl;  // 200
}