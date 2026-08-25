#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int>&vec);
void swap(int &a , int &b);
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    for(int value:vec){
        cout<<value<<endl;
    }
    cout<<"\n"<<endl;
    vector<int> rev_vec=reverse(vec);
    for(int i=0;i<rev_vec.size()-1;i++){
        cout<< rev_vec[i]<<endl;
    }
    
}
vector<int> reverse(vector<int>&vec){
    int start=0,end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
return  vec;
}
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}