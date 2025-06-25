#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "please enter the marks\n";
    cin >> marks;
    // else if
    if (marks >= 90)
    {
        cout << "excellent keep it up\n";
    }
    else if (marks >= 80)
    {
        cout << "good keep it up\n";
    }
    else if (marks >= 70)
    {
        cout << "imporve to reach good keep it up\n";
    }
}