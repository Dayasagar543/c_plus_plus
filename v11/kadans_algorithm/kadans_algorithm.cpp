#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    int current_sum=0,max_sum=INT_MIN;
    for(int i=0;i<vec.size();i++){
        current_sum+=vec[i];
            max_sum=max(current_sum,max_sum);
                if(current_sum<0){
                current_sum=0;
             }
   }
    cout<<max_sum<<endl;
}