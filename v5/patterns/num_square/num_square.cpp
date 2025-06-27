#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "please enter a number\n";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            cout << j << "\t";
        }

        cout << "\n";
    }

    return 0;
}