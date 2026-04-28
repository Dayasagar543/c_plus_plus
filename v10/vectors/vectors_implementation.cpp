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
    cout << "the size is " << vec2.size() << endl;                // size function
    cout << "the index of value is " << vec2.at(3) << endl;       // size function
    cout << "printing the front values " << vec2.front() << endl; // printing the front values
    cout << "printing the back values  " << vec2.back() << endl;  // printing the back values

    vector<char> vec3 = {'a', 'b', 'c'};
    cout << "prinitng the characters using the vectors concept\n";
    for (char value : vec3)
    {
        cout << value << endl;
    }

    vector<int> vec4(5, 0);
    for (int i = 0; i < 5; i++)
    {
        vec4[i] = i + 1;
    }
    cout << "printing the value of the vector four \n";
    for (int i : vec4)
    {
        cout << i << endl;
    }
    cout << "printing the values of front and back of the vectors " << endl;
    cout << vec4.front() << endl;
    cout << vec4.back() << endl;
    cout << vec4.at(1) << endl;

    // capacity of the vectors
    vector<int> vec5;
    cout << "trying to observe the size changes in the vector when the values are pushed back " << endl;
    cout << vec5.size() << endl;
    vec5.push_back(5);
    cout << "the capacity of the vectors is " << endl;
    cout << vec5.capacity() << endl;
    cout << vec5.size() << endl;
    vec5.push_back(6);
    cout << "the capacity of the vectors is " << endl;
    cout << vec5.capacity() << endl;
    cout << vec5.size() << endl;
    vec5.push_back(5);
    cout << "the capacity of the vectors is " << endl;
    cout << vec5.capacity() << endl;
    vec5.push_back(5);
    cout << vec5.size() << endl;
    cout << "the capacity of the vectors is " << endl;
    cout << vec5.capacity() << endl;
    vec5.push_back(5);
    cout << vec5.size() << endl;
    cout << "the capacity of the vectors is " << endl;
    cout << vec5.capacity() << endl;

    return 0;
}