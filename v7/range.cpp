#include <iostream>
using namespace std;

int main()
{
    cout << "input the range you want to find the prime numbers in \n";
    int value1, value2, i, remainder;
    cin >> value1 >> value2;
    for (i = value1; i <= value2; i++)
    {
        int j;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                cout << "not prime \t"
                     << i << "\n";
                break;
            }
        }
        if (j == i)
        {
            cout << "prime number \t"
                 << i << "\n";
        }
    }
    return 0;
}