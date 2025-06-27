#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "please enter a number\n";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        char value = 'A';
        for (int j = 1; j <= number; j++)
        {
            cout << value << "\t";
            value += 1;
        }

        cout << "\n";
    }

    return 0;
}