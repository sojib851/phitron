#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "Vowel\n";
        break;
    case 'e':
        cout << "Vowel\n";
        break;
    case 'i':
        cout << "Vowel\n";
        break;
    case 'o':
        cout << "Vowel\n";
        break;
    case 'u':
        cout << "Vowel\n";
        break;

    default:
        cout << "Consonant";
        break;
    }

    return 0;
}