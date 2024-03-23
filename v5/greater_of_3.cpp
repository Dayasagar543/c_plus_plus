#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "input 3 numbers\n";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "the max value is \t : " << a;
    }
    else if (b > a && b > c)
    {
        cout << "the max value is b:\t" << b;
    }
    else
    {
        cout << "the max value is c: \t" << c;
    }

    return 0;
}