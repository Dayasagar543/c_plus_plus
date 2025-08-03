#include <iostream>
using namespace std;
int reverse_number(int number)
{
    int final_number = 0;
    while (number > 0)
    {
        int remainder = number % 10;
        number /= 10;
        final_number = final_number * 10 + remainder;
    }
    return final_number;
}
int main()
{
    int number;
    cout << "please input the number to reverse \n " << endl;
    cin >> number;
    cout << reverse_number(number);
}