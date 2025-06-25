#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "please enter the marks\n";
    cin >> marks;
    // else if
    if (marks >= 91 && marks <= 100)
    {
        cout << "excellent keep it up\n";
    }
    else if (marks <= 90 && marks>= 80)
    {
        cout << "good keep it up\n";
    }
}