#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Write a character between a-e: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;

    case 'b':
        cout << "Namaste" << endl;
        break;

    case 'c':
        cout << "Salut" << endl;
        break;

    case 'd':
        cout << "Hola" << endl;
        break;

    case 'e':
        cout << "Ciao" << endl;
        break;

    default:
        cout << "I dont more languages 😅" << endl;
        break;
    }

    return 0;
}