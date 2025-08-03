#include <iostream>
using namespace std;
int main()
{
    // bitwise opeartions
    cout << "the result after the operations is for bitwise  and operations  " << (4 & 8) << endl;
    // expecting 12
    cout << "the result after the operations is for bitwise or operation  " << (4 | 8) << endl;
    // xor operation or ^ opertion in which it says if different bits its going to be 1 if same bits then it would be zero
    cout << "the result after the operations is for bitwise xor operation   " << (4 ^ 8) << endl; // expecting 12
    // left shift operator
    cout << " the left shif of the give number is " << (4 << 1) << endl; // 8
    // right shift operator
    cout << " the left shif of the give number is " << (4 >> 1) << endl; // 2

    // order of opertion or  order of precedence and in the operations if there are of equal precedence then look at he order of associativity
    // as like if they are from left to right or right to left and to the operation .
    int value = 35 - 12 * 2;
    cout << "the result after proper precedence is " << value << "  " << endl;
    
    return 0;
}