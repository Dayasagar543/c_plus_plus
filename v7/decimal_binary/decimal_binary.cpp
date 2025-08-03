#include <iostream>
using namespace std;
int decimal_to_binary(int number)
{
    int inputnumber = number;
    int bi_number = 0, power = 1;
    while (number > 0)
    {
        int remainder = number % 2;
        number = number / 2;
        bi_number += (remainder * power);
        power *= 10;
    }
    cout << "the binary format of " << inputnumber << " is " << bi_number << endl;
}
int main()
{
    decimal_to_binary(5);

    for (int i = 0; i < 20; i++)
    {
        decimal_to_binary(i);
    }

    return 0;
}