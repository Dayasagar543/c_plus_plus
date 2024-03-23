#include <iostream>
using namespace std;
int main()
{
    cout << "enter your budget \n";
    int amount;
    cin >> amount;
    if (amount < 500)
    {
        if (amount < 200)
        {
            cout << "ravali";
        }
        else
        {
            cout << "madhuri";
        }
    }
    else if (amount > 2000)
    {
        cout << "ravika \n";
    }
    else
    {
        cout << "friends \n";
    }
}