#include <iostream>
using namespace std;
int main()
{
    cout << "input the side of the triangle";
    int side, i, j;
    cin >> side;
    for (i = side; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
