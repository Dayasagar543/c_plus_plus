#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){

    vector<int> vec={1,3,4,5,6,7,4,5,6,7};
    int max_sum=0;
    for(int start=0;start<vec.size();start++){
        int current_sum=0;
        for(int end=start;end<vec.size();end++){
            current_sum+=vec[end];
        }
        max_sum=max(current_sum,max_sum);
    }
    cout<<max_sum<<endl;
}