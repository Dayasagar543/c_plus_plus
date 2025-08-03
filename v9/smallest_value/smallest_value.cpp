#include <iostream>
using namespace std;
int smallest_value(int array[], int number)
{
    int smallest = array[0];
    for (int i = 1; i < number; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    cout << "The smallest value is " << smallest << endl;
    return smallest;
}
int main()
{
    int array[9] = {23, 2, 4, 5, 6, 10, 11, 21, 32};
    int array1[14] = {23, 2, 4, 5, 6, 10, 1, 21, 0, 2, 23, -11, -44, 32};
    smallest_value(array, 9);
    smallest_value(array1, 14);
    return 0;
}