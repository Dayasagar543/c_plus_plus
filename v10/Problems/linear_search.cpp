#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    // int target = 9;
    int target = 7;
    for (int i : vec)
    {
        if (i == target)
        {
            cout << "target found " << i << endl;
        }   
    }
    return 0;
} // namespace std
