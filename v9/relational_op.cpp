#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Input the value wether to check its less than greater than 10 \n";
    cin >> value;
    if (value > 10)
    {
        cout << "greater than 10  \n";
    }
    else if (value < 10)
    {
        cout << "value is less than 10 \n";
    }
    else
    {
        cout << "value is equal to 10 \n";
    }
    return 0;
}