#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << "\t";
        }
        cout << "\n";
    }

    return 0;
}