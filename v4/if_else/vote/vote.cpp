#include<iostream>
using namespace std;
int main(){

    int age;
    cout << "please enter your vote" << endl;
    cin >> age;
    if(age>18){
        cout << "you can vote";
    }else{
        cout << "you cannot vote";
    }
    return 0;
}