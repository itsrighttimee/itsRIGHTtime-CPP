/*





one or mare than one

primitive datatype,  Non Primitives , Structure;


*/

#include <iostream>
using namespace std;

struct Time
{
    int hr, min, sec;
};

int printTime(Time t) //
{
    cout << t.hr << ":" << t.min << ":" << t.sec << endl;
}

int printTime0(Time t) //
{
    if (t.hr < 10)
    {
        cout << "0" << t.hr << ":";
    }
    else
    {
        cout << t.hr << ":";
    }
    if (t.min < 10)
    {
        cout << "0" << t.min << ":";
    }
    else
    {
        cout << t.min << ":";
    }
    if (t.sec < 10)
    {
        cout << "0" << t.sec << endl;
    }
    else
    {
        cout << t.sec << endl;
    }
}

Time takeTime()
{
    Time t;
    cout << "\nEnter the hour : ";
    cin >> t.hr;
    cout << "Enter the Minute : ";
    cin >> t.min;
    cout << "Enter the Second : ";
    cin >> t.sec;

    return t;
}

Time takeTime0()
{
    Time t;
    do
    {
        cout << "\nEnter the hour : ";
        cin >> t.hr;

        if (t.hr <= 0 || t.hr >= 12) // true = -1, 26, etc. | false = 0-12
        {
            cout << "Enter hour (0 < hour < 12) \n";
        }
    } while (t.hr <= 0 || t.hr >= 12); // true = -1, 26, etc. | false = 0-12

    do
    {
        cout << "\nEnter the Minutes : ";
        cin >> t.min;

        if (t.min <= 0 || t.min >= 12) // true = -1, 26, etc. | false = 0-12
        {
            cout << "Enter Minutes (0 < Minutes < 60)\n";
        }
    } while (t.min <= 0 || t.min >= 12); // true = -1, 26, etc. | false = 0-12

    do
    {
        cout << "\nEnter the Seconds : ";
        cin >> t.sec;

        if (t.sec <= 0 || t.sec >= 12) // true = -1, 26, etc. | false = 0-12
        {
            cout << "Enter Seconds (0 < Seconds < 60) \n";
        }
    } while (t.sec <= 0 || t.sec >= 12); // true = -1, 26, etc. | false = 0-12

        return t;
}

int main()
{
    //int a;
    Time t1, t2, t3;
    // t1.hr = 6;
    // t1.min = 40;
    // t1.sec = 45;

    // t2.hr = 4;
    // t2.min = 0;
    // t2.sec = 5;

    t1 = takeTime();
    t2 = takeTime();

    // t1 = takeTime0();
    printTime(t1);
    printTime(t2);
    // cout << endl;

    // printTime0(t1);
    // printTime0(t2);

    // cout << t2.hr << ":" << t2.min << ":" << t2.sec << endl;
}
