/*

If the marks obtained by a student in five different subjects are input through the keyboard,
 find out the aggregate marks and percentage marks obtained by the student.
 Assume that the maximum marks that can be obtained by a student in each subject is 100.

*/

#include <iostream>

using namespace std;

int main()
{
    float maths, science, english, cpp, sst, totalNum, percentage;

    cout << "Enter your maths Marks : ";
    cin >> maths;
    cout << "Enter your Science Marks : ";
    cin >> science;
    cout << "Enter your English Marks : ";
    cin >> english;
    cout << "Enter your C++ Marks : ";
    cin >> cpp;
    cout << "Enter your SST Marks : ";
    cin >> sst;

    totalNum = maths + science + english + cpp + sst;
    percentage = (totalNum * 100) / 500;
    cout << "Your Total marks : " << totalNum << " out of 500" << endl;
    cout << "Your percentage : " << percentage << endl;
}