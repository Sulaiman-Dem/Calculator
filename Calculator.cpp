#include <iostream>
using namespace std;

long double addition(long double num1, long double num2)
{

    return num1 + num2;
}

int main()
{
    long double num2;
    long double num1;

    cout << "Input first number: ";
    cin >> num1;

    cout << "Input second number: ";
    cin >> num2;

    addition(num1, num2);
    return 0;
}