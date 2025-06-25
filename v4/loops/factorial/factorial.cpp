#include <iostream>
using namespace std;
int main()
{
    int factorial_num, factorial=1;
    cout << "please enter a number to find its factorial\n";
    cin >> factorial_num;
    for (int i = 1; i <= factorial_num; i++)
    {
        factorial *= i;
    }
    cout << factorial;
    return 0;
}