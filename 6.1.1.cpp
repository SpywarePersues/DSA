#include <iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
    return;
}

int add(int num1, int num2)
{
    cout << "First number: ";
    print(num1);
    cout << "Second number: ";
    print(num2);
    int sum = num1 + num2;
    cout << "Total: ";
    return sum;
}

int main()
{
    int a = 2;
    int b = 7;
    cout << add(a, b) << endl;

    return 0;
}