#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, columns;
    cout << "please input the sides of rectangle \n";
    cout << "input the rows here";
    cin >> rows;
    cout << "input the columns here";
    cin >> columns;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}