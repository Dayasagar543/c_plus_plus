#include <iostream>
using namespace std;
int main()
{
    int base_tri;
    cout << "please enter basea of a triangle\n";
    cin >> base_tri;
    for (int i = base_tri; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << "\t";
        }
        cout << "\n";
    }

    return 0;
}