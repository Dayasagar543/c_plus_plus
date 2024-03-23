#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter you are age to check your eligibility:\n";
    cin >> age;
    if (age < 18)
    {
        cout << "you are not eligible to vote";
    }
    else
    {
        cout << "you are eligible to vote";
    }

    return 0;
}