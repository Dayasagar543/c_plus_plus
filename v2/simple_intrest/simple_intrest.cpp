#include<iostream>
using namespace std;
int main(){
    cout<<"to calculate the simple intrest please input the data in the following order 1.price 2.time 3.rate of intrest"<<endl;
    int simple_intrest=0,price=0,time=0,rate_of_intrest=0;
    cout<<"price"<<endl;
    cin>>price;
    cout<<"time"<<endl;
    cin>>time;
    cout<<"rate of intrest"<<endl;
    cin>>rate_of_intrest;
    simple_intrest=(price*time*rate_of_intrest)/100;
    cout<<"the simple intrest is "<<simple_intrest <<endl;
}