#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout << "How much savings do you have? $";
    cin >> savings;

    if (savings > 6000000)
    {
        cout << "You should buy a Mercedes-Benz M-Class!";
    }
    else if (savings > 400000)
    {
        cout << "You should buy a Hyundai i10!";
    }
    else
    {
        cout << "You dont have the enough money to buy any car.";
    }

    return 0;
}