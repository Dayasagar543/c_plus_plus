
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Hi there input your pocket money \n";
    cin >> amount;
    for (int i = 0; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        if (amount < 0)
        {
            cout << "you are going bank rupt \n";
        }

        if (amount > 0)
        {
            cout << "enter the amount you want to deduct from your account \n";
            int deduction_amount;
            cin >> deduction_amount;
            amount -= deduction_amount;
            cout << amount << "\n";
            cout << "can go out \n";
        }
        else
        {
            break;
        }
    }

    return 0;
}