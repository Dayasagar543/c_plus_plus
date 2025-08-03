#include <iostream>
using namespace std;
int binary_decimal(int b_number)
{
    int  number=0, power = 1;
    while (b_number > 0)
    {
        int remainder = b_number % 10;
        number += remainder * power;
        b_number /= 10;
        power *= 2;
    }
    cout << "the final number is " << number << endl;
    return number;
}
int main()
{
    int binary_format;
    cout << "please enter the binary format to know the decimal number" << endl;
    cin >> binary_format;
    binary_decimal(binary_format);
    return 0;
}
