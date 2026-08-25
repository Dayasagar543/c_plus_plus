#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> pair_sum(vector<int> vec,int target);
int main(){
 vector<int> vec={1,3,4,5,6,7};
 vector<int> values=pair_sum(vec,11);
 for(int i : values){
    cout<<i<<endl;
 }
}

vector<int> pair_sum(vector<int> vec,int target){
    vector<int> indexes;
    for(int i=0;i<vec.size();i++){
        for(int j=1;j<vec.size();j++){
            if(vec[i]+vec[j]==target){ 
            indexes.push_back(vec[i]);
            indexes.push_back(vec[j]);
            // cout<<vec[i];
            // cout<<vec[j];
            }     
        }
        // cout<<endl;
    }
return indexes;
}