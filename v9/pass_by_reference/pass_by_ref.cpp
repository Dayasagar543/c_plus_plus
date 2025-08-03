#include <iostream>
using namespace std;
int double_value(int array[], int value)
{
    for (int i = 0; i < value; i++)
    {
        array[i] = 2 * array[i];
    }
}
int main()
{
    int array[] = {1, 2, 3};
    double_value(array, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " " << endl;
    }

    return 0;
}