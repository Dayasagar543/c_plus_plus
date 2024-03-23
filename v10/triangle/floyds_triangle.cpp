#include <iostream>
using namespace std;

int main()
{
    int value, i, j;
    cout << "please input the numbers to create floyds triangle \n";
    cin >> value;
    int constant = 1;
    for (i = 1; i <= value; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << constant << "  ";
            constant += 1;
        }
        cout << "\n";
    }
    return 0;
}