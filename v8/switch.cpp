#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "choose the number to know the color \n";
    cin >> value;
    switch (value)
    {
    case 1:
        cout << "blue \n";
        break;
    case 2:
        cout << "red \n";
        break;
    case 3:
        cout << "green \n";
        break;
    case 4:
        cout << "black \n";
        break;
    case 5:
        cout << "white \n";
        break;

    default:
        cout << "you have selected the wrong input \n";
        break;
    }

    return 0;
}