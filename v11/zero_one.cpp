#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "please enter the number of side you";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1"
                     << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}