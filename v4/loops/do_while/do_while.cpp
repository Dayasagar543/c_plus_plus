#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "please enter the number you want to print till \n";
    cin >> number;
    int i = 0;
   do{
        cout << i << "\n";
        ++i;
   } while (i <= number);
}