#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    for (int i = 0; i <= base_number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        cout << "\n";
    }

    return 0;
}