#include <iostream>
using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 5};    // static array declaration
    int array1[] = {2, 3, 5, 6, 7, 8}; // can be delaared both ways dynamic
    cout << sizeof(array1) << endl;
    cout << "The size of the array is " << sizeof(array1) / sizeof(int) << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    int array2[10] = {}; // can be delaared both ways dynamic
    for (int i = 0; i < 10; i++)
    {
        cout << "enter a number to add to the array \n";
        cin >> array2[i];
    }
    cout << "The values stored in the array\n ";
    for (int i = 0; i < 10; i++)
    {
        cout << array2[i]<<endl;
    }
    
    

    return 0;
}