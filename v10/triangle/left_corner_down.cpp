#include <iostream>
using namespace std;

int main()
{
    int i, j, side;
    cout << "input the triangle height:";
    cin >> side;
    for (i = 1; i <= side; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}