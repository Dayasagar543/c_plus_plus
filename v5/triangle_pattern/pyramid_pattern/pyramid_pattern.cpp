#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    for (int i = 0; i <= base_number; i++)
    {

        for (int k = 1; k <= base_number - i-1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i+1; j++)
        {
            cout << j << "";
        }

        for (int l = i; l>=1; l--)
        {
            cout << l << "";
        }

        cout << "\n";
    }

    return 0;
}