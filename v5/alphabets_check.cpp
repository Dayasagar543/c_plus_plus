#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a character to know wether vovel or a consonent \n";
    char alphabet;
    cin >> alphabet;
    if (alphabet == 'a' || alphabet == 'A' || alphabet == 'e' || alphabet == 'E' || alphabet == 'i' || alphabet == 'I' || alphabet == 'o' ||
        alphabet == 'O' || alphabet == 'u' || alphabet == 'U')
    {
        cout << "vovel";
    }
    else
    {
        cout << "consonent";
    }
    return 0;
}
