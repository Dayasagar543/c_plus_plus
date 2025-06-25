#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cout << "please enter the number you want ..";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}