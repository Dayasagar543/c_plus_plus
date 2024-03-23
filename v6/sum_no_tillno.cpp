#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number you want to find the sum of all the numbers till that number \n";
    int value, sum = 0;
    cin >> value;
    for (int i = 0; i <= value; i++)
    {
        sum += i;
        cout << sum << "\n";
    }
    // cout << sum;
    return 0;
}