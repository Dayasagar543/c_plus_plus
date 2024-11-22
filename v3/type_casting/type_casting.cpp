#include <iostream>
using namespace std;
int main()
{
    // implicit conversion --automatically done by the computer as it casts it to higer space blocks
    char Alphabet = 'A';
    cout << Alphabet << endl;

    // explicit conversion -- should be done by human manually so that computer purge the block into smaller space of blocks
    int a = 65;
    char alphabet = (char)a;
    cout << alphabet << endl;

    return 0;
}