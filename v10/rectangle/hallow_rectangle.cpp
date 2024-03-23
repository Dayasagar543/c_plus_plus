#include <iostream>
using namespace std;

int main()
{
    int length, width, i, j;
    cout << "specify the sides of the rectangle \n";
    cout << "the lenght of the rectangle \n";
    cin >> length;
    cout << "the width of the rectangle \n";
    cin >> width;

    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= width; j++)
        {
            if (i == 1 || j == 1 || i == length || j == width)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}