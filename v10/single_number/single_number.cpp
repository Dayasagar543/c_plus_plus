#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // xor is used for the unique value identification in array
    vector<int> vec = {4, 1, 2, 1, 2};
    int answer = 0;
    for(int value :vec){
        answer ^= value;
    }
    cout << "the unique value of the arrays is " << endl;
    cout << answer << endl;
}