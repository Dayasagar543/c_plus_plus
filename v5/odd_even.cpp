#include <iostream>
using namespace std;

int main()
{
    cout << "input number to check wether if its is odd or even \n";
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "the number is even";
    }
    else
    {
        cout << "the number is odd";
    }
    return 0;
}