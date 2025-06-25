#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "please enter a characater \n";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "the letter is a small letter\n";
    }
    else
    {
        cout << "capital letter\n";
    }
}