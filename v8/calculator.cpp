#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char value, terminate;

    while (terminate != 't' && terminate != 'T')
    {
        cout << "input the values for 2 number to perform operations on it \n";
        cin >> a >> b;

        cout << "input value for operation to perform +,-,*,/,% \n";
        cin >> value;
        switch (value)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '%':
            cout << a % b << endl;
            break;

        default:
            cout << "inproper input \n"
                 << endl;
            break;
        }
        cout << "Enter T or t  to terminate the loop else press any key to continue ";
        cin >> terminate;
    }
    return 0;
}