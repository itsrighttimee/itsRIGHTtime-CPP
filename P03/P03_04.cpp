/*

Switch-case  ===> Lec code : CPP36
do-while     ===> Lec code : CPP45

Create the equivalent of a four-function calculator.
The program should ask the user to enter a number, an operator, and another number.
(Use floating point.)
It should then carry out the specified arithmetical operation:
adding, subtracting, multiplying, or dividing the two numbers.

Use a switch statement to select the operation. Finally, display the result.

When it finishes the calculation, the program should ask whether
the user wants to do another calculation.
The response can be ‘y’ or ‘n’.

Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
Watch


*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    int op;
    int flag;

    do
    {

        cout << "Enter First number : ";
        cin >> num1;
        cout << "Enter Second number : ";
        cin >> num2;

        cout << "\nWhat do you want to perform, Enter the Number..";
        cout << "\nFor Addition, Enter 1\n";
        cout << "For Subtraction, Enter 2\n";
        cout << "For Multiplication, Enter 3\n";
        cout << "For Dividion, Enter 4\n";
        cout << "Enter : ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
            break;
        case 2:
            cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2;
            break;
        case 3:
            cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2;

            break;
        case 4:
            cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2;

            break;
        }
        cout << "\nDo you want to perform more calculation, if Yes Enter 1 esle any Number.";
        cout << "\nEnter : ";
        cin >> flag;

    } while (flag == 1);
}