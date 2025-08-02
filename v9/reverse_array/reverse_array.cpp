#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}
// void reverse_Array(int array[], int number)
// {
//     int start = 0;
//     int end = number - 1;
//     while (start < end)
//     {
//         swap(array[start], array[end]);
//         start++;
//         end--;
//     }
// }
int reverse_Array(int array[], int number)
{
    int array1[number] = {};
    for (int i = 0; i < number; i++)
    {
        array1[i] = array[number - 1 - i];
    }
    for (int i = 0; i < number; i++)
    {
        cout << array1[i] << "\t";
    }
    cout << "\n";
}

int main()
{
    int array[9] = {23, 2, 4, 5, 6, 10, 11, 21, 32};
    int array1[14] = {23, 2, 4, 5, 6, 10, 1, 21, 0, 2, 23, -11, -44, 32};
    reverse_Array(array, 9);
    // print_array(array, 9);
    reverse_Array(array1, 14);
    // print_array(array1, 14);

    return 0;
}