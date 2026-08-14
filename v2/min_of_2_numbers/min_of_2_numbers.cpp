#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a number to compare " << endl;
    cin >> a;
    cout << "enter another number to compare " << endl;
    cin >> b;
    if (a < b)
    {
        cout << a << " is the minimum number" << endl;
    }
    else
    {
        cout << b << " is the minimum number" << endl;
    }
}
