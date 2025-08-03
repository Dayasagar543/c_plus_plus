#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter a number to print butterfly \n";
    cin >> number;
    char ch = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= (number - i) * 2; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = number; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= (number - i) * 2; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}