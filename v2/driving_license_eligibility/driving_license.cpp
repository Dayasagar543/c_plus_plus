#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<" enter the age to know the eligibility for the license " <<endl;
    cin>>age;
    if(age >18){
        cout<<"you are eligible to driving license"<<endl;
    }else{
        cout<< "you are not eligible to driving license "<<endl;
    }
}