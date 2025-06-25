#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "please enter the number you want to print till \n";
    cin >> number;
    int sum = 0;
    for (int i = 0; i <= number; i++)
    {
        sum += i;
    }
    cout << sum << "\n";
}