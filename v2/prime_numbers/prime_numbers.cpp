#include<iostream>
using namespace std;
int prime_number(int value);
int main(){
    //  prime number program
    int prime_numberto_be=0;
    cout<<"hi there input number to check if its a prime number or not "<<endl;
    cin>>prime_numberto_be;
    if(prime_number(prime_numberto_be)==true){
        cout<<"its a prime number"<<endl;
    }else{
        cout<<"not a prime number"<<endl;
    }
   
}

int prime_number(int value){
 bool prime=true;
    for(int i=2;i<value;i++){
        if (value%i==0){
            prime=false;
            return prime;
        }
    }
    return prime;
}