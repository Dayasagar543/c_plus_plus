#include <iostream>
using namespace std;
int main()
{

    int a = 5, b, c, d, e;
    b = a++;
    cout << "the post increment would result in same value " << b << endl;
    c = ++b;
    cout << "the pre increment would result in same value " << c << endl;
    d = --b;
    cout << "the pre decrement would result in same value " << d << endl;
    e = b--;
    cout << "the post increment would result in same value " << e << endl;
    return 0;
}