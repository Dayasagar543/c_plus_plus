#include <iostream>
using namespace std;
int main()
{
    int a = 25, b = 23;
    cout << a + b << " the result of the operation  sum" << endl;
    cout << a - b << " the result of the operation difference " << endl;
    cout << a * b << " the result of the operation multiplication " << endl;
    cout << a / b << " the result of the operation division " << endl;
    cout << a % b << " the result of the operation modulo " << endl;

    cout <<"to princt decimal one must typecast  " << (a / double (2)) << endl;
    return 0;
}