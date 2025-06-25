#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "please enter a number to if number divisible by 3 \n";
    cin >> number;
    if (number % 3 == 0)
    {
        cout << "divisible by 3\n";
    }
    else
    {
        cout << "not divisible by 3\n";
    }

    return 0;
}