#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec; // length would be 0
    vector<int> vec = {1, 2, 3, 4};
    vector<int> vec1(4, 1);
    vector<int> vec2;
    // cout << vec1[0] << endl;
    // cout << vec1[1] << endl;
    // cout << vec1[2] << endl;
    // cout << vec1[3] << endl;
    // cout << vec[0] << endl;
    for (int i : vec1)
    {
        cout << i << endl;
    }

    // vector methods we have different methods for the vectors
    cout << "the size is " << vec1.size() << endl; // size function
    vec2.push_back(2);                             // push_back
    vec2.push_back(4);                             // push_back
    vec2.push_back(5);                             // push_back
    vec2.push_back(6);                             // push_back
    vec2.push_back(9);                             // push_back
    cout << "the push back @ 0th index " << vec2[0] << endl;
    cout << "the push back @ 1st index " << vec2[1] << endl;
    vec2.pop_back(); // pop_back
    cout << "the pop back is " << vec2[0] << endl;
    cout << "the size is " << vec2.size() << endl; // size function
    cout << "the index of value is " << vec2.at(3) << endl; // size function
    cout <<"printing the front values "<< vec2.front() << endl;                  // printing the front values
    cout <<"printing the back values  "<< vec2.back() << endl;                   // printing the back values

    return 0;
}