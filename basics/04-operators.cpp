#include <iostream>
using namespace std;

// Arithmetic operators =>  +, -, *, /
// Modulo operator =>  %
// Relational operators =>  =, >, <, >=, <=, !=
// Logical operators =>  &&, ||, !

int main()
{

    // int/int => int
    int a = 2 / 5;
    cout << a << endl;

    cout << 2.0 / 5 << endl;

    // float/int => float
    float b = 2.0 / 5;
    cout << b << endl;

    // double/int => double
    double c = 2.0 / 5;
    cout << c << endl;

    // Relational operators
    int y = 2;
    int z = 3;

    bool first = (y == z);
    cout << first << endl;

    bool second = (y > z);
    cout << second << endl;

    bool third = (y < z);
    cout << third << endl;

    bool fourth = (y >= z);
    cout << fourth << endl;

    bool fifth = (y <= z);
    cout << fifth << endl;

    bool sixth = (y != z);
    cout << sixth << endl;

    // Logical operators
    // !
    int r = 0;
    cout << !r << endl;
}