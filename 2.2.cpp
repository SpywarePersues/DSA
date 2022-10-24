#include <iostream>
using namespace std;

int main()
{
    int amount1;
    cout << "Enter the First amount : $";
    cin >> amount1;

    int amount2;
    cout << "Enter the Second amount : $";
    cin >> amount2;

    int sum = amount1 + amount2;
    cout << "You've got $";
    cout << sum;

    return 0;
}