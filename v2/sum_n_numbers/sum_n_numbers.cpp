#include <iostream>
using namespace std;
int main(){
    int sum=0,n=0;
    cout<<"hi there please input a number to find the sum of number till that number";
    cin>>n;
    for(int i=0 ;i<=n;i++){
        sum+=i;
        cout<<sum <<"\n";
    }
    cout<<"the sum of the total numbers is "<<sum<<endl;
}