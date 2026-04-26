#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i <=6; i++)
    {
        for (int j = i; j <=6; j++)
        {
            cout << vec[j];
        }
        cout << "" << endl;
    }
}