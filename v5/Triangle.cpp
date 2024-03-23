#include <iostream>
using namespace std;

int main()
{
    cout << "enter the sides of a triangle \n";
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3 && side3 == side1)
    {
        cout << "Eqilateral triangle   \n";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << "Isoceles triangle  \n";
    }
    else
    {
        cout << "Scalen triangle  \n";
    }
    return 0;
}