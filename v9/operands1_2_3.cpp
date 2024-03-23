#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 2, k = 3;
            //1  //0  //2//1  //3//2
    int m = i-- - j-- - k--;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << m << endl;
    return 0;
}