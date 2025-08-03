#include <iostream>
using namespace std;
int get_age(int age)
{
    if (age > 18)
    {
        cout << "valid age to vote\n";
    }else{
        cout << "not a valid age to vote \n";
    }
    return age;
}
int main()
{
    int age;
    age=get_age(22);
    cout << age <<"\t";
    get_age(28);
    get_age(18);
    return 0;
}