#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "please input the size of side of rhombus \n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= n; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}