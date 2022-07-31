
#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << endl;

    // for (int i = 0; i < 10; i++)
    // {

    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 10; i++)
    // {

    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 10; i++)
    // {

    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    int row, col;
    cout << "Enter How many rows you want to print : ";
    cin >> row;
    cout << "Enter How many columns you want to print : ";
    cin >> col;
    cout << endl;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
}