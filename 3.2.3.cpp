#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "Write First number: ";
    cin >> n1;
    cout << "Write Second number: ";
    cin >> n2;

    char op;
    cout << "Write an operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "Enter some other operator." << endl;
        break;
    }

    return 0;
}