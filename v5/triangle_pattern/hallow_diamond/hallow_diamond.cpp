#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "please enter a number to print a hallow diamond";
    cin >> number;
    // top of the diamond
    for (int i = 0; i < number; i++)
    {
        // spaces
        for (int j = 0; j <= number - i - 1; j++)
        {
            if (j < number - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        // diamond pattern
        for (int k = 0; k <= (i * 2) - 1; k++)
        {
            if (k < (i * 2) - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    // bottom part of the diamond
    // rows
    for (int i = 0; i < number - 1; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        
        if (i != number - 2)
        {
            // spaces
            for (int k = 0; k < 2 * (number - i) - 5; k++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << "\n";
    }
}
