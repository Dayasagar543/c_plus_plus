#include <iostream>
using namespace std;

int main()
{
    cout << "please do enter the values to check equality \n";
    int val1, val2;
    cin >> val1 >> val2;
    if (val1 == val2)
    {
        cout << "equal";
    }
    else
    {
        if (val1 > val2)
        {
            cout << "first value is greater than the second one";
        }
        else
        {
            cout << "the second value is greater than the first one";
        }
    }
    return 0;
}