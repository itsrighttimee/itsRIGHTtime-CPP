#include <iostream>
using namespace std;

/*

Scop resolution Operator   ::


*/

// int a = 0;
namespace n1
{
    int a = 1;
}

namespace n2
{
    int a = 2;
}

namespace n3
{
    int a = 3;
}

using namespace n2;

int main()
{
    cout << a << endl;     // 2
    cout << n3::a << endl; // 3
}