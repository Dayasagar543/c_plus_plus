#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    int num = 1;
    for (int i = 0; i < base_number; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << num << "\t";
            num++;
        }
        cout << "\n";
    }

    return 0;
}