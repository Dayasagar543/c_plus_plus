#include <iostream>
using namespace std;
int largest_number(int array[], int number)
{
    int largest = array[0];
    for (int i = 1; i < number; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    return largest;
}
int main()
{

    int array[] = {23, 2, 2, 4, 5, 63, 4, 34, 22, 2, 21, 1, 24, 5, 5, 3, 2, 1};
    int array1[] = {23, 2, 2, 4, 5, 63, 4, 34, 22, 2, 21, 1, 89, 5, 5, 3, 2, 1};
    cout << largest_number(array, 18)<<endl;
    cout << largest_number(array1, 18)<<endl;

    return 0;
}