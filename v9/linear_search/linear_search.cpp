#include <iostream>
using namespace std;
int linear_serach(int array[], int length)
{
    int value;
    cout << "please enter the value you want to check if its in array \n";
    cin >> value;
    //    linear search
    for (int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            cout << "the value is present in the array " << array[i] << endl;
            return i;
        }
    }
    return -1;
}
int main()
{

    int array[5] = {1, 2, 3, 4, 5};    // static array declaration
    int array1[] = {2, 3, 5, 6, 7, 8}; // can be delaared both ways dynamic
    // cout << sizeof(array1) << endl;
    cout << linear_serach(array, 5) << endl;
    cout << linear_serach(array1, 6) << endl;

    return 0;
}