#include <iostream>
using namespace std;
int get_age(int age)
{
    if (age > 18)
    {
        cout << "valid age to vote\n";
    }
    else
    {
        cout << "not a valid age to vote \n";
    }
    return age;
}
int sum(int a, int b)
{
    return a + b;
}
int min_of(int a, int b)
{
    return a < b ? a : b;
}
int max_of(int a, int b)
{
    return a > b ? a : b;
}
int sum_n(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int fact_n(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int sum_digits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}
// binomial factorial
int nCr(int n, int r)
{
    int nfact = fact_n(n);
    int rfact = fact_n(r);
    int nrfact = fact_n(n - r);
    return nfact / (rfact * nrfact);
}
int main()
{
    int age;
    age = get_age(22);
    cout << age << "\t";
    get_age(28);
    get_age(18);
    cout << "the sum of the two numbers is \t" << sum(2, 4) << endl;
    cout << "the min of the two numbers is \t" << min_of(2, 4) << endl;
    cout << "the max of the two numbers is \t" << max_of(2, 4) << endl;
    cout << "the sum of n natural numbers is \t" << sum_n(5) << endl;
    cout << "the factorial of n natural numbers is \t" << fact_n(5) << endl;
    cout << "the sum of digits in a number is \t" << sum_digits(53) << endl;
    // int n = 8, r = 2;
    int n = 6, r = 3;
    cout << "the binomial factorial of the values n and r is \t" << nCr(n,r) << endl;

    return 0;
}