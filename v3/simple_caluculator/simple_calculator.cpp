#include<iostream>
using namespace std;
int main(){
    int sum=0,difference=0,product=0,division=0,modulus=0,num1=0,num2=0;
    cout<< " please enter 2 number to do the arthematic operations on the numbers " <<endl;
    cin>>num1;
    cin>>num2;
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    division=num1/num2;
    modulus=num1%num2;
    cout<<sum << " is the sum of" << num1 <<"&"<<num2 <<endl;
    cout<<difference << " is the difference of" << num1 <<"&"<<num2 <<endl;
    cout<<product << " is the product of" << num1 <<"&"<<num2 <<endl;
    cout<<division << " is the division of" << num1 <<"&"<<num2 <<endl;
    cout<<modulus << " is the modulus of" << num1 <<"&"<<num2 <<endl;
    
}