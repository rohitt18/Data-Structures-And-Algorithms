#include <iostream>
using namespace std;

// mini-calculator using switch case

int main()
{
    int a, b;

    cout << "Enter the value of a ";
    cin >> a;

    cout << "Enter the value of b ";
    cin >> b;

    char operation;
    cout << "Enter the Operation you want to perform ";
    cin >> operation;

    switch (operation)
    {

    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:
        break;
    }

    cout << endl;

    return 0;
}