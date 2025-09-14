#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(1);
    cout << "printing the size " << vec.size() << endl;
    cout << "printing the capacity " << vec.capacity() << endl;

    return 0;
}