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
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        for (int j = base_number - i; j >= 0; j--)
        {
            cout << ch << "";
        }
        ch += 1;
        cout << "\n";
    }

    return 0;
}