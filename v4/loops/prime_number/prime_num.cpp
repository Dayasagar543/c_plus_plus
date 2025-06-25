#include <iostream>
using namespace std;
int main()
{
    int number;
    bool isprime = true;
    cout << "enter a number to find a prime or not\n";
    cin >> number;
    // for (int i = 2; i < number; i++)
    for (int i = 2; i*i<= number; i++)
    {
        if (number % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime)
    {
        cout << "is a prime number";
    }
    else
    {
        cout << "is not a prime number";
    }
    return 0;
}
