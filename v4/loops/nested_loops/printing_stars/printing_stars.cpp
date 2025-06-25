#include <iostream>
using namespace std;
int main()
{
    int rows, columns;

    cout << "enter a number to set rows\n";
    cin >> rows;
    cout << "enter a number to set columns\n";
    cin >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << "*\t";
        }
        cout << "\n";
    }
}
