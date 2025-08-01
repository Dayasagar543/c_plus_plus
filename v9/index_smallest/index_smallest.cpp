#include <iostream>
#include <climits>
using namespace std;
int smallest_value(int array[], int number)
{
    int smallest = array[0], index = 0;
    for (int i = 1; i < number; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            index = i;
        }
    }
    cout << "The smallest value is " << smallest << endl;
    cout << "The smallest index is " << index << endl;
    return smallest;
}

int main()
{
    int array[13] = {-23, 23, 1, 2, 4, 12, 5, -55, 10, 11, 21, 32, 0};
    int array1[14] = {23, 2, 4, 5, 6, 10, 1, 21, 0, 2, 23, -11, -44, 32};
    cout << "smallest number " << smallest_value(array, 10) << endl;
    cout << "smallest number " << smallest_value(array1, 14) << endl;
    return 0;
}