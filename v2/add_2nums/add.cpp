#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
    int a, b;
    cout << "enter two numbers: " << endl;
    cin >> a >> b;
    cout << "sum of two numbers is: " << sum(a, b) << endl;
}

int sum(int a, int b)
{
    return a + b;
}