#include <iostream>
using namespace std;
int main()
{
    int base_number;
    cout << "enter the base number of a triangle \n";
    cin >> base_number;
    for (int i = 1; i <=base_number; i++)
    {
      
        for (int j = i; j > 0; j--)
        {
            cout <<j<< "\t";
        }
        cout << "\n";
    }

    return 0;
}