#include<iostream>
#include <vector>
using namespace std;

int main(){
 vector<int> vec = {1, 4,7, 2, 3, 4, 5, 6, 7};
  for(int start =0;start<vec.size();start++){
    for(int end=start;end<vec.size();end++){
        // cout<< vec[i]<<vec[j]<<"\t";--------------this code will show you where the sub array starts and where it ends
        for(int i=start;i<=end;i++){
            cout<<vec[i];//---------------this code will print the sub arrays values 
        }
        cout<<" ";
    }
    cout<<endl;
  }
}