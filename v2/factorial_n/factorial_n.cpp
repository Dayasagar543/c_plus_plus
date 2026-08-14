#include <iostream>
using namespace std;

int main(){
    int fact_number=0,factorial=1;
    cout<<"enter a number to know its factorial value "<<endl;
    cin>> fact_number;
    for(int i =1;i<=fact_number;i++){
        factorial*=i;
        cout<<factorial<<endl;
    }
    cout<<factorial;
}