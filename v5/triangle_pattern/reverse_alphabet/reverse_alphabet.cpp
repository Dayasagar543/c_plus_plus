#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    for (int i = 0; i < base_number; i++)
    {
        char ch = 'A';
        ch += i;
        for (int j = 0; j <=i; j++)
        {
            cout << ch << "\t";
            ch -= 1;
        }
        cout << "\n";
    }

    return 0;
}