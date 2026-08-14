#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"input 2 numbers to compare the max value"<<endl;
    cin >> num1;
    cin>>num2;
    if(num1>num2){
        cout<< num1 <<" greater than " <<num2 <<endl;
    }else{
        cout << num1 <<" less than " <<num2 << endl;
    }
}