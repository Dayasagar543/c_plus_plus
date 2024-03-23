#include <iostream>
using namespace std;

int main()
{
    int value, i, j;
    cout << "Hi there input number of itmes you print a number \n";
    cin >> value;
    for (i = 1; i <= value; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}