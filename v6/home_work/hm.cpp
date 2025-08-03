#include <iostream>
using namespace std;
// find a number is prime or not
void prime_number(int number)
{
    bool prime = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = false;
        }
    }
    if (prime)
    {
        cout << number << " its a prime number\n";
    }
    else
    {
        cout << number << " not a prime number\n";
    }
}
//  mumber of prime numbers in a range
void print_range_prime(int number)
{
    for (int i = 2; i <= number; i++)
    {
        prime_number(i);
    }
}
// nth fibonnaci term
void fibonacci(int number)
{
    int next = 0, previous = 0, current = 1;
    for (int i = 2; i <= number; ++i)
    {
        next = previous + current;
        previous = current;
        current = next;
    }
    cout << "the fibonacci number of the nth number is \t " << current << endl;
}
// function with switch case
void case_switch(int number)
{
    switch (number)
    {
    case 1:
        cout << "monday";
        break;

    case 2:
        cout << "tuesday";
        break;

    case 3:
        cout << "wednesday";
        break;

    case 4:
        cout << "thursday";
        break;

    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;

    default:
        cout << "wrong input ";
        break;
    }
}
int main()
{
    fibonacci(4);
    fibonacci(5);
    // print_range_prime(100);
    // prime_number(7);
    // prime_number(2);
    // prime_number(4);
    case_switch(3);
    return 0;
}