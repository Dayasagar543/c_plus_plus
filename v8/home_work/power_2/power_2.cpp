#include <iostream>
using namespace std;
int two_power_value(int number)
{
    int count = 0;
    while (number > 1)
    {
        if (number % 2 == 0)
        {
            count++;
        }
        else
        {
            cout << "not a proper number of divisible by 2 and also not a exponent of 2" << endl;
            return 0;
        }
        number /= 2;
    }
    return count;
}
int main()
{
    int number;
    cout << "input a number to know its 2 compliment number\n";
    cin >> number;
    cout << two_power_value(number) << " " << endl;
    return 0;
}