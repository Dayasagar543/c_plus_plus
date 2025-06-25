#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    float pie = 3.14234f;
    char value = 'a';
    bool issafe = true;
    double number = 100.99;

    cout << age << " is the age of the person " << endl;
    cout << sizeof(age) << endl;
    cout << pie << " is the value considered for calculating the circle area and perimeter" << endl;
    cout << sizeof(pie) << endl;
    cout << value << " is the value of the person " << endl;
    cout << sizeof(value) << endl;
    cout << issafe << " is the issafe of the person " << endl;
    cout << sizeof(issafe) << endl;
    cout << number << " is the number of the person " << endl;
    cout << sizeof(number) << endl;
    return 0;
}
