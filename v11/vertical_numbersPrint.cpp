#include <iostream>
using namespace std;

int main()
{
    int value, i, j;
    cout << "please enter the sides to be printed..";
    cin >> value;
    // can use this code or you can use the other one too.
    // for (i = value; i >= 1; i--)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j <<" ";
    //     }
    //     cout << "\n";
    // }
    for (i = 1; i <= value; i++)
    {
        for (j = 1; j <= value + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}