#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Write a character between a-e: ";
    cin >> button;

    if (button == 'a')
    {
        cout << "Hello" << endl;
    }

    else if (button == 'b')
    {
        cout << "Namaste" << endl;
    }

    else if (button == 'c')
    {
        cout << "Salut" << endl;
    }

    else if (button == 'd')
    {
        cout << "Hola" << endl;
    }

    else if (button == 'e')
    {
        cout << "Ciao" << endl;
    }

    else
    {
        cout << "I dont know any more languages 😢" << endl;
    }

    return 0;
}