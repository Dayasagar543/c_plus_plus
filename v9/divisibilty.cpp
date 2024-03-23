#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    cout << "  input the starting value and ending value of the range \n";
    cin >> number1 >> number2;
    for (int i = number1; i <= number2; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            cout << i << "  is divisible by both the 2 and 3 \n";
        }
        else if (i % 2 == 0)
        {
            cout << i << "   divisible by only 2 \n";
        }
        else if (i % 3 == 0)
        {
            cout << i << "  divisible by only 3 \n";
        }
        else
        {
            cout << i << "  not divisible by both \n";
        }
    }
    return 0;
}