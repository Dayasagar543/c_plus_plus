#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    char ch = 'A';
    for (int i = 1; i <= base_number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << "\t";
            ch += 1;
        }
        cout << "\n";
    }

    return 0;
}