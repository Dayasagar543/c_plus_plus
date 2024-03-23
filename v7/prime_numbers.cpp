#include <iostream>
using namespace std;

int main()
{
    char character;
    while (character != 't' || character != 'T')
    {
        cout << "input number to check wether prime or not \n";
        int value;
        cin >> value;
        for (int i = 2; i < value; i++)
        {
            if (value % i == 0)
            {
                value = value % i;
                cout << "not a prime number \n";
                break;
            }
        }
        if (value != 0)
        {
            cout << "prime number \n";
        }
    }
    return 0;
}