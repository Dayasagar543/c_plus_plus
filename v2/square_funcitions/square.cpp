#include <iostream>
using namespace std;
int area_func(int side);
int perimeter_func(int side);
int main()
{
    int area, perimeter, side;
    cout << "enter the side of the square to calcuate are and perimeter" << endl;
    cin >> side;
    cout << "area of the square is: " << area_func(side) << endl;
    cout << "perimeter of the square is: " << perimeter_func(side) << endl;
}

int area_func(int side)
{
    return side * side;
}

int perimeter_func(int side)
{
    return 4 * side;
}