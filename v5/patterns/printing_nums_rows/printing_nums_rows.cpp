#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "please enter a number\n";
    cin >> number;
    int value = 1;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            cout << value << "\t";
            value++;
        }
        cout << "\n";
    }
    return 0;
}