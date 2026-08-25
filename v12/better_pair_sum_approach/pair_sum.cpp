#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> pairs(vector<int> vec,int target);
int main(){

vector<int> vec={1,3,4,5,6,7};
 vector<int> values=pairs(vec,11);
 for(int i : values){
    cout<<i<<endl;
 }

}

vector<int> pairs(vector<int> vec,int target){
    vector<int> new_vector;
    int start=0,end=vec.size();
    while(start<end){
        if((vec[start]+vec[end])==target){
            new_vector.push_back(vec[start]);
            new_vector.push_back(vec[end]);
            start++;
            end--;
        }else if((vec[start]+vec[end])>target){
            end--;
        }else if((vec[start]+vec[end])<target){
            start++;
        }
    }
    return new_vector;
}