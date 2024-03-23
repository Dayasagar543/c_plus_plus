#include <iostream>
using namespace std;
int main()
{
    int side, i, j;
    cout << "enter the side of the triangle \n";
    cin >> side;
    for (i = 1; i <= side; i++)
    {
        for (j = 1; j <= side; j++)
        {
            if (j <= side - i)
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

    return 0;
}