#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "please enter the number you want to print till \n";
    cin >> number;
    int i = 0;
    while (i <= number)
    {
        cout << i << "\n";
        ++i;
    }
}