#include <iostream>
using namespace std;
int main()
{

    int number=0;
    cout << "please enter a number " << endl;
    cin >> number;
    if (number >= 0)
    {
        cout << "the number is greater";
    }
    else
    {
        cout << "the number is not greater than zero or less than zero ";
    }
    return 0;
}